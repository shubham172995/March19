#include<bits/stdc++.h>
int main(){
	std::string a, b, c;
	std::cin>>a>>b>>c;
	std::vector<int> k(26);
	bool flag=false;
	if(c.length()!=(a.length()+b.length()))
		std::cout<<"NO\n";
	else{
		for(int i=0;i<a.length();i++)
			++k[a[i]-'A'];
		for(int i=0;i<b.length();i++)
			++k[b[i]-'A'];
		for(int i=0;i<c.length();i++)
			--k[c[i]-'A'];
		for(int i=0;i<26;i++)
			if(k[i]!=0){
				flag=true;
				break;
			}
		if(flag==false)
			std::cout<<"YES\n";
		else
			std::cout<<"NO\n";
	}
	return 0;
}