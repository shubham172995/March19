#include<bits/stdc++.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> a(51, 1);
	a[0]=a[1]=0;
	for(int i=2;i<=50;i++){
		if(a[i]==1&&i*i<=50){
			for(int j=i*i; j<=50;j+=i){
				a[j]=0;
			}
		}
	}
	for(int i=n+1;i<=50;i++)
		if(a[i]==0&&i!=50)continue;
		else if(i==m&&i!=50){std::cout<<"YES\n";break;}
		else if(i==50||i!=m){std::cout<<"NO\n";break;}
	return 0;
}