#include<bits/stdc++.h>
int main(){
	long long int n, m, res=0;
	std::cin>>n>>m;
	std::vector<long long int> a(m);
	for(int i=0;i<m;i++){
		std::cin>>a[i];
		if(i==0)res=a[i]-1;
		else{
			if(a[i]>=a[i-1])
				res+=a[i]-a[i-1];
			else if(a[i]<a[i-1])
				res+=n-a[i-1]+a[i];
		}
	}
	std::cout<<res<<std::endl;
	return 0;
}