#include<bits/stdc++.h>
using namespace std;
int main ()
{

    string s;
    int l;
    cin>>l;
    int i,c=0;

    cin>>s;
    for(i=0;i<l;i++)
    {
        s[i] = tolower(s[i]);
    }
    sort( s.begin() , s.end() );

    for(i=0;i<l;i++)
    {
        if(s[i] != s[i+1])
        {
            c++;
        }
    }

    if(c == 26)
    {
        cout<< "YES";

    }
    else
    {
        cout<< "NO";
    }


}
