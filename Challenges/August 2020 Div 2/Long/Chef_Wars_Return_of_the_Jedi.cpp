#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int p, h;
        cin>>h>>p;

        int totalPower = (int)p * (2 - pow(0.5, (int)log2(p)));

        if (totalPower >= h)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}