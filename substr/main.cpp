#include<iostream>
#include<string>
using namespace std;
int main(){
    string kata = "hello,world";
    cout << kata << endl;
    kata = kata.substr(6,5);
    cout << "substr(6,5) : "<<kata<<endl;
}