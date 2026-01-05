#include<iostream>
using namespace std;
int main(){
    string inventory[20]={
    "Pedang Karatan", "Pedang Excalibur", "Pedang Masamune", "Pedang Muramasa",
    "Pedang Api Inferno", "Pedang Es Nordik", "Pedang Kayu Latihan", "Pedang Bambu",
    "Pedang Perak", "Pedang Emas Kerajaan", "Pedang Ksatria Hitam", "Pedang Cahaya Suci",
    "Pedang Patah", "Pedang Pendek", "Pedang Raksasa", "Pedang Melengkung",
    "Pedang Samurai", "Pedang Bayangan", "Pedang Kristal", "Pedang Beracun"
    }, cari, hapus="Tidak", item_hapus;//item_ganti
    int slot, cari_item;
    bool ketemu=false;
    
    cout<<"Selamat Datang di Program Array: 'Inventory Deleter'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    cout<<"Cek & Cari item di Inventory? (ketik 1, 0 cancel) ";
    cin>>cari_item;
    do{
        cout<<"Masukkan nama item: ";
        cin.ignore();
        getline(cin, cari);
    
        for(int c=0;c<20;c++){
            if(inventory[c].find(cari)!=string::npos){
                ketemu=true;
                cout<<"Item yang dicari di Slot: "<<c<<" - "<<inventory[c]<<endl;
            }
        }
        if(ketemu==true){
            cout<<"Apakah ada item yang ingin kamu hapus? (Ada/Tidak) ";
            cin>>hapus;
            if(hapus=="Ada"){
                cout<<"Masukkan slot dari item yang ingin dibuang/hapus: ";
                cin>>slot;
                if(slot>=0&&slot<20){
                    inventory[slot]="KOSONG";
                    //cout<<"Masukkan nama item pengganti: ";
                    //cin>>inventory[slot];
                    cout<<"Item yang diganti: "<<inventory[slot]<<endl<<endl;
                    for(int j=0;j<20;j++){
                        cout<<"Isi inventory kamu saat ini: "<<inventory[j]<<endl;
                    }
                }
        
            }else{
                break;
            }
        }
        if(ketemu==false){
            cout<<"Item tidak ditemukan.\n";
        }
    }while(cari_item!=0);
    return 0;
}