#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    auto it = max_element(a.begin(), a.end());
    sort(a.begin(), it);
    sort(it+1, a.end());
    reverse(it+1, a.end());
    for (auto i:a) {
        cout<<i<<"\n";
    }
}
