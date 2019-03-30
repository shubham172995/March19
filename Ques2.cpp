#include<bits/stdc++.h>
using namespace std;

int numberofdigits(long long int no){
	int dig=0;
	while(no){
		no=no/10;
		++dig;
	}
	return dig;
}

long long int product(long long int n){
	long long int p=1;
	while(n){
		p=p*(n%10);
		n=n/10;
	}
	return p;
}

int main(){
	long long int n;
	cin>>n;
	if(n<10){
		cout<<n<<endl;
		return 0;
	}
	int dig=numberofdigits(n);
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
	cout<<ans<<endl;
	return 0;
}