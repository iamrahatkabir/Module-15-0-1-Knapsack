#include<bits/stdc++.h>
using namespace std;

long long int n;

bool rec(long long int val)
{
    if(val == n)
        return true;
    if(val > n)
        return false;

    bool left = rec(val * 10);
    bool right = rec(val * 20);

    return left || right;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n;
        bool result = rec(1);
        if(result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
