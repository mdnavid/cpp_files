#include<bits/stdc++.h>

using namespace std ;

int operation(int a)
{
    
    cout << "YES" << endl ;

    for(int i=2 ; i<=a ; i+=2)
        cout << i << " " ;
    for(int i=1 ; i<a-1 ; i+=2)
        cout << i << " " ;

    cout << a-1+(a/2) << endl ;
    
}

int main()
{

    int n ;

    cin >> n ;

    while (n)
    {
        
        int a ;

        cin >> a ;

        if((a/2)%2==1)
            cout << "NO" << endl ;

        else
            operation(a) ;

        n-- ;

    }
    
    return 0 ;

}