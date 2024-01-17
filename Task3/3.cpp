#include <bits/stdc++.h>

using namespace std;

string operator*(string& s, int n) {
    string a = s;
    for (int i = 1; i < n; i++) {
        s += a;
    }
    return s;
}

int main()
{
    string a = "Cat";
    a = a * 4;
    cout<<a<<"\n";
}
