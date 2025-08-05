#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    long long a, b;
    cin >> a >> b;

    bool easy = 1;

    while ( a > 0 && b > 0 ) {
        int da = a % 10;
        int db = b % 10;

        if ( da + db > 9 ) {
            easy = 0;
            break;
        }

        a /= 10;
        b /= 10;
    }


    if(easy) cout << "Easy\n";
    else cout << "Hard\n";

    return 0;
}
