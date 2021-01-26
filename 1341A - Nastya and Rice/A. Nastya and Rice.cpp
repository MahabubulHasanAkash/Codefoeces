#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,n,mn,mx;
    scanf("%d",&t);
    while(t--){
    		scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    		mn=(a-b)*n,mx=(a+b)*n;
    		if(mx<c-d)printf("No\n");
    		else if(c+d<mn)printf("No\n");
    		else printf("Yes\n");
    	}
    return 0;
}
