#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	long long n, k;
	std::cin>>n>>k;
	std::vector<int> a(n+1);
	for(int i=1;i<=n;i++)
		std::cin>>a[i];
	long long temp=0;int pos=0;
	for(int i=1;i<=n;i++){
		temp=0;
		for(int j=0;j<=n-i;j++){
			temp+=a[i+j]/(j+1);
		}
		if(temp<=k){
			pos=i;
			break;
		}
		else continue;
	}
	if(pos==0)pos=n+1;
	std::cout<<pos<<std::endl;
}
return 0;
}