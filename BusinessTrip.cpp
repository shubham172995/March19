#include<bits/stdc++.h>
int main(){
	int k;
	scanf("%d", &k);
	std::vector<int> a(12);
	for(int i=0;i<12;i++)
		scanf("%d", &a[i]);
	std::sort(a.begin(), a.end());
	int ans=0, tot=0;
	if(k==0)
		ans=0;
	else{
		for(int i=11;i>=0;i--){
			tot+=a[i];
			if(tot>=k){
				++ans;
				break;
			}
			else ++ans;
		}
	}
	if(tot<k)
		printf("-1\n");
	else
		printf("%d\n", ans);
	return 0;
}