#include<bits/stdc++.h>
int main(){
	int a[6][6];int ans=0;
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++){
			scanf("%d", &a[i][j]);
			if(a[i][j]==1){
				ans=abs(i-3);
				ans+=abs(j-3);
			}
		}
		printf("%d\n", ans);
		return 0;
}