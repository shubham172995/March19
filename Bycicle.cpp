#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	int m;
	scanf("%d", &m);
	std::vector<int> b(m);
	for(int i=0;i<m;i++)
		scanf("%d", &b[i]);
	int max=0;int ans=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i]%a[j]==0){
				int temp=b[i]/a[j];
				if(temp>max){
					ans=1;
					max=temp;
				}
				else if(temp==max)++ans;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}