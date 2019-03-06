#include<bits/stdc++.h>

int lucky(long long x){
	int count=0;
	while(x){
		int temp=x%10;
		if(temp==4||temp==7)
			++count;
		x=x/10;
	}
	return count;
}

int main(){
	long long n;
	std::cin>>n;
	long long count=lucky(n);
	bool flag=false;
	if(count==0)
		std::cout<<"NO\n";
	else if(count!=0){
		while(count){
			int temp=count%10;
			if(temp!=4&&temp!=7){
				flag=true;
				break;
			}
			count/=10;
		}
		if(flag==false)
			std::cout<<"YES\n";
		else std::cout<<"NO\n";}
	return 0;
}