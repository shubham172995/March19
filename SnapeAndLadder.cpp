#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int l, b;
		scanf("%d %d", &b, &l);
		double rmin=0, rmax=0;
		rmin=l*l-b*b;
		rmax=l*l+b*b;
		std::cout<<std::fixed<<std::setprecision(4)<<sqrt(rmin)<<" "<<sqrt(rmax)<<std::endl;
	}
	return 0;
}