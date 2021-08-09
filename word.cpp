#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{
    int c=0,l=0,i;
    char s[101];
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
        else
        {
            c++;
        }
    }
    if(l>=c)
    {
        strlwr(s);
    }
    else if (c>l)
    {
        strupr(s);
    }
    cout<<s;

}
