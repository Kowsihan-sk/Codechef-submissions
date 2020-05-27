#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> budget(n);
    long long max_rev = 0;

    for (long long i = 0; i < n; i++)
        cin >> budget[i];

    sort(budget.begin(), budget.end());

    for (long long i = 0; i < n; i++)
    {
        if ((budget[i]) * (n - i) > max_rev)
            max_rev = budget[i] * (n - i);
    }

    cout << max_rev << endl;

    return 0;
}