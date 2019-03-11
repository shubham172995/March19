#include<bits/stdc++.h>
int main(){
	long long n;
	std::cin>>n;
	std::vector<long long> a(n+1), b(n+1);
	long long v, p;v=p=0;
	for(long long i=1;i<=n;i++){
		std::cin>>a[i];
		b[a[i]]=i;
	}
	long long m=0;
	std::cin>>m;
	for(long long i=0;i<m;i++){
		long long temp;
		std::cin>>temp;
		v+=b[temp];
		p+=n-b[temp]+1;
	}
	std::cout<<v<<" "<<p<<std::endl;
	return 0;
}