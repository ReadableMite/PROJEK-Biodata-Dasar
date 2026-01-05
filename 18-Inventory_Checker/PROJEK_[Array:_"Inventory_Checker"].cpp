#include<iostream>
using namespace std;
int main(){
    string item_count[3], ganti;
    int slot;
    
    cout<<"Selamat datang di Program Array: 'Inventory Checker'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Masukkan barang ke Inventory: ";
        cin>>item_count[i];
        cout<<"Isi invetory kamu saat ini: "<<i<<" - "<<item_count[i]<<endl;
    }
    
    cout<<"Apakah kamu ingin mengganti isi inventory-mu? ";
    cin>>ganti;
    
    if(ganti=="iya" || ganti=="Ya" || ganti=="Iya" || ganti=="ya" || ganti=="YA" || ganti=="yA" || ganti=="yoi" || ganti=="Yoi" || ganti=="Oyi" || ganti=="oyi"){
        cout<<"Mau ganti slot berapa? ";
        cin>>slot;
        
        if(slot>=0 && slot<3){
            cout<<"Masukkan barang pengganti: ";
            cin>>item_count[slot];
        
            for(int j=0;j<3;j++){
                cout<<"Isi invetory kamu saat ini: "<<j<<" - "<<item_count[j]<<endl;
            }
        }else{
            cout<<"Slot itu ngga ada bg, coba ganti yang lain.\n";
        }
    }
    return 0;
}