#include<bits/stdc++.h>
int main(){
	int s1, s2, s3, s4;
	std::cin>>s1>>s2>>s3>>s4;
	int count=0;
	if(s1==s2)
		++count;
	if(s1==s3)
		++count;
	if(s1==s4)
		++count;
	if(s2==s3&&s1!=s2)
		++count;
	if(s2==s4&&s2!=s1)
		++count;
	if(s3==s4&&s3!=s1&&s3!=s2)
		++count;
	std::cout<<count<<std::endl;
	return 0;
}