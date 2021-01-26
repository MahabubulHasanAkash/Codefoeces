#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll digit(ll n){
	n = abs(n);
	int c = 0;
	while(n){
		c+= (n%10);
		n /= 10;
	}
	return c;
}

ll binpow(ll a,ll b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

void solve()
{
    ll a,b,c,res=0,x=0;
    vector<ll> rset;
    cin>>a>>b>>c;
    for(int i=1;i<=81;++i)
    {
         x = b*binpow(i,a)+c;
         if(x>0 && digit(x)==i && x<1e9)
         {
             res++;
             rset.push_back(x);
         }
    }
    cout<<res<<endl;
    for(int i=0;i<res;++i)
        cout<<rset[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

