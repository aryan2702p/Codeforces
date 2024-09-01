#include <bits/stdc++.h>

using namespace std;

bool check(int x,int y , string s, int sum)
{
    int n = s.length();
    if (2 * ((x-1) + (y - 1)) != sum)
        return false;

    for (int i = 0; i < y; i++)
    {
        if (s[i] != '1')
            return false;
        if (s[n-1- i] != '1')
            return false;
    }

    for (int i = 1; i < x; i++)
    {
        if (s[i*x] != '1' && s[i*x-1] != '0')
            return false;
        
    }
    return true;
}

//     1 1 1 1 1
//     0 0 1 1 1
//     1 1 

//   1 1 1 1 1 0 0 1 1 1 1 1 

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += s[i] - '0';
        }
        int root = sqrt(n);
        if(root*root==n){
            if (check(root, root, s, sum))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }

        }else{
            cout << "No" << endl;
            
        }
    }
    return 0;
}