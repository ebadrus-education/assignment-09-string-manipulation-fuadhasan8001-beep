#include<iostream>
#include<string>
using namespace std;
int main(){
    string kata = "Hello world";
    for (int i = 0; i < kata.length(); i++)
    {
        kata[i] = toupper(kata[i]);
    }
    cout << "to upper : "<< kata << endl;
    for (int i = 0; i < kata.length(); i++)
    {
        kata[i] = tolower(kata[i]);
    }
    cout << "to lower : "<< kata << endl;
}