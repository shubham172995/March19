#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;
	if(n%2!=0)
		std::cout<<"-1\n";
	else{
		for(int i=1;i<=n;i+=2)
			std::cout<<i+1<<" "<<i<<" ";
	std::cout<<std::endl;}
	return 0;
}