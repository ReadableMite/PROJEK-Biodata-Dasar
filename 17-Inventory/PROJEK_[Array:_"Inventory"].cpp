#include<iostream>
using namespace std;
int main(){
    string inventory[5];
    cout<<"Selamat Datang di Program Array: 'Inventory'\nSIlahkan Ikuti Program Berikut.\n"<<endl;

    for(int i=0;i<5;i++){
        cout<<"Masukkan barang yang ingin dimasukkan ke slot "<<i<<endl;
        cin>>inventory[i];
        cout<<endl;
    }
    
    cout<<"--- Inventory ---\n";
    for(int i=0;i<5;i++){
        cout<<i<<": "<<inventory[i]<<endl;
    }
    
    return 0;
}