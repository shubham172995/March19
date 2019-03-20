#include<bits/stdc++.h>
int main(){
	int f, d, e;
	scanf("%d %d %d", &f, &d, &e);
	int sum=4*(sqrt((f*e)/d)+e/sqrt((f*e)/d)+f/sqrt((f*e)/d));
	printf("%d\n", sum);
	return 0;
}