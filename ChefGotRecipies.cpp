#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		std::vector<std::string> a(n);
		std::vector<std::vector<int> >b(n);
		for(int i=0;i<n;i++){
			std::cin>>a[i];
			b[i]=std::vector<int>(5);
			for(int j=0;j<a[i].length();j++)
				if(a[i][j]=='a')
					b[i][0]=1;
				else if(a[i][j]=='e')
					b[i][1]=1;
				else if(a[i][j]=='i')
					b[i][2]=1;
				else if(a[i][j]=='o')
					b[i][3]=1;
				else if(a[i][j]=='u')
					b[i][4]=1;
		}
		std::vector<int> c(32);
		for(int i=0;i<n;i++){
			int temp=0;
			for(int j=0;j<5;j++){
				if(b[i][j]==0)continue;
				else temp+=pow(2, j);
			}
			//std::cout<<temp<<std::endl;
			++c[temp];
		}
		/*for(int i=1;i<32;i++)
			if(c[i])
				std::cout<<i<<" HEY "<<c[i]<<std::endl;*/
		long long res=0;long long count=0;
		for(int i=1; i<31; i++){
			//if(c[i]==0)continue;
			count+=c[i];
			for(int j=i+1; j<31; j++){
				//if(c[j]==0)continue;
				if((i|j)==31)
					res+=c[i]*c[j];
				//std::cout<<res<<" "<<i<<" "<<j<<std::endl;
			}
		}
		if(c[31]!=0)
			res+=c[31]*count+c[31]*(c[31]-1)/2;
		std::cout<<res<<std::endl;
	}
	return 0;
}