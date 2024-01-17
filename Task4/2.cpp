#include <bits/stdc++.h>

using namespace std;

void lastDigits(vector <int>& a){
    for (int i = 0; i < a.size(); i++) {
        a[i] = a[i] % 10;
    }
}

int main()
{
    vector <int> a{11, 22, 33, 44, 55, 66, 77, 88, 99};
    lastDigits(a);
    for (int i = 0; i < a.size(); i++) {
        cout<<a[i]<<" ";
    }
}
