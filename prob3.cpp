#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;long long max=0;
	std::vector<long long> a(n+1);
	for(int i=1;i<=n;i++){
		std::cin>>a[i];
	}
	std::sort(a.begin(), a.end());
	int ans=0;int temp=1;
	//for(int i=0;i<=max;i++)std::cout<<b[i]<<std::endl;
	for(int i=1;i<=n;i++){
		while(a[temp]+5<a[i])
			++temp;
		ans=ans>(i-temp+1)?ans:(i-temp+1);
	}
	std::cout<<ans<<std::endl;
}