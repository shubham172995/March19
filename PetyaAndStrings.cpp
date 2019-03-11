#include<bits/stdc++.h>
int main(){
	std::string s1, s2;
	std::cin>>s1>>s2;
	int c=0;
	std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]){
			c=s1[i]-s2[i];
			break;
		}
	}
	if(c<0)
		std::cout<<"-1\n";
	else if(c==0)
		std::cout<<"0\n";
	else std::cout<<"1\n";
	return 0;
}