#include <bits/stdc++.h>

using namespace std;

vector <pair <int, int>> factorization(int n) {
    if (n == 1) {
        return {{1, 1}};
    }
    vector <pair <int, int>> a;
    const int ch = n;
    for (int i = 2; i <= ch; i++) {
        int cnt = 0;
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            while (n % i == 0) {
                cnt++;
                n = n / i;
            }
            if (cnt != 0) {
                a.push_back({i, cnt});
            }
            if (n == 1) {
                return a;
            }
        }
    }
    return a;
}

int main()
{
    vector <pair <int, int>> a = factorization(60);
    for (auto i : a) {
        cout<<i.first<<" "<<i.second<<"\n";
    }
}
