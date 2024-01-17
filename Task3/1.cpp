#include <bits/stdc++.h>

using namespace std;

string change(string& s) {
    if(s.size() == 0) {
        return s;
    }
    else{
        if(s[0] > 96) {
            s[0] = toupper(s[0]);
            return s;
        }
        else{
            s[0] = tolower(s[0]);
        return s;
        }
    }
}

int main()
{
    string s = "Cat";
    cout<<s<<"\n";
    s = change(s);
    cout<<s<<"\n";
    s = change(s);
    cout<<s<<"\n";
}
