#include<bits/stdc++.h>
int main(){
	std::string s1, s2;
	std::cin>>s1>>s2;
	int h1, m1, h2, m2;
	h1=(s1[0]-'0')*10+(s1[1]-'0');
	h2=(s2[0]-'0')*10+(s2[1]-'0');
	m1=(s1[3]-'0')*10+(s1[4]-'0');
	m2=(s2[3]-'0')*10+(s2[4]-'0');
	int min, hr;min=hr=0;
	min=m2-m1;
	min+=(h2-h1)*60;
	min/=2;
	int h3, m3;
	h3=m3=0;
	h3=h1+(min/60);
	m3=m1+(min%60);
	int temp=0;
	temp=m3/60;
	m3=m3%60;
	h3+=temp;
	if(h3>=10&&m3>=10)
		std::cout<<h3<<":"<<m3<<std::endl;
	else if(h3<10&&m3>=10)
		std::cout<<"0"<<h3<<":"<<m3<<std::endl;
	else if(h3>=10&&m3<10)
		std::cout<<h3<<":"<<"0"<<m3<<std::endl;
	else std::cout<<"0"<<h3<<":"<<"0"<<m3<<std::endl;
	return 0;
}