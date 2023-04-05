#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int t ;
    int k = 6 ;

    int p = 4 ;

    k = k +p ;

    cout << k << endl ;

    cin >> t ;

    while (t)
    {
        int n , a , check = 0 ;
        string s ;

        cin >> n >> a >> s ;

        for(int i=0 ; i<s.length() ; i++)
        {
            int b = s[i] - 48 ;
            //cout << b << endl ;

            if(a>b && check==0)
            {
                 cout << a ;
                 check++ ;
                 //cout << i ;
                 i-- ;
            }
            else
            {
                cout << s[i] ;
            }
        }

        if(check==0)
            cout << a ;

        cout << endl ;        

        t-- ;   
    }
    

}