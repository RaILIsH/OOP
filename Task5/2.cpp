#include <bits/stdc++.h>

using namespace std;

bool check(string& s) {
    stack <char> a;
    bool check = true;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if(a.size() == 0){
                return false;
            }
            if((s[i] == ')' && a.top() == '(') || (s[i] == ']' && a.top() == '[') || (s[i] == '}' && a.top() == '{')) {
                a.pop();
            }
            else{
                return false;
            }
        }
        else{
            a.push(s[i]);
        }
    }
    return true;
}

int main()
{
    string s1 = "()(())";
    string s2 = "[](){}";
    string s3 = "({}[)]";
    if(check(s1)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    if(check(s2)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    if(check(s3)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
