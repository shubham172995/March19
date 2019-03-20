#include<iostream>
int main(){
	int n;
	scanf("%d", &n);
	int res=0;
	int pages[7];
	for(int i=0; i<7;i++)
		scanf("%d", &pages[i]);
	int i=0;int total=0;
	while(!res){
		total+=pages[i];
		if(total>=n){
			res=i;
			break;
		}
		++i;
		i%=7;
	}
	printf("%d\n", res+1);
	return 0;
}