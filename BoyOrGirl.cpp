#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int l=s.length();
	std::vector<int> a(26);
	for(int i=0;i<l;i++){
		++a[s[i]-'a'];
	}
	int total=0;
	for(int i=0;i<26;i++)
		if(a[i])
			++total;
	if(total%2)
		std::cout<<"IGNORE HIM!\n";
	else std::cout<<"CHAT WITH HER!\n";
	return 0;
}