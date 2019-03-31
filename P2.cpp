#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<long long int> a(n);
	int odd, even;
	odd=even=0;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		if(a[i]%2==0)
			++even;
		else ++odd;
	}
	if((even-odd==1)||(odd-even==1)||(even==odd)){
		printf("0\n");
		return 0;
	}
	else{
		std::vector<long long int> e(even), o(odd);
		int x, y;x=y=0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				e[x]=a[i];
				++x;
			}
			else{
				o[y]=a[i];
				++y;
			}
		}
		std::sort(e.begin(), e.end());
		std::sort(o.begin(), o.end());
		if(even>odd){
			long long int sum=0;
			for(int i=0;i<(even-odd-1);i++)
				sum+=e[i];
			std::cout<<sum<<std::endl;
		}
		else if(odd>even){
			long long int sum=0;
			for(int i=0;i<(odd-even-1);i++)
				sum+=o[i];
			std::cout<<sum<<std::endl;
		}
	}
	return 0;
}