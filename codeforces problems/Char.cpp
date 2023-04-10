#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    char s , p ;

    cin >> s ;

    p = toupper(s) ;

    if(p!=s)
        cout << p << endl ;
    else
    {
        p = tolower(s) ;
        cout << p << endl ;
    }

    return 0 ;

}