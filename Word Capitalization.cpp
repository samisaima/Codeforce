#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{
    char s[1000],u;
    int i;
    cin>>s;
    u= toupper(s[0]);
    cout<<u;
    for(i=1;i<strlen(s);i++){
        cout<<s[i];
    }


    return 0;
}
