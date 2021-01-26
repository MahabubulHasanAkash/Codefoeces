#include<bits/stdc++.h>
using namespace std;
char keyboard[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    char dir;
    char input[120];
    scanf("%c",&dir);
    scanf("%s",&input);
    if(dir=='L')
    {
        for(int i=0;i<strlen(input);i++)
        {
            for(int j=0;j<strlen(keyboard);j++)
            {
               if(input[i]==keyboard[j])
               {
                   printf("%c",keyboard[j+1]);
                    break;
               }
            }
        }
        printf("\n");
    }
    else  if(dir=='R')
    {
        for(int i=0;i<strlen(input);i++)
        {
            for(int j=0;j<strlen(keyboard);j++)
            {
               if(input[i]==keyboard[j])
               {
                   printf("%c",keyboard[j-1]);
                   break;
               }
            }
        }
        printf("\n");
    }
return 0;
}
