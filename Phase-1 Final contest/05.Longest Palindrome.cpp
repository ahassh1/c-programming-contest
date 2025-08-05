#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}


char s[123];

bool checkPal( int l, int r )
{
    while ( l < r ) {
        if ( s[l] != s[r] ) return 0;
        l++, r--;
    }

    return 1;
}

int main()
{
    scanf("%s", s);

    int n = strlen(s);

    int ans = 1;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = i+1; j < n; j++ ) {
            if ( checkPal(i, j) ) ans = max ( ans, j - i + 1 );
        }
    }

    cout << ans << endl;

    return 0;
}
