#include<bits/stdc++.h>
int main(){
	long int n;
	std::cin>>n;
	std::vector<long long int> a(n), b(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	b=a;
	std::sort(a.begin(), a.end());
	if(a[0]==a[1])
		printf("Still Rozdil\n");
	else{
		for(int i=0;i<n;i++){
			if(a[0]==b[i]){
				std::cout<<i+1<<std::endl;
				break;
			}
		}
	}
	return 0;
}