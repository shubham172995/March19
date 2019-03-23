#include<bits/stdc++.h>
int main(){
	long long int n;
	std::cin>>n;
	bool flag=true;
	while(flag&&n){
		if(n%1000!=144&&n%100!=14&&n%10!=1){
			flag=false;
		//	printf("hey\n");
		}
		if(n%1000==144){
			n=n/1000;
		//	printf("Oho\n");
		}
		else if(n%100==14){
			n=n/100;
		//	printf("Yay\n");
		}
		else if(n%10==1){
			n=n/10;
		//	printf("Wow\n");
		}
	}
	if(flag==false)
		printf("NO\n");
	else printf("YES\n");
	return 0;
}