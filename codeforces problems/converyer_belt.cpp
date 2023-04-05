#include<bits/stdc++.h>

using namespace std ;

int source(int a, int b, int n)
{

    if(a>n/2)
        a = n + 1 - a ;
    if(b>n/2)
        b = n + 1 - b ;
    int minor = min(a,b) ;

    //cout << "minor is " << minor << endl ;

    return minor ;

}

int main()
{

    int t ;

    cin >> t ;

    while (t)
    {
        int n , a , b , c , d ;

        cin >> n >> a >> b >> c >> d ;

        //if((a+c)==n+1)
        //    cout << "0" << endl ;
        //else
       // {
            cout << abs(source(a,b,n)-source(c,d,n)) << endl ;
       // }

        t-- ;
    }
    

}