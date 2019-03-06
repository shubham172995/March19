#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	int sumx, sumy, sumz;sumx=sumy=sumz=0;
	for(int i=0;i<n;i++){
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		sumx+=x;
		sumy+=y;
		sumz+=z;
	}
	if(sumx==sumy&&sumy==sumz&&sumz==0)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}