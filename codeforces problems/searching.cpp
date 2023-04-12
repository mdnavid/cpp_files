#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n , k ;
    map<int,int>mp ;
    
    cin >> n ;

    //cout << mp[7] << endl ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;
        
        cin >> a ;

        if(mp[a]==0 || i==0)
            mp[a] = i+1 ;
    }

    cin >> k ;

    //cout << mp[k] << endl ;

    if(mp[k]==0)
        cout << "-1\n" ;
    else
        cout << mp[k]-1 << endl ;

    return 0 ;

}