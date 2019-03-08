#include<bits/stdc++.h>
int main(){
	std::string s1, s2;
	std::cin>>s1>>s2;
	std::string s="";
	for(int i=0;i<s1.length();i++)
		if(s1[i]!=s2[i])
			s=s+"1";
		else s=s+"0";
	std::cout<<s<<std::endl;
	return 0;
}