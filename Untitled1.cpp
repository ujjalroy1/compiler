#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class type1>
#define ll long long int
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using ordered_multiset = tree<type1, null_type, less_equal<type1>, rb_tree_tag, tree_order_statistics_node_update>;
// ordered_multiset <ll> kek;(declaration for multiorder set)
// ordered_set o_set;(declaration)
// kek.order_of_key(i);(strictly less then i for multi order set)
// o_set.order_of_key(5) ;(strictly less then i for multi order set)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
ll POW(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b % 2)
            ans = (ans * a) % mod;
        b /= 2;
        a = (a * a) % mod;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        cout.flush();
        ll n, i;
        cin >> n;
        char arr[n];
        ll pos = 0;
        string ans = "";
        ll op = 0;
        map<string, ll> mp;
        for (ll j = 0; j < 2 * n; j++)
        {

            string s = "";
            for (i = 0; i < pos; i++)
            {
                s += arr[i];
            }
            ll xx;
            s += "0";
            if (mp[s] == 0)
            {
                mp[s]++;
                cout << "? " << s << endl;

                cin >> xx;
                op++;
                if (xx == 1)
                {
                    if (s.size() == n)
                    {
                        ans = s;
                        break;
                    }
                    for (i = 0; i <= pos; i++)
                    {
                        arr[i] = s[i];
                    }
                    pos++;
                    continue;
                }
            }

            s.pop_back();
            s += "1";
            if(mp[s]==0)
            {
                 mp[s]++;
                cout << "? " << s << endl;

            cin >> xx;
            op++;
            if (xx == 1)
            {
                if (s.size() == n)
                {
                    ans = s;
                    break;
                }
                for (i = 0; i <= pos; i++)
                {
                    arr[i] = s[i];
                }
                pos++;
                continue;
            }
            }

            s.pop_back();
            string s1;
            s1 = s;
            s = "0" + s;
           if(mp[s]==0)
           {
              mp[s]++;
                cout << "? " << s << endl;

            cin >> xx;
            op++;
            if (xx == 1)
            {
                if (s.size() == n)
                {
                    ans = s;
                    break;
                }
                for (i = 0; i <= pos; i++)
                {
                    arr[i] = s[i];
                }
                pos++;
                continue;
            }
           }

            s = s1;
            s = "1" + s;
            if(mp[s]==0)
            {
                  mp[s]++;
                 cout << "? " << s << endl;

            cin >> xx;
            op++;
            if (xx == 1)
            {
                if (s.size() == n)
                {
                    ans = s;
                    break;
                }
                for (i = 0; i <= pos; i++)
                {
                    arr[i] = s[i];
                }
                pos++;
                continue;
            }
            }
        }
        cout << "! " << ans << endl;
    }

    return 0;
}
