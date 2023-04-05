#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a , t ;

    string s ;

    cin >> a >> t >> s ;

    while (t)
    {
        int i = 0 ;
        while (i<s.length()-1)
        {
            if(s[i]!='G' && s[i+1]!='B')
                {
                   swap(s[i],s[i+1]) ;
                   i+=2 ;
                }
            else
                i++ ;
        }
        t-- ;
    }

    cout << s << endl ;

    return 0 ;

}