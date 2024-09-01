#include <bits/stdc++.h>

using namespace std;


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
            a[i]--;
        }
        string s;
        cin >> s;

        vector<int> f(n, -1);  
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (f[i] != -1)
            {
                cout << f[i]<<" ";
                continue;
            }
            else
            {
                vector<bool> v(n, false);  
                int count = 0;
                int x = i;
               vector<int> path; 

                while (!v[x])
                {
                    path.push_back(x); 
                    v[x] = true;

                    if (f[x] != -1)  
                    {
                        count += f[x];
                        break;
                    }

                    if (s[x] == '0')
                        count++;

                    x = a[x];
                }

               

                if(x==i){
                    for(int node : path){
                        f[node]=count;
                    }
                }
               
                f[i]=count;

                cout << f[i]<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}

