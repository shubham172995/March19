#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	bool flag=true;
	int temp=1;
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1]){
			++temp;
			if(temp>=7){
				flag=false;
				break;
			}
		}
			else temp=1;
	}
	if(!flag)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}