#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int l=s.length();
	std::string ans="";
	for(int i=0;i<l;){
		if(s.substr(i, 3)=="WUB"){
			i+=3;
		}
		else{
			if(ans.length()!=0)
				ans+=" ";
			for(int j=i;j<l;j++){
				if(s.substr(j, 3)=="WUB"){
					break;
				}
				else ans+=s[j];
				i=j;
			}
			++i;
		}
	}
	l=ans.length();
	if(ans[l-1]==' ')
		ans=ans.substr(0, l-1);
	std::cout<<ans<<std::endl;
	return 0;
}