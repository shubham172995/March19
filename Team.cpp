#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n), b(n), c(n);
	for(int i=0;i<n;i++)
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	int total=0;
	for(int i=0;i<n;i++)
		if((a[i]+b[i]+c[i])>=2)
			++total;
	std::cout<<total<<std::endl;
	return 0;
}