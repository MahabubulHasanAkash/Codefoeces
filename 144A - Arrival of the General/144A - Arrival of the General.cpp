#include <bits/stdc++.h>
using namespace std;
int n,x,maxVal=0,minVal=10000,minIndex=0,maxIndex=0;


void solve()
{
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>maxVal)
        {
            maxIndex=i;
            maxVal=x;
        }
        if(x<=minVal)
        {
            minIndex=i;
            minVal=x;
        }
    }
    if(maxIndex>minIndex)
    {
	cout<<(maxIndex-1)+(n-minIndex)-1;
    }
    else
    {
	cout<<(maxIndex-1)+(n-minIndex);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
