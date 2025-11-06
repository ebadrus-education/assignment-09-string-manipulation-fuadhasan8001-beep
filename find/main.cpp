#include<iostream>
#include<string>
using namespace std;
int main(){
    string cari;
    string profil = "nama : fuad\nkelas : x rpl 2\nabsen : 11\n";
    cout << profil << endl;
    cout << "pemcarian : ";
    cin >> cari ;
    size_t posisi = profil.find(cari);
    if (posisi != string::npos)
    {
        cout << "string di temukan di index : " << posisi << endl;
    }
    else{
        cout << "string tidak ditemukan!"<<endl;
    }
}