#include <bits/stdc++.h>

using namespace std;
/*
Задача 1
namespace myspace{
    void printNtimes(const char* str, int n){
        for (int i = 0; i < n; i++) {
            cout<<str<<"\n";
        }
    }
}
*/
/*
Задача 2
int cubeV(int n){
    return n*n*n;
}
*/
/*
Задача 3
void cubeR(int& n){
    n = n*n*n;
}
*/
/*
Задача 4
void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther){
    string s = str;
    for (int i = 0; i < s.size(); i++){
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
            numLetters++;
        }
        else if(s[i]>='0'&&s[i]<='9'){
            numDigits++;
        }
        else{
            numOther++;
        }
    }
}
*/
/*
Задача 5
struct Book{
    char title[100];
    int pages;
    float price;
};

void addPrice(Book& book, float price){
    book.price+=price;
}
*/
/*
Задача 6
struct Book{
    char title[100];
    int pages;
    float price;
};

bool isExpensive(const Book& book){
    if(book.price > 1000){
        return true;
    }
    else{
        return false;
    }
}
*/
/*
Задача 7
struct Vector3f{
    float x;
    float y;
    float z;
};

Vector3f operator+(Vector3f a, Vector3f b){
    return {a.x+b.x, a.y+b.y, a.z+b.z};
}
Vector3f operator-(Vector3f a, Vector3f b){
    return {a.x-b.x, a.y-b.y, a.z-b.z};
}
Vector3f operator*(Vector3f a, float k){
    return {a.x*k, a.y*k, a.z*k};
}
Vector3f operator*(float k, Vector3f a){
    return a*k;
}
Vector3f operator/(Vector3f a, float k){
    return {a.x/k, a.y/k, a.z/k};
}
Vector3f operator/(float k, Vector3f a){
    return a/k;
}
bool operator==(Vector3f a, Vector3f b){
    if(a.x==b.x&&a.y==b.y&&a.z==b.z){
        return true;
    }
}
bool operator!=(Vector3f a, Vector3f b){
    if(a.x!=b.x||a.y!=b.y||a.z!=b.z){
        return true;
    }
}
void operator+=(Vector3f& a, Vector3f& b){
    a.x = a.x + b.x;
    a.y = a.y + b.y;
    a.z = a.z + b.z;
}
void operator*=(Vector3f& a, float k){
    a.x = a.x*k;
    a.y = a.y*k;
    a.z = a.z*k;
}
void operator/=(Vector3f& a, float k){
    a.x = a.x/k;
    a.y = a.y/k;
    a.z = a.z/k;
}
*/

int main()
{
    /*
    Задача 1
    myspace::printNtimes("ABOBA", 15);
    */
    /*
    Задача 2
    cout<<cubeV(10);
    */
    /*
    Задача 3
    int n = 10;
    cubeR(n);
    cout<<n;
    */
    /*
    Задача 4
    const char* s = "abcAD943!?.";
    int a = 0, b = 0, c = 0;
    countLetters(s, a, b, c);
    cout<<a<<" "<<b<<" "<<c;
    */
    /*
    Задача 5
    Book book = {"Kniga", 10, 10.2f};
    addPrice(book, 50.4f);
    cout<<book.price;
    */
    /*
    Задача 6
    Book book = {"Kniga", 10, 1100};
    const Book& p = book;
    if(isExpensive(book)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    */
}
