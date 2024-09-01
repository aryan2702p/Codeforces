#include <bits/stdc++.h>

using namespace std;

long long power(long long x, long long y, long long p) {
    long long result = 1;  
    x = x % p;  
    while (y > 0) {
       
        if (y & 1)
            result = (result * x) % p;

        
        y = y >> 1;  
        x = (x * x) % p;  
    }
    return result;
}


long long modInverse(long long Q, long long p) {
    return power(Q, p - 2, p);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> presum(n);
        presum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            presum[i] = presum[i - 1] + a[i];
        }
        long long p = 0;
        for (int i = 0; i < n; i++)
        {
            p += a[i] * (presum[n - 1] - presum[i]);
        }
        long long q = (n * (n - 1)) / 2;

        
        long long mod = 1000000007;

       
        long long Q_inv = modInverse(q, mod);

        
        long long result = (p * Q_inv) % mod;

        cout << result << endl;
    }
    return 0;
}