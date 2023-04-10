#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n , b = 0 ;

    cin >> n ;

    while (n--)
    {
        int a ;
        cin >> a ;

        if(a>b)
            b = a ;
    }

    cout << b ;
    

    return 0 ;

}