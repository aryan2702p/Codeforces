#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans =0;
        int diff=1;
        while(a<=b){
            ans++;
            a=a+diff;
            diff++;

        }
        cout<<ans<<endl;

        
    }
    return 0;
}