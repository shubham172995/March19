#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		std::string s;
		char x;
		long long n; 
		int d;
		std::cin>>n>>d;
		s=std::to_string(n);
		x='0'+d;
		int l=s.length();
		bool flag=true;
		std::string ans="";
		int count=0;
		x='9';int temp=0;ans=s;
		for(int i=0;i<l;i++)
			if(ans[i]<x){
				x=ans[i];
				temp=i;
			}
		std::string k="";
		for(int i=0;i<temp;i++)
			k+=std::to_string(d);
		ans=ans.substr(temp, l-temp)+k;
		x='0'+d;
		for(int i=0;i<l;i++)
			if(ans[i]>=x)
				++count;
		for(int j=0;j<count;j++){
			for(int i=0;i<l;i++){
				if(ans[i]>=x){
					ans=ans.substr(0, i)+ans.substr(i+1, l-i)+std::to_string(d);
					break;
				}
			}
		}
		for(int j=0;j<l;j++){
			for(int i=2;i<l;i++){
				if(ans[i]<ans[i-1]){
					ans=ans.substr(0, i-1)+ans.substr(i, l-i)+std::to_string(d);
					break;
				}
			}
		}
		std::cout<<ans<<std::endl;
	}
	return 0;
}