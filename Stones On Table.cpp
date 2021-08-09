#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{
    int i,c=0,k;
    char s[51];
    cin>>i;
    cin>>s;
    for(k=0;k<i;k++){
        if(s[k]==s[k+1])
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
