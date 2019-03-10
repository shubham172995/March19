#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	int max=0, min=0, count=0;
	std::vector<int> a(n);
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		if(i==0){
			min=a[i];
			max=a[i];
		}
		else{
			if(a[i]>max){
				++count;
				max=a[i];
			}
			else if(a[i]<min){
				++count;
				min=a[i];
			}
		}
	}
	std::cout<<count<<std::endl;
	return 0;
}