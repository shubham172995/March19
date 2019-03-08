#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;
	std::vector<int> a(n);
	int max=0, min=100, maxi=0, mini=0;int ans=0;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
		if(a[i]<=min){
			min=a[i];
			mini=i;
		}
	}
	if(maxi>mini){
		ans+=maxi;
		ans+=n-1-mini-1;
	}
	else if(maxi<mini){
		ans=n-1-mini;
		ans+=maxi;
	}
	else ans=0;
	std::cout<<ans<<std::endl;
	return 0;
}