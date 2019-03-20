#include<iostream>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long c;
		scanf("%lld", &c);
		long int a[n];
		long long sum=0;
		for(int i=0;i<n;i++){
			scanf("%ld", &a[i]);
			sum+=a[i];
		}
		if(sum<=c)
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}