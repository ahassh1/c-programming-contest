#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}



int main()
{
    char s[123], t[123];
    int n, m;
    scanf("%d %d %s %s", &n, &m, s, t);

    bool isPre = 1;
    for ( int i = 0; i < n; i++ ) {
        if ( s[i] != t[i] ) {
            isPre = 0;
            break;
        }
    }

    bool isSuf = 1;
    int j = m-1;
    for ( int i = n-1; i >= 0; i-- ) {
        if ( s[i] != t[j] ) {
            isSuf = 0;
            break;
        }

        j--;
    }

    if ( isPre && isSuf ) printf("0\n");
    else if (isPre) printf("1\n");
    else if (isSuf) printf("2\n");
    else printf("3\n");

    return 0;
