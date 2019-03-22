#include<bits/stdc++.h>

bool isPalin(long long int a){
	long long int temp=a, x=0;
	while(temp){
		int c=temp%10;
		x=x*10+c;
		temp/=10;
	}
	if(a==x)
		return true;
	else return false;
}

int main(){
	long long int n;
	std::cin>>n;
	std::vector<bool> a(10000005, true);
	a[0]=a[1]=false;
	for(long long int i=2;i<10000005; i++){
		if(a[i]&&(long long)i*i<10000005){
			for(long long int j=i*i; j<10000005; j+=i)
				a[j]=false;
		}
	}
	bool flag=true;long long int i=n, res=0;
	while(flag){
		if(a[i]&&isPalin(i)){
			res=i;
			flag=false;
		}
		++i;
	}
	std::cout<<res<<std::endl;
	return 0;
}