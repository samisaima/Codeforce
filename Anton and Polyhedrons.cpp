#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;

    int i,c=0;

    for(i=0; i<n; i++)
    {
        cin>>s;

        if( s == "Tetrahedron" )
        {
            c= c+4;
        }
        else if( s == "Cube" )
        {
            c= c+6;
        }
        else if( s == "Octahedron" )
        {
            c= c+8;
        }
        else if( s == "Dodecahedron" )
        {
            c= c+12;
        }
        else if( s == "Icosahedron" )
        {
            c= c+20;
        }

    }
    cout<<c;

}
