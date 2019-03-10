#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;
	std::vector<std::string> a(n), res(n);
	std::vector<int> b(n);
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		b[i]=a[i].length();
	}
	for(int i=0;i<n;i++)
		if(b[i]>10)
			res[i]=a[i][0]+std::to_string(b[i]-2)+a[i][b[i]-1];
		else res[i]=a[i];
	for(int i=0;i<n;i++)
		std::cout<<res[i]<<std::endl;
	return 0;
}