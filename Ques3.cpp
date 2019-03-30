#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<std::vector<int> > a(n+1);
	std::vector<bool> c(n+1);
	for(int i=1;i<=n;i++){
		int x, b;
		std::cin>>x>>b;
		if(x!=-1)
			a[x].push_back(i);
		c[i]=b==0;
		//p[i]=x;
	}
	std::vector<int> res;
	for(int i=1;i<=n;i++){
		if(c[i]!=0)
			continue;
		else{
			bool flag=false;
			std::vector<int>::iterator it=a[i].begin();
			for(;it!=a[i].end();++it){
				if(c[*it]!=0){
					flag=true;
					break;
				}
				/*for(std::vector<int>::iterator j=a[*it].begin(); j!=a[*it].end(); j++){
					if(c[*j]==0){
						flag=true;
						break;
					}
				}*/
			}
			if(!flag){
				/*std::vector<int>::iterator it=a[i].begin();
				for(;it!=a[i].end(); it++){
					a[p[i]].push_back(*it);
					p[*it]=p[i];
				}*/
				res.push_back(i);
			}
		}
	}
	std::sort(res.begin(), res.end());
	if(res.size()>0)
		for(std::vector<int>::iterator it=res.begin(); it!=res.end(); it++)
			std::cout<<*it<<" ";
	else if(res.size()==0)
		printf("-1");
	std::cout<<std::endl;
	return 0;
}