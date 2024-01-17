#include <bits/stdc++.h>

using namespace std;

void truncateToDot(string& s) {
    if(s.size() != 0) {
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '.') {
                s.erase(s.begin() + i, s.end());
            }
        }
    }
    s.shrink_to_fit();
}

int main()
{
    string s = "abc.def";
    truncateToDot(s);
    cout<<s<<"\n";
}
