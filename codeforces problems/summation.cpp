#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    long long int n , sum = 0 ;

    cin >> n ;

    while(n--)
    {
        long long int a ;

        cin >> a ;

        sum += a ;
    }

    cout << abs(sum) << endl ;

    return 0 ;

}