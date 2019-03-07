#include<bits/stdc++.h>
int main(){
	int n, k;
	std::cin>>n>>k;
	std::vector<long long> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	std::vector<int> b(100);
	for(int i=0;i<n;i++)
		++b[a[i]%k];
	int ans=0;
	if(b[0]%2==0)ans=b[0];
	else ans=b[0]-1;
	int i=1;
	//std::cout<<ans<<std::endl;
	for(;i<=k/2;i++)
		if(i!=k-i){
			int temp=b[i]<b[k-i]?b[i]:b[k-i];
			//std::cout<<"Hey"<<temp<<std::endl;
			ans+=temp*2;
			//std::cout<<ans<<std::endl;
		}
		else {ans+=(b[i]%2==0)?b[i]:(b[i]-1);
			//std::cout<<ans<<std::endl;
		}
	std::cout<<ans<<std::endl;
	return 0;
}