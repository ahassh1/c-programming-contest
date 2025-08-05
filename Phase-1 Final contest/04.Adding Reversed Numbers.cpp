#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
 
 
int revNum (int n)
{
    int res = 0;
 
    while ( n > 0 ) {
        res *= 10;
        res += (n%10);
        n /= 10;
    }
 
    return res;
}
 
int main()
{
    optimize();
 
    int t;
    cin >> t;
 
    while ( t-- ) {
        int a, b;
        cin >> a >> b;
 
        int ra = revNum(a);
        int rb = revNum(b);
 
        int sum = ra + rb;
        int rsum = revNum(sum);
 
        cout << rsum << endl;
    }
 
    return 0;
}
