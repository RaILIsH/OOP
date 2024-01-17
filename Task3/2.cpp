#include <bits/stdc++.h>

using namespace std;

string repeat1(const string& s) {
    string a = s;
    a += a;
    return a;
}

void repeat2(string& s) {
    s += s;
}

void repeat3(string* ps) {
    *ps = (*ps) + (*ps);
}

string* repeat4(const string& s) {
    string* a = new string;
    *a = s;
    *a += *a;
    return a;
}

int main()
{
    string a = "Cat";
    cout<<repeat1(a)<<"\n";
    repeat2(a);
    cout<<a<<"\n";
    repeat3(&a);
    cout<<a<<"\n";
    cout<<*repeat4(a)<<"\n";

}
