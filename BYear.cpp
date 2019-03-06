#include<bits/stdc++.h>
int main(){
	bool flag=false;
	int n;
	std::cin>>n;
	++n;
	while(!flag){
		std::vector<int> a(4);
		int temp=n;
		for(int j=0;j<4;j++){
			int k=temp%10;
			a[j]=k;
			temp=temp/10;
		}
		if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
			flag=true;
		else ++n;
	}
	std::cout<<n<<std::endl;
	return 0;
}