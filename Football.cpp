#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::string a, b;
	std::vector<int> goals(2);
	for(int i=0;i<n;i++){
		std::string temp;
		std::cin>>temp;
		if(i==0){
			a=temp;
			++goals[0];
		}
		else{
			if(temp==a)
				++goals[0];
			else{
				b=temp;
				++goals[1];
			}
		}
	}
	if(goals[0]>goals[1])
		std::cout<<a<<std::endl;
	else std::cout<<b<<std::endl;
	return 0;
}