#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "cats and dogs";
    stable_partition(s.begin(), s.end(), [](char c){return c != ' ';});
    cout<<s<<"\n";
}
