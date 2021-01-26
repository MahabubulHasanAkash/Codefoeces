#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,x;
    scanf("%ld",&t);
    while(t--)
        {
    		cin>>n;
    		for(int i = 2;i<=35;i++)
            {
               long long  denom = pow(2,i) - 1 ;
               if( n%denom) continue;
               x = n / denom;
               break;
            }
            printf("%ld\n",x);
    	}
    return 0;
}
