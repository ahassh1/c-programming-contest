///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
int main()
{
   ll n;
   cin >> n;
   n++;
   ll grp = 2;
   ll ans = 0;
   while ( n > (grp/2) ) { /// n = 14, grp = 32, 14 > 16
       ll d = n / grp; /// d = 14 / 16 = 0
       ans += ( d * (grp/2) ); /// 0, ans = 17;
       ll m = n % grp; /// 14 % 16 = 14
       m -= ( grp / 2 ); /// m = 14 - 8 = 6
       if ( m > 0 ) ans += m; /// ans += 6, ans = 25
       grp *= 2;
   }
   cout << ans << endl;
   return 0;
}
