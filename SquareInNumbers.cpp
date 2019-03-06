#include<bits/stdc++.h>

long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main(){
	int t;
	std::cin>>t;
	while(t--){
		int n;
		std::cin>>n;
		std::vector<long long int> a(n);
		for(int i=0;i<n;i++)
			std::cin>>a[i];
		bool flag=false;long long ans=0;
		for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long g = gcd(a[i], a[j]);
            if (g > 1) {
                std::cout << g << std::endl;
                flag=true;
                break;
            }
        }
        if(flag)break;
    }
    	if(flag==true)continue;
		for(int i=0;i<n;i++){
			long long int x=a[i];
			for(long long it=1; it*it*it<=x; ++it){
			if(it>1&&x%(it*it)==0){
				ans=it;
				break;
			}
			if(x%it==0){
				long long j=x/it;
				long long t=(long long)sqrt(j)+1E-6;
				if(t>1&&t*t == j){
					ans=t;
					break;
				}
			}
		}
		if(ans!=0)break;
	}
		std::cout<<ans<<std::endl;
	}
	return 0;
}