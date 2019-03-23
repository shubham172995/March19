#include<bits/stdc++.h>
int main(){
	std::string s, t;
	std::cin>>s>>t;
	if(s.length()!=t.length()){
		printf("NO\n");
		return 0;
	}
	bool flag=true;
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]!=t[t.length()-i-1]){
			flag=false;
			break;
		}
	}
	if(flag)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}