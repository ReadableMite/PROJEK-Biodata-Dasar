#include<iostream>
using namespace std;
int main(){
    string password;
    string prank="Lingga guli guli guuli wacchaa lingganggu lingganggu\n";
    cout<<"Selamat Datang di Program Perulangan: For & If 'The vault Lockout'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    bool status_login=false;
    for(int login=5;login>0;login--){
        cout<<"Masukkan Password Brangkas: ";
        cin>>password;
        
        if(password!="1234"){
            cout<<"Password Salah! BRANGKAS LU!"<<endl;
        }else{
            cout<<"Password Benar! Brangkas terbuka..."<<endl;
            status_login=true;
            break;
        }
    }
        
    if(status_login==true){
        cout<<"Kamu Berhasil Bobol Brangkas, Selamat!!\n";
    }else{
        cout<<"Well Well Well...\nNais Try P Diddy\n"<<endl;
        while(true){
            cout<<prank;
        }
    }
    
    return 0;
}