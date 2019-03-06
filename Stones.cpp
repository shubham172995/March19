#include<bits/stdc++.h>
int main(){
	int n;
	std::cin>>n;
	std::vector<char> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	int count=0;
	for(int i=0;i<n;){
		if(a[i]==a[i+1]){
			bool flag=true;
			int temp=i+1;
			while(flag){
				if(a[temp]==a[temp+1])
					++temp;
				else flag=false;
			}
			count+=temp-i;
			i=temp+1;
		}
		else ++i;
	}
	std::cout<<count<<std::endl;
	return 0;
}