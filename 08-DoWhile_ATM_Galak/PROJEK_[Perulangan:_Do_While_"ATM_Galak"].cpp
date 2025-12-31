#include<iostream>
using namespace std;
int tarik;
int main(){
    cout<<"Selamat Datang di Program Perulangan: Do-While 'ATM Galak'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    do{
        cout<<"--- ATM BANK JAGO CODING ---\n";
        cout<<"Masukkan nominal tarik tunai (Kelipatan 50000): \n";
        cin>>tarik;
    }while(tarik<=50000);
    
    return 0;
}