#include<bits/stdc++.h>
int main(){
	int a[3][3], b[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			std::cin>>a[i][j];
			b[i][j]=1;
		}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int sum=0;
			sum+=a[i][j];
			if(i<2)
				sum+=a[i+1][j];
			if(j<2)
				sum+=a[i][j+1];
			if(j>0)
				sum+=a[i][j-1];
			if(i>0)
				sum+=a[i-1][j];
			if(sum%2==0)
				b[i][j]=1;
			else b[i][j]=0;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			std::cout<<b[i][j];
		std::cout<<std::endl;
	}
	return 0;
}