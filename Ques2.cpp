#include<bits/stdc++.h>

int digits(long long int n){
	int ans=0;
	while(n){
		n=n/10;
		++ans;
	}
	return ans;
}

long long int product(long long int n){
	long long int p=1;
	while(n){
		int temp=n%10;
		p=p*temp;
		n=n/10;
	}
	return p;
}

int main(){
	long long int n;
	std::cin>>n;
	if(n<10){
		std::cout<<n<<std::endl;
		return 0;
	}
	int dig=digits(n);
	long long int temp=0;
	for(int i=1;i<dig;i++)
		temp=temp*10+9;
	long long int ans=product(temp);
	temp=n%10;
	temp=n-temp-1;
	ans=ans>product(temp)?ans:product(temp);
	temp=n%100;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	temp=n%1000;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	temp=n%10000;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	temp=n%100000;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	temp=n%1000000;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	temp=n%10000000;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	temp=n%100000000;
	temp=n-temp-1;
	if(temp>0)
		ans=ans>product(temp)?ans:product(temp);
	ans=ans>product(n)?ans:product(n);
	std::cout<<ans<<std::endl;
	return 0;
}