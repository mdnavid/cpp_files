#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;
typedef long long ll;

#define EL printf("\n")
#define pb push_back
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)

const int base = 1e9;
typedef vector<int> BigInt;

void Set(BigInt &a)
{
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}

void Print(BigInt a)
{
    Set(a);
    printf("%d", (a.size() == 0) ? 0 : a.back());
    FORD(i,a.size()-2,0) printf("%09d", a[i]);
    EL;
}

BigInt Integer(string s)
{
    BigInt ans;
    if (s[0] == '-')
        return ans;
    if (s.size() == 0)
    {
        ans.pb(0);
        return ans;
    }
    while (s.size()%9 != 0)
        s = '0'+s;
    for (int i=0; i<s.size(); i+=9)
    {
        int v = 0;
        for (int j=i; j<i+9; j++)
            v = v*10+(s[j]-'0');
        ans.insert(ans.begin(),v);
    }
    Set(ans);
    return ans;
}
BigInt Integer(char c[])
{
    string s = "";
    FOR(i,0,strlen(c)-1) s = s + c[i];
    return Integer(s);
}

BigInt Integer(ll x)
{
    string s = "";
    while (x > 0)
        s = char(x%10+'0') + s, x /= 10;
    return Integer(s);
}

BigInt Integer(int x)
{
    return Integer((ll) x);
}
BigInt operator * (BigInt a, BigInt b)
{
    Set(a);
    Set(b);
    BigInt ans;
    ans.assign(a.size()+b.size(), 0);
    FOR(i,0,a.size()-1)
    {
        ll carry = 0ll;
        for (int j=0; j<b.size() || carry > 0; j++)
        {
            ll s = ans[i+j] + carry + (ll)a[i]*(j<b.size()?(ll)b[j]:0ll);
            ans[i+j] = s%base;
            carry = s/base;
        }
    }
    Set(ans);
    return ans;
}

int main()
{

    int cas, a ;

    cin >> cas ;

    while(cas--)
    {
        cin >> a ;
        BigInt fa = Integer("1") ;

        for(int i=1 ; i<=a ; i++)
        {
            ostringstream ww ;
            ww << i ;
            BigInt n = Integer(ww.str()) ;
            fa = fa * n ;
        }
        Print (fa) ;
    }

}
