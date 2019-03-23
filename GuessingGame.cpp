#include<bits/stdc++.h>

long long int gcd(long long int a, long long int b){
	if (b)
        return gcd(b, a % b);
    else
        return a;
}

int main(){
	long int t;
	scanf("%ld", &t);
	while(t--){
		long long int n, m;
		scanf("%lld %lld", &n, &m);
		long long int temp=0;
		if(n%2==1&&m%2==1){
			temp=((n/2)+1)*(m/2);
			temp+=(n/2)*((m/2)+1);
		}
		else if(n%2==0&&m%2==0){
			temp=(n/2)*(m/2);
			temp*=2;
		}
		else if(n%2==1&&m%2==0){
			temp=((n/2)+1)*(m/2);
			temp+=(n/2)*(m/2);
		}
		else if(n%2==0&&m%2==1){
			temp=(n/2)*(m/2);
			temp+=(n/2)*((m/2)+1);
		}
		long long int res=temp;
		long long int x=n*m;
		temp=gcd(x, temp);
		while(temp>1){
			x=x/temp;
			res=res/temp;
			temp=gcd(x, res);
		}
		std::cout<<res<<"/"<<x<<std::endl;
	}
	return 0;
}