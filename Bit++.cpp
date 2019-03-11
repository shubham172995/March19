#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<std::string> a(n);
	int x=0;
	for(int i=0;i<n;i++){
		std::cin>>a[i];
		if(a[i][0]=='+'||a[i][1]=='+')
			++x;
		else --x;
	}
	std::cout<<x<<std::endl;
	return 0;
}