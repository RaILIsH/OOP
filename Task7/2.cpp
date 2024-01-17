#include <bits/stdc++.h>

using namespace std;

class StringStack{
    private:
        unique_ptr <vector <string>> ps = make_unique <vector <string>> ();
        int top = -1;

    public:
        void push(string& s) {
            (*ps).push_back(s);
            top++;
        }
        void push(string&& s) {
            (*ps).push_back(move(s));
            top++;
        }
        void print(){
            cout<<"(";
            for (int i = 0; i < top; i++) {
                cout<<(*ps)[i]<<","<<" ";
            }
            cout<<(*ps)[top]<<")"<<"\n";
        }
        string pop(){
            top--;
            return move((*ps)[top+1]);
        }

};

int main()
{
    StringStack s;
    string a = "Cat";
    s.push(a);
    s.push(string{"Dog"});
    s.print();
    cout<<a<<"\n";
    s.push(move(a));
    s.print();
    cout<<a<<"\n";
    cout<<s.pop()<<"\n";
    s.print();
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    s.print();
}
