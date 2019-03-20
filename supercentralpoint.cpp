#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> x(n), y(n);
	for(int i=0;i<n;i++)
		scanf("%d %d", &x[i], &y[i]);
	int res=0;
	for(int i=0;i<n;i++){
		int b, l, r, u;
		b=l=r=u=0;
		for(int j=0;j<n;j++){
			if(i==j)continue;
			if(x[i]==x[j]&&y[i]<y[j])
				u=1;
			if(x[i]==x[j]&&y[i]>y[j])
				b=1;
			if(y[i]==y[j]&&x[i]<x[j])
				r=1;
			if(y[i]==y[j]&&x[i]>x[j])
				l=1;
		}
		if(l==1&&r==1&&u==1&&b==1)
			++res;
	}
	printf("%d\n", res);
	return 0;
}