#include<bits/stdc++.h>
int main(){
	std::string s, ans;ans="";
	std::cin>>s;
	int l=s.length();
	for(int i=0;i<l;){
		if(s[i]=='.'){
			ans+='0';
			++i;
		}
		else{
			if(s[i+1]=='.'){
				ans+='1';
				i+=2;
			}
			else if(s[i+1]=='-'){
				ans+='2';
				i+=2;
			}
		}
	}
	for(int i=0;i<ans.length();i++)
		std::cout<<ans[i];
	std::cout<<std::endl;
	return 0;
}