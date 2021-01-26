#include <bits/stdc++.h>
using namespace std;
int k,l,m,n,d,sum=0,s=0;
bool arr[100];
void solve()
{
    cin>>k>>l>>m>>n>>d;
    sum=d;
    if(k==1 || l==1 || m==1 || n==1)
    cout<<d;
    else
    {
        int arr[d];
        for(int i =1;i<=d;i++) arr[i]=i;
        for(int i =1;i<=d;i++)
        {
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0) sum--;
        }
        cout<<d-sum;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
