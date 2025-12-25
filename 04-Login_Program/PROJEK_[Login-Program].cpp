#include<iostream>
using namespace std;
string login;
string password="masuk123";
int main(){
    cout<<"Selamat Datang di Program Gatekeeper, login session buat program\nSilahkan isi password Kamu buat masuk ke program lainnya.\n"<<endl;
    cout<<"Password: ";
    getline(cin, login);
    
    if(login==password){
        cout<<"Login Sukses, Silahkan Masuk ke Program Lainnya.\n";
    }else{
        cout<<"Login Gagal, Silahkan Coba Lagi.\n";
    }
    
    return 0;
}