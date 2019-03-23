#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long int n;
		scanf("%ld", &n);
		std::vector<long int> a(n), b(100005);
		for(long int i=0;i<n;i++){
			scanf("%ld", &a[i]);
			++b[a[i]];
		}
		long int max=0;
		for(int i=0;i<100005;i++)
			max=max>b[i]?max:b[i];
		max=n-max;
		std::cout<<max<<std::endl;
	}
	return 0;
}