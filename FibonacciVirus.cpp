#include<bits/stdc++.h>
int main(){
	std::vector<unsigned long long int> f(100005);
	f[0]=0;f[1]=1;
	for(long long int i=2;i<100005;i++)
		f[i]=f[i-1]+f[i-2];
	long long int n;
	std::cin>>n;
	if(n==3)
		printf("1 1 1\n");
	else if(n==2)
		printf("0 1 1\n");
	else if(n==1)
		printf("0 0 1\n");
	else if(n==0)
		printf("0 0 0\n");
	else if(n>3){
		int i;
		for(i=2;i<100005;i++)
			if(f[i]==n)
				break;
		std::cout<<f[i-4]<<" "<<f[i-3]<<" "<<f[i-1]<<std::endl;
	}
	return 0;
}