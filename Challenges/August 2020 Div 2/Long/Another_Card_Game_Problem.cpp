#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Game(ll c, ll r) {
    if (c/9 < r/9) {
        ll temp = (c % 9) == 0? c/9: (c/9)+ 1;
        cout<<0<<" "<<temp<<endl;
        return;
    }
    ll temp = (r % 9) == 0? r/9: (r/9)+ 1;
    cout<<1<<" "<<temp<<endl;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll c, r;
        cin>>c>>r;
        Game(c, r);
    }

    return 0;
}