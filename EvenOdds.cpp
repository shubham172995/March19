#include<bits/stdc++.h>
int main(){
	long long int n, k;
	std::cin>>n>>k;
	long long int temp=0, ans=0;
	if(n%2==0)
		temp=n/2;
	else temp=n/2+1;
	if(k>temp){
		k=k-temp;
		ans=2*k;
	}
	else{
		ans=1+(2*(k-1));
	}
	std::cout<<ans<<std::endl;
	return 0;
}