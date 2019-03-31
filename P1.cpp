#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		bool flag=true;
		std::string s;
		std::cin>>s;
		std::vector<int> a(26);
		if(s.length()==1){
			printf("Yes\n");
			continue;
		}
		for(int i=0;i<s.length();i++){
			++a[s[i]-'a'];
		}
		int temp=0;
		for(int i=0;i<26;i++){
			if(a[i]>0){
				temp=i;
				break;
			}
		}
		//std::cout<<temp<<std::endl;
		int count=0;
		for(int i=temp;i<(temp+s.length());i++){
			if(a[i]>1){
				flag=false;
				break;
			}
			//std::cout<<i<<std::endl;
			else if(a[i]==1)++count;
		}
		if(flag&&count==s.length())
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}