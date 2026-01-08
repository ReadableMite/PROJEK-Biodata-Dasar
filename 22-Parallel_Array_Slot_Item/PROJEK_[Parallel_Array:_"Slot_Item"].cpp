#include<iostream>
using namespace std;
int main(){
    string nama_item[3];
    int jumlah_item[3];
    bool lanjut=true;
    
    cout<<"Selamat Datang di Program Parallel Array: 'Slot Item'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    do{
        for(int i=0;i<3;i++){
            cout<<"Masukkan nama item: ";
            cin>>nama_item[i];
            cout<<"Masukkan jumlah item: ";
            cin>>jumlah_item[i];
        }
        for(int j=0;j<3;j++){
            cout<<"Inventory: "<<nama_item[j]<<" Jumlah: "<<jumlah_item[j]<<endl;
        }
    }while(lanjut==true);
    return 0;
}