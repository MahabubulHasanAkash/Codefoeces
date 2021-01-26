#include<bits/stdc++.h>
using namespace std;
int p[100],c[100];
int main(){
	int t,n,i,flag;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=1;i<=n;i++)scanf("%d%d",&p[i],&c[i]);
		flag=0;
		for(i=1;i<=n;i++)
			if(p[i]>=p[i-1]&&c[i]>=c[i-1]&&p[i]-p[i-1]>=c[i]-c[i-1])continue;
			else flag=1;
		if(flag)printf("NO\n");
		else printf("YES\n");
	}
}
