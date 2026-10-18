#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> ps(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ps[i] = ps[i - 1] + x;
    }

    int l, r;
    cin >> l >> r;

    cout << ps[r + 1] - ps[l] << '\n';

    return 0;
}
