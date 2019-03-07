#include<bits/stdc++.h>
using namespace std;
/*int main(){
	int n;
	std::cin>>n;
	std::vector<int> a(n), b(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	for(int i=0;i<n;i++)
		std::cin>>b[i];
	int res=0;
	for(int i=0;i<n;++i){
		if(a[i]!=b[i]){
			++res;
		}
		else if(i==0)++res;
		else {
			if(a[i-1]!=b[i-1])++res;
			else if(a[i-1]==b[i-1])continue;
		}
	}
	std::cout<<res<<std::endl;
}
This will not give right answer for like:
p-> 1 2 3 4 5
q-> 4 5 1 2 3
since we can just break it into 2 parts and get done with it but above code will give answer of 5*/

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	int p[n], q[n], q2[n], r[n];
	for(int i = 0; i < n; i++)
	{
		cin>>p[i];
		p[i]--;
	}
	for(int i = 0; i < n; i++)
	{
		cin>>q[i];
		q[i]--;
	}
 
	for(int i = 0; i < n; i++)
	{
		q2[q[i]] = i;
	}	
	for(int i = 0; i < n; i++)
	{
		r[i] = q2[p[i]];
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
		{
			ans++;
			continue;
		}
		else if(r[i]-r[i-1]==1)
		{
 
		}
		else
		{
			ans++;
		}
	}
	cout<<ans;
}