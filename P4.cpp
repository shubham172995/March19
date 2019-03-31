#include<bits/stdc++.h>
int main(){
	long int n;
	std::cin>>n;
	std::vector<long int> a(n);
	for(long int i=0;i<n;i++)
		std::cin>>a[i];
	std::sort(a.begin(), a.end());
	std::vector<long int> tp, jp, ip;
	long int max=1, no=0;
	long int temp=1;
	for(long int i=1;i<n;i++){
		if(a[i]==a[i-1]){
			++temp;
			if(temp>max){
				max=temp;
				no=a[i-1];
			}}
			else temp=1;
	}
	bool flag=true;
	long int ans=0;
//while(flag){
	//std::cout<<"I am in\n";
	for(long int i=0;i<n;i++){
		if(a[i]==no)
			continue;
		if(abs(a[i]-a[i-1])==abs(a[i]-no)){
			if(a[i]>no)
				a[i]=a[i]-abs(a[i]-a[i-1]);
			else a[i]=a[i]+abs(a[i]-a[i-1]);
			tp.push_back(2);
			ip.push_back(i+1);
			jp.push_back(i);
			++ans;
		}
		else if(abs(a[i]+a[i-1])==abs(a[i]-no)){
			if(a[i]>no)
				a[i]=a[i]-abs(a[i]+a[i-1]);
			else a[i]=a[i]+abs(a[i]+a[i-1]);
			tp.push_back(1);
			ip.push_back(i+1);
			jp.push_back(i);
			++ans;
		}
		else if(abs(a[i]-a[i+1])==abs(a[i]-no)){
			if(a[i]>no)
				a[i]=a[i]-abs(a[i]-a[i+1]);
			else a[i]=a[i]+abs(a[i]-a[i+1]);
			tp.push_back(2);
			ip.push_back(i+1);
			jp.push_back(i+2);
			++ans;
		}
		else if(abs(a[i]+a[i+1])==abs(a[i]-no)){
			if(a[i]>no)
				a[i]=a[i]-abs(a[i]+a[i+1]);
			else a[i]=a[i]+abs(a[i]+a[i+1]);
			tp.push_back(1);
			ip.push_back(i+1);
			jp.push_back(i+2);
			++ans;
		}
	}/*
	int k=1;
	for(long int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			k=0;
			break;
		}
	}
	if(k==0)continue;
	else continue;
}*/
std::cout<<ans<<std::endl;
for(long int i=0;i<ans;i++)
	std::cout<<tp[i]<<" "<<ip[i]<<" "<<jp[i]<<std::endl;
	return 0;
}