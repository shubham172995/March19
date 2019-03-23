#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n), b(2);
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		++b[a[i]==5];
	}
	if(b[0]==0)
		printf("-1\n");
	else if(b[1]<9)
		printf("0\n");
	else{
		for(int i=9;i<=b[1];i+=9)
			printf("555555555");
		for(int i=0;i<b[0];i++)
			printf("0");
		printf("\n");
	}
	return 0;
}