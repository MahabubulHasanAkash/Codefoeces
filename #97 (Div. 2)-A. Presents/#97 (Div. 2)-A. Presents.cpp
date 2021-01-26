#include <bits/stdc++.h>
#define lend <<"\n"
#define lspace <<" "
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int crr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        crr[arr[i]-1] = i+1;
    }
    for(int i=0;i<n;i++) cout<<crr[i] lspace;

    return 0;
}
