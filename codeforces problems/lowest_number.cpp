#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int n ;
    map<int,int> mp ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;

        cin >> a ;

        if(mp[a]==0 || i==0)
            mp[a] = i + 1 ;
    }

    map<int,int> :: iterator it = mp.begin() ;

    cout << it->first << " " << it->second << endl ;

    return 0 ;

}