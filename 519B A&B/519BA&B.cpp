#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,x=0,sum=0,preSum=0;
    int t=3;
    int Count =0;
    cin>>n;
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        if(Count==0) preSum = sum;
        else
        {
            cout<<preSum-sum<<endl;
            preSum = sum;
        }
        Count++;
        n--;
        sum=0;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

