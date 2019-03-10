#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;
	int p[n];
	for(int i=0;i<n;i++)
		std::cin>>p[i];
	double total=0;
	for(int i=0;i<n;i++){
		double temp=p[i]/100.0;
		total+=temp;
	}
	total/=n;
	total*=100;
	std::cout<<std::fixed<<std::setprecision(6)<<total<<std::endl;
	return 0;
}