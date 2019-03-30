#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l, r;
	l=r=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)
			l=i+1;
		else
			r=i+1;
	}
	if(l<=r)
		cout<<l<<endl;
	else cout<<r<<endl;
	return 0;
}