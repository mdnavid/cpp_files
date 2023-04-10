#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int testcase ;

    cin >> testcase ;

    while (testcase--)
    {
        string s ;
        cin >> s ;

        reverse(s.begin(),s.end()) ;

        //cout << s << endl ;

        for(int i=0 ; i<s.length() ; i++)
            cout << s[i] << " " ;

        cout  << endl ;
    }
    

    return 0 ;

}