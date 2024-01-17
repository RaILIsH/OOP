#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map <int, int> a;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin>>cnt;
        if(a.count(cnt)) {
            a[cnt]++;
        }
        else{
            a[cnt] = 1;
        }
    }
    for (auto i:a) {
        cout<<i.first<<" ";
    }
    cout<<"\n";
    for (auto i:a) {
        cout<<i.second<<" ";
    }
}
