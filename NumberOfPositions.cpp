#include<bits/stdc++.h>
int main(){
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if(a==0){
		printf("%d\n", b+1);
		return 0;
	}
	else if(b==0){
		printf("1\n");
		return 0;
	}
	else{
		int res=0;
		for(int i=a+1;i<=n;i++)
			if(n-i<=b)
				++res;
		printf("%d\n", res);
		return 0;
	}
}