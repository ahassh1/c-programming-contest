#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

int main()
{
    optimize();

    int a[3][3];

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            cin >> a[i][j];
        }

        sort(a[i], a[i]+3);
    }

    int b[] = {a[0][1], a[1][1], a[2][1]};

    sort(b, b+3);

    cout << b[1] << endl;

    return 0;
}
