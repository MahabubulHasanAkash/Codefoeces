#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string test1,string test2)
{
    int l1= test1.length()-1;
    int l2= test2.length()-1;
    bool flag=false;
    if(l1!=l2) return 0;
    for(int i = 0,j=l1;i<l1,j>=0;i++,j--)
    {
        if(test1[i]==test2[j])
        {
            flag=true;
        }
         else if(test1[i]!=test2[j])
        {
            flag=false;
            break;
        }

    }
    return flag;
}
int main()
{
    string a,b;
    cin>>a>>b;
    if(isPalindrome(a,b))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

return 0;
}
