#include <bits/stdc++.h>

using namespace std;

bool isIdentifier(string_view s) {
    return all_of(s.begin(), a.end(), [s](char c){return (isalpha(c) || c == '_' || isdigit(c)) && !isdigit(s[0]);});
}

int main()
{
    string s1 = "a", s2 = "12name", s3 = "my-name";
    cout<<boolalpha<<isIdentifier(s1)<<"\n";
    cout<<boolalpha<<isIdentifier(s2)<<"\n";
    cout<<boolalpha<<isIdentifier(s3)<<"\n";
}
