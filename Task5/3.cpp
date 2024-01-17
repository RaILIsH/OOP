#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    set <int> a;
    int cnt = 0;
    a.insert(0);
    a.insert(n);
    for (int i = 0; i < k; i++) {
        cin>>cnt;
        a.insert(cnt);
        int maxx = -1;
        for (auto i = a.begin(); i != a.end(); i++) {
            auto it = next(i, 1);
            maxx = max(maxx, *it - *i);
        }
        cout<<maxx<<" ";
    }
}
