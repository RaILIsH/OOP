#include <bits/stdc++.h>

using namespace std;

class Cat{
    public:
        Cat(int& a) : CatchCount(a){

        }
        void catchMice(int a){
            CatchCount+=a;
        }
    private:
        int& CatchCount;
};

int main()
{
    int a = 0, b = 0;
    Cat A1(a), B1(b), A2(a), B2(b), A3(a), B3(b);
    A1.catchMice(2);
    A2.catchMice(3);
    A3.catchMice(5);
    B1.catchMice(2);
    B2.catchMice(4);
    B3.catchMice(6);
    cout<<a<<"\n";
    cout<<b<<"\n";
}
