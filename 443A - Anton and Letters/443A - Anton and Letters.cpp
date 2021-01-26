#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int counter=0;
    char charr[1001];
    gets(charr);
    int length = strlen(charr);
    sort(charr,charr+length);
    for(int i=0;i<length;++i)
    {
        if(charr[i] > 96 && charr[i] < 123)
        {
            ++counter;
            if(charr[i]==charr[i+1])
                --counter;
        }
    }
    cout<<counter;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
