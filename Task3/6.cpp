#include <bits/stdc++.h>

using namespace std;

int main()
{
    int* a = new int(123);
    string* s = new string("Cats and Dogs");
    int* ma = new int[5]{10, 20, 30, 40, 50};
    string* ms = new string[3]{"Cat", "Dog", "Mouse"};
    string_view* sv = new string_view[3]{ms[0], ms[1], ms[2]};
    cout<<*a<<"\n";
    delete a;
    delete s;
    delete[] ma;
    delete[] ms;
    delete[] sv;
}
