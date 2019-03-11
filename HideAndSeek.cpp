#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;
	std::vector<int> a(n);
	int sum=0;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		sum+=a[i];
	}
	n+=1;
	int ways=0;
	for(int i=1;i<=5;i++){
		int temp=sum+i;
		if(temp%n!=1)
			++ways;
	}
	printf("%d\n", ways);
	return 0;
}