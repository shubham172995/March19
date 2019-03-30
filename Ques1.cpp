#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int l=0, r=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)
			l=i+1;
		else if(a[i]==1)
			r=i+1;
	}
	if(l<=r)
		printf("%d\n", l);
	else printf("%d\n", r);
	return 0;
}