#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> l(n), r(n);int total=0;
	int lo, ro;lo=ro=0;
	for(int i=0;i<n;i++){
		std::cin>>l[i]>>r[i];
		if(l[i]==1)++lo;
		if(r[i]==1)++ro;
	}
	if(lo<=n/2)total+=lo;
	else total+=n-lo;
	if(ro<=n/2)total+=ro;
	else total+=n-ro;
	std::cout<<total<<std::endl;
	return 0;
}