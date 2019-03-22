#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int x, y, min;
	x=y=0;min=INT_MAX;
	for(int i=0;i<n-1;i++){
		int temp=a[i]>a[i+1]?(a[i]-a[i+1]):(a[i+1]-a[i]);
		if(temp<min){
			x=i+1;
			y=i+2;
			min=temp;
		}
	}
	int temp=a[0]>a[n-1]?(a[0]-a[n-1]):(a[n-1]-a[0]);
	if(temp<min){
		x=1;
		y=n;
	}
	printf("%d %d\n", x, y);
	return 0;
}