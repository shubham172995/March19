#include<bits/stdc++.h>
int main(){
	long int n;
	std::cin>>n;
	std::vector<long int> a(n);
	for(long int i=0;i<n;i++)
		std::cin>>a[i];
	std::sort(a.begin(), a.end());
	std::vector<long int> inc, dec;
	dec.push_back(a[0]);
	bool flag=true;
	for(int i=1;i<n;i++){
		if(a[i]==a[i-1])
			inc.push_back(a[i]);
		else if(a[i]!=a[i-1])
			dec.push_back(a[i]);
		if(i>1&&(a[i]==a[i-1])&&(a[i]==a[i-2])){
			flag=false;
			break;
		}
	}
	if(!flag)
		printf("NO\n");
	else{
		printf("YES\n%ld\n", inc.size());
		for(int i=0;i<inc.size();i++)
			std::cout<<inc[i]<<" ";
		printf("\n%ld\n", dec.size());
		for(int i=dec.size()-1;i>=0;i--)
			std::cout<<dec[i]<<" ";
		std::cout<<std::endl;
	}
	return 0;
}