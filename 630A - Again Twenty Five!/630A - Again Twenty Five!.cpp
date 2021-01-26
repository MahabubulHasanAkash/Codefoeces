#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;
ll fastPower(ll base, ll power)
{
    ll result = 1;
    while(power > 0)
    {
        if(power%2==1)
        {
            result = (result*base)%mod;
        }
        base = (base * base)%mod;
        //power >> = 1;
        power /=2;
    }
    return result;
}

int lastTwoDigits(ll n)
{
    int one = n%10;
    n/=10;
    int tens = n%10;
    tens*=10;
    return tens+one;
}

int main()
{
    ll n;
    cin>>n;
    //cout<<fastPower(5,n)<<endl;
    //cout<<lastTwoDigits(fastPower(5,n));
    cout<<25;
}
