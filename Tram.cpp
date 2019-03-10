#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n), b(n);
	for(int i=0;i<n;i++)
		scanf("%d %d", &a[i], &b[i]);
	int max=0, cap=0;
	for(int i=0;i<n;i++){
		cap+=b[i];
		cap-=a[i];
		max=max>cap?max:cap;
	}
	std::cout<<max<<std::endl;
	return 0;
}