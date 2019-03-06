#include<bits/stdc++.h>

int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}

int main(){
	int q;
	scanf("%d", &q);
	while(q--){
	long long n;
	int t;
	std::cin>>n>>t;
	long long prod=1;
	int MOD=1000000007;
	int den=findMMI_fermat(t+1, MOD);
	for(int i=1;i<=t;i++)
		prod=((prod%MOD)*(i%MOD))%MOD;
	long long num=1;
	for(int i=1; i<=(t+1); i++)
		num=((num%MOD)*((n+i)%MOD))%MOD;
	num=(num*den)%MOD;
	num-=prod;
	num=(num+MOD)%MOD;
	std::cout<<num<<std::endl;
	}
	return 0;
}