#include<bits/stdc++.h>

using namespace std ;

void k()
{
        cout << "YES\n" ;
}

int main()
{
    
    long long int a , b , c , d ;

    cin >> a >> b >> c >> d ;

    if(a+b-c==d)
        k() ;
    else if(a+b*c==d)
        k() ;
    else if(a-b+c==d)
        k() ;
    else if(a-b*c==d)
        k() ;
    else if(a*b-c==d)
        k() ;
    else if(a*b+c==d)
        k() ;
    else
        cout << "NO\n" ;


    return 0 ;

}