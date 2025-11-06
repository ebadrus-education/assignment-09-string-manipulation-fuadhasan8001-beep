#include<iostream>
#include<string>
using namespace std;
int main(){
    string kata = "hello,world";
    cout << kata << endl;
    kata = kata.erase(5,6);
    cout << kata << endl;
}