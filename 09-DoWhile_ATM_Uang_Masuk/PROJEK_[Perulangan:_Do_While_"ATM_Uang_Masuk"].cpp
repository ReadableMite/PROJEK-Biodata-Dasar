#include<iostream>
using namespace std;
int uang_masuk, uang_sisa;
int main(){
    cout<<"Selamat Datang di Program Perulanga: Do-While 'ATM Uang Masuk'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    uang_sisa=50000;
    do{
        cout<<"--- ATM BANK JAGO CODING ---\n";
        cout<<"Masukkan Nominal Uang: ";
        cout<<endl;
        cin>>uang_masuk;
        
        if(uang_masuk > uang_sisa){
            cout<<"Nominal Terlalu Besar\n"<<endl;
        }else{
            uang_sisa = uang_sisa - uang_masuk;
            cout<<"Nominal di Proses...\n"<<endl;
        }
    }while(uang_sisa>0);
    
    return 0;
}