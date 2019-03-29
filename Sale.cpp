#include<bits/stdc++.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	std::sort(a.begin(), a.end());
	int tot=0;
	for(int i=0;i<m;i++){
		if(a[i]<=0)
			tot+=a[i];
		else if(a[i]>0)
			break;
	}
	tot*=-1;
	printf("%d\n", tot);
	return 0;
}