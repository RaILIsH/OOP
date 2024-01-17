#include <bits/stdc++.h>

using namespace std;

list <int> :: iterator func1(list <int> :: iterator it, list <int>& a, int m) {
    for (int i = 0; i < m; i++) {
        if(*it == a.back()) {
            it = a.begin();
        }
        else{
            it++;
        }
    }
    return it;
}

list <int> :: iterator func2(list <int> :: iterator it, list <int>& a) {
    if (it == a.begin()) {
        it = a.end();
        it--;
    }
    else{
        it--;
    }
    return it;
}

int main()
{
    int n = 21, m = 2;
    list <int> a;
    for (int i = 1; i <= n; i++) {
        a.push_back(i);
    }
    auto it = a.begin();
    while(a.size() != 1) {
        it = func1(it, a, m);
        cout<<*(func2(it, a))<<" ";
        a.erase(func2(it, a));
    }
    cout<<"\n";
    cout<<*a.begin()<<"\n";
}
