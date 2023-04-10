#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    string s ;

    cin >> s ;

    if(s[1]=='0')
        cout << "YES\n" ;
    else if((s[0]-48)%(s[1]-48)==0 || (s[1]-48)%(s[0]-48)==0)
        cout << "YES\n" ;
    else
        cout << "NO\n" ;

    return 0 ;

}