#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    string s ;

    cin >> s ;

    //cout << s[0]-48 << endl ;

    if((s[0]-48)%2==0)
        cout << "EVEN\n" ;

    else
        cout << "ODD\n" ;

    return 0 ;

}