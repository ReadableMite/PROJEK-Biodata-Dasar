#include<iostream>
using namespace std;
int main(){
    string nama_item[3]{
        "Kayu", "Batu", "Coal"
    };
    int jumlah_item[3]{
        10, 10, 10
    }, pilih_item, pilih_jumlah, lanjut=1;
    
    cout<<"Selamat Datang di Program Array: 'Crafting'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    cout<<"--- Crafting ---\n";
    cout<<"Kamu akan membuat api unggun. Berikut item yang diperlukan:\n1. 3 Kayu\n2. 5 Batu\n3. 2 Coal\n\nApakah kamu ingin membuat api unggun? (ketik 1) ";
    cin>>lanjut;
    if(lanjut==1){
        for(int a=0;a<3;a++){
            cout<<"Inventory: "<<nama_item[a]<<" | Jumlah: "<<jumlah_item[a]<<endl;
        }
        
        if((nama_item[0]=="Kayu" && jumlah_item[0]>=3) && (nama_item[1]=="Batu" && jumlah_item[1]>=5) && (nama_item[2]=="Coal" && jumlah_item[2]>=2)){
            jumlah_item[0]-=3;
            jumlah_item[1]-=5;
            jumlah_item[2]-=2;
            cout<<endl;
            
            cout<<"Kamu berhasil membuat api unggun!\n";
            for(int b=0;b<3;b++){
                cout<<"Inventory: "<<nama_item[b]<<" | Jumlah: "<<jumlah_item[b]<<endl;
            }
        }else{
            cout<<"Item kamu kurang.\n";
        }
    }else{
        cout<<endl;
    }
    return 0;
}