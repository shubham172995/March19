#include<bits/stdc++.h>
int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	std::vector<char> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	for(int i=0;i<t;i++){
		for(int j=0;j<n;){
			if(a[j]=='B'&&(a[j+1]=='G')){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				j+=2;
			}
			else{
				++j;
			}
		}
	}
	for(int i=0;i<n;i++)
		std::cout<<a[i];
	std::cout<<std::endl;
	return 0;
}