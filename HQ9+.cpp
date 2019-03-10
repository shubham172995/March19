#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	bool flag=false;
	for(int i=0;i<s.length();i++)
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
			flag=true;
			break;
		}
	if(flag)
		std::cout<<"YES\n";
	else
		std::cout<<"NO\n";
	return 0;
}