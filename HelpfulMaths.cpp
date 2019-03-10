#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int l=s.length();
	int one, two, three;
	one=two=three=0;
	for(int i=0;i<l;i++)
		if(s[i]=='1')
			++one;
		else if(s[i]=='2')
			++two;
		else if(s[i]=='3')
			++three;
	std::string ans="";
	for(int i=0;i<one;i++)
		ans+="1+";
	for(int i=0;i<two;i++)
		ans+="2+";
	for(int i=0;i<three;i++)
		ans+="3+";
	l=ans.length();
	ans=ans.substr(0, l-1);
	std::cout<<ans<<std::endl;
	return 0;
}