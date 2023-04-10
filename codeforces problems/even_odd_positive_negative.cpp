#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n , even = 0 , odd = 0 , positive = 0 , negative = 0 ;

    cin >> n ;

    while (n--)
    {
        int a ;

        cin >> a ;

        if(a>0)
            positive++ ;
        else if(a<0)
            negative++ ;
        if(a%2==0)
            even++ ;
        else
            odd++ ;
    }
    
    cout << "Even: " << even << endl ;
    cout << "Odd: " << odd << endl ;
    cout << "Positive: " << positive << endl ;
    cout << "Negative: " << negative << endl ;


    return 0 ;

}