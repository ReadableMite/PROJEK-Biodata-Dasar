#include<iostream>
using namespace std;
int main(){
    string nama_item[3];
    int jumlah_item[3], tambahan;
    cout<<"Selamat Datang di Program Array: 'Item Tambah'\nSilahkan Ikuti Program Berikut.\n"<<endl;

    cout<<"KEJADIAN:--- Kamu Menebang Pohon! ---\n";
    for(int i=0;i<3;i++){
        cout<<"Masukkan item: ";
        cin>>nama_item[i];
        cout<<"Masukkan jumlah item: ";
        cin>>jumlah_item[i];
    }
    cout<<"Kamu menemukan "<<nama_item[0]<<"!\nMasukkan jumlah item tambahan: ";
    cin>>tambahan;
    jumlah_item[0]+=tambahan;
    cout<<"Kamu menemukan "<<nama_item[1]<<"!\nMasukkan jumlah item tambahan: ";
    cin>>tambahan;
    jumlah_item[1]+=tambahan;
    cout<<"Kamu menemukan "<<nama_item[2]<<"!\nMasukkan jumlah item tambahan: ";
    cin>>tambahan;
    jumlah_item[2]+=tambahan;
    
    for(int j=0;j<3;j++){
        cout<<"Inventory: "<<nama_item[j]<<" | Jumlah: "<<jumlah_item[j]<<endl;   
    }
    return 0;
}