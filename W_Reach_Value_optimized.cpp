#include<bits/stdc++.h>
using namespace std;


int dp[100005];

bool rec(long long int n)
{
    if(n == 1)
        return true;
    if(n == 0)
        return false;

    if(dp[n] != -1)
        return dp[n];

    
    bool left = false, right = false; 

    if(n % 10 == 0)
        left = rec(n / 10);
    if(n % 20 == 0)
        right = rec(n / 20);
    
    dp[n] = left || right;

    return dp[n];

}


int main()
{
    memset(dp, -1, sizeof(dp));

    int t;
    cin >> t;
    long long int n;

    while(t--)
    {
        cin >> n;
        bool result = rec(n);
        if(result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
