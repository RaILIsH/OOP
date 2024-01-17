#include <bits/stdc++.h>

using namespace std;

int sum(const string& s) {
    int cnt1 = 1, ans = 0;
    for (int i = 1; i < s.size(); i++) {
        if(!isdigit(s[i])) {
            ans += stoi(s.substr(cnt1, i - cnt1));
            cnt1 = i+2;
            i++;
        }
    }
    return ans;
}

int main()
{
    string s = "[10, 20, 30, 40, 50]";
    cout<<sum(s);
}
