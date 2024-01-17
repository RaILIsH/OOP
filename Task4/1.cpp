#include <bits/stdc++.h>

using namespace std;

int sumEven(const vector <int>& a) {
    int sum = 0;
    for (auto i:a) {
        if(i%2 == 0) {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    vector <int> a{1, 2, 4, 8, 3, 12, 14};
    cout<<sumEven(a);
}
