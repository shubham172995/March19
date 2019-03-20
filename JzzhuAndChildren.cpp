#include<bits/stdc++.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int home=0;int i=0;int last=0;
	while(home!=n){
		if(a[i]==0){
			i+=1;
			i%=n;
			continue;
		}
		if(a[i]<=m){
			a[i]=0;
			++home;
			last=i+1;
			i=(i+1)%n;
		}
		else{
			a[i]-=m;
			i=(i+1)%n;
		}
	}
	std::cout<<last<<std::endl;
	return 0;
}