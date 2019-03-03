#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		std::vector<long long> a(n);
		std::vector<int> b(4);
		for(int i=0;i<n;i++){
			scanf("%lld", &a[i]);
			if(a[i]==0){
				++b[0];++b[3];
			}
			else if(a[i]<0)
				++b[1];
			else {++b[2];++b[3];}
		}
		std::sort(b.begin(), b.end());int k=0;
		if(b[2]==0)
			printf("%d %d\n", b[3], b[3]);
		else
			for(int i=0;i<3;i++)
				if(b[i]>0){
					k=i;break;
				}
		printf("%d %d\n", b[3], b[k]);
	}
	return 0;
}