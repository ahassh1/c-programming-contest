#include <bits/stdc++.h>

using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu() { cerr << endl; }

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

int main()

{

    optimize();

    int x, n;

    cin >> x >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        int a;

        cin >> a;

        sum += a;
    }

    int ans = ((n + 1) * x) - sum;

    cout << ans << endl;

    return 0;
}
