#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <string> a{"a", "bc"};
    reverse(a.begin(), a.end());
    auto r = [](string& s){reverse(s.begin(), s.end());};
    for_each(a.begin(), a.end(), r);
    for(auto i:a) {
        cout<<i<<" ";
    }
}
