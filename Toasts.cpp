#include<bits/stdc++.h>
int main(){
	int n, k, l, c, d, p, nl, np;
	std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int min=(l*k)/nl;
	min=min<(c*d)?min:(c*d);
	min=min<(p/np)?min:(p/np);
	min/=n;
	std::cout<<min<<std::endl;
	return 0;
}