#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int l=s.length();
	int lc, uc;
	lc=uc=0;
	for(int i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z')
			++lc;
		else ++uc;
	}
	if(lc>=uc)
		for(int i=0;i<l;i++){
			if(s[i]>='A'&&s[i]<='Z')
				s[i]=s[i]+32;
		}
	else
		for(int i=0;i<l;i++)
			if(s[i]>='a'&&s[i]<='z')
				s[i]-=32;
	std::cout<<s<<std::endl;
	return 0;
}