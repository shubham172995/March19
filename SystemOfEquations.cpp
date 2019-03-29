#include <iostream>
int main()
{
int a,b,n,m,k=0;
scanf("%d %d", &n, &m);
for(a=0;a*a<=n;a++){
	b=n-a*a;
	if(m==b*b+a)
		k++;
	}
	printf("%d\n", k);
	return 0;
}