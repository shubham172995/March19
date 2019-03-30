#include<bits/stdc++.h>
int main(){
	int k;
	scanf("%d", &k);
	std::string s;
	std::cin>>s;
	std::vector<int> a(26);
	for(int i=0;i<s.length();i++)
		++a[s[i]-'a'];
	bool flag=true;
	for(int i=0;i<26;i++){
		if(a[i]%k!=0){
			flag=false;
			break;
		}
	}
	if(!flag)
		printf("-1\n");
	else{
		std::string ans="";
		for(int i=0;i<26;i++){
			int temp=a[i]/k;
			char ch='a'+i;
			for(int i=0;i<temp;i++){
				ans+=ch;
			}
		}
		std::string l=ans;
		for(int i=1;i<k;i++)
			ans+=l;
		std::cout<<ans<<std::endl;
	}
	return 0;
}