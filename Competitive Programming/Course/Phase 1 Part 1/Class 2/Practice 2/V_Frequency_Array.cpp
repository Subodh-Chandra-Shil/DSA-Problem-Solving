#include <bits/stdc++.h>
using namespace std;

#define superfast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define yes {cout<<"YES"<<endl;}
#define no {cout<<"NO"<<endl;}

/// for loops
#define fori(x) for( int i = 0; i < x; i++)
#define forj(x) for( int j = 0; j < x; j++)

void ans()
{
    int a, b;
    cin >> a >> b;
    map<int, int> mp;
    for(int i = 1; i <= b; ++i) mp[i] = 0;

    fori(a) {
        int x;
        cin >> x;
        mp[x]++;
    }

    for(auto i : mp)
    {
        cout << i.second << endl;
    }
}

int main()
{
    superfast
    int t = 1;
    while (t--)
    {
        ans();
    }

    return 0;
}