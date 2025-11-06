#include<iostream>
#include<string>
using namespace std;
int main(){
    string kata = "hello,world";
    cout << kata <<endl;
    kata = kata.replace(6,5,"fuad");
    cout << "replace(5,6,fuad) : "<< kata << endl;
     
}