#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		std::cin>>n;
		std::vector<long long int> a(n);
		for(long long int i=0;i<n;i++)
			std::cin>>a[i];
		std::sort(a.begin(), a.end());
		long long res=0;
		for(long long i=1;i<n;i++)
			if(a[i]==a[i-1])
				++res;
		std::cout<<res<<std::endl;
	}
	return 0;
}