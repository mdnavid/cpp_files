#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    long long int eyes , mouths, bodies , ans = 0 ;

    cin >> eyes >> mouths >> bodies ;

    ans += min(min(mouths,eyes),bodies) ;

    //cout << ans << endl ;

    eyes -= ans ;
    bodies -= ans ;

    ans += min(eyes/2,bodies) ;

    cout << ans << endl ;

    return 0 ;

}