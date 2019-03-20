#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	int te=0;
	for(int i=0; pow(2, i)<=100000; i++)
		++te;
	++te;
	std::vector<long int> po(te+1);
	po[0]=1;
	for(int i=1;i<=te;i++)
		po[i]=2*po[i-1];
	while(t--){
		long int p;
		scanf("%ld", &p);
		int res=0;
		for(int i=11;i>=0;i--){
			res+=p/po[i];
			p%=po[i];
		}
		printf("%d\n", res);
	}
	return 0;
}