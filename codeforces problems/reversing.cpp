#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n ;
    stack<long long int>q ;

    cin >> n ;

    while (n--)
    {
        long long int a ;

        cin >> a ;

        q.push(a) ;
    }

    while (!q.empty())
    {
        cout << q.top() << " " ;
        q.pop() ;
    }

    cout << endl ;

    return 0 ;

}