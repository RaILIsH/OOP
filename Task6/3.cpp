#include <bits/stdc++.h>

using namespace std;

bool check(string& s) {
    bool a = true;
    auto ch = [&a](char& c){
        if(!isupper(c) && isalpha(c)){
            a = false;
        }
    };
    for_each(s.begin(), s.end(), ch);
    if(a) {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string s1 = "DOGS!";
    string s2 = "CATS!";
    string s3 = "Cats And Dogs!";
    cout<<boolalpha<<check(s1)<<"\n";
    cout<<boolalpha<<check(s2)<<"\n";
    cout<<boolalpha<<check(s3)<<"\n";
}
