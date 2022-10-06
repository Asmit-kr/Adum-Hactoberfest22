#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long int ull;

int main()
{
    ll n = 1e7 + 10;
    vector<bool> cp(n, true);
    vector<int>hp(n,0), lp(n,0);

    cp[0] = cp[1] = false;

    for (ll i = 2; i < n; i++)
    {
            for (ll j = i * 2; j < n; j += i)
            {
                cp[j] = false;
                hp[j]=i;

                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        
    }

    int num;
    cin>>num;
    cout<<lp[num]<<" "<<hp[num];
    
}