#include<bits/stdc++.h>

int count(std::vector<int> a, std::vector<int> b, int pos){
	int n=a.size();
	if(b[pos]==1)return 0;
	if(b[pos]==0&&a[pos]==1&&pos==0){
		b[pos]=1;
		return 1+count(a, b, pos+1);
	}
	if(b[pos]==0&&a[pos]==1&&pos>0&&pos<n-1){
		b[pos]=1;
		return 1+count(a, b, pos+1)+count(a, b, pos-1);
	}
	if(b[pos]==0&&a[pos]==1&&pos==n-1){
		b[pos]=1;
		return 1+count(a, b, pos-1);
	}
	if(b[pos]==0&&a[pos]==2&&pos==0&&(pos+2)<n){
		b[pos]=1;
		return 1+count(a, b, pos+1)+count(a, b, pos+2);
	}
	if(b[pos]==0&&a[pos]==2&&pos==0&&(pos+1)<n){
		b[pos]=1;
		return 1+count(a, b, pos+1);
	}
	if(b[pos]==0&&a[pos]==2&&pos==1&&(pos+2)<n){
		b[pos]=1;
		return 1+count(a, b, pos+1)+count(a, b, pos-1)+count(a, b, pos+2);
	}
	if(b[pos]==0&&a[pos]==2&&pos==1&&(pos+1)<n){
		b[pos]=1;
		return 1+count(a, b, pos+1)+count(a, b, pos-1);
	}
	if(b[pos]==0&&a[pos]==2&&pos>=2&&pos+2<n){
		b[pos]=1;
		return 1+count(a, b, pos+1)+count(a, b, pos-1)+count(a, b, pos+2)+count(a, b, pos-2);
	}
	if(b[pos]==0&&a[pos]==2&&pos>=2&&pos+2>=n&&pos+1<n){
		b[pos]=1;
		return 1+count(a, b, pos+1)+count(a, b, pos-1)+count(a, b, pos-2);
	}
	if(b[pos]==0&&a[pos]==2&&pos>=2&&pos==n-1){
		b[pos]=1;
		return 1+count(a, b, pos-1)+count(a, b, pos-2);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		std::vector<int> a(n);
		for(int i=0;i<n;i++)
			std::cin>>a[i];
		std::vector<int> b(n,0);
		int res=0;
		if(n>2)
			res=count(a, b, 0);
		else if(n==1)res=1;
		else if(n==2)res=2;
		std::cout<<res<<std::endl;
	}
	return 0;
}