/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://vjudge.net/problem/codeforces-1208a
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;

const int N = 1e7 + 10;
int arr[N];
const int mod = 1e8;

void ans()
{
    int a, b, n;
    cin >> a >> b >> n;

    int x = (a ^ b);
    if (n % 3 == 0)
        cout << a << endl;
    else if (n % 3 == 1)
        cout << b << endl;
    else
        cout << x << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        ans();

    return 0;
}