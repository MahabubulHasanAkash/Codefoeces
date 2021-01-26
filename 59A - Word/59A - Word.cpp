#include <bits/stdc++.h>
using namespace std;
string word;
int upCnt=0,lowCnt=0,a;
void solve()
{
    cin>>word;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]>=65 && word[i]<=90)
            upCnt++;
        else
            lowCnt++;
    }
    if(upCnt>lowCnt)
    {
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>=97 && word[i]<=122)
            {
                word[i]-=32;
            }
        }
    }
    if(upCnt<=lowCnt)
    {
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>=65 && word[i]<=90)
            {
                word[i]+=32;
            }
       }
    }
    cout<<word;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
