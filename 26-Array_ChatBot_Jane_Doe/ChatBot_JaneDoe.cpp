#include<iostream>
using namespace std;
int main(){
    string keyword[4]{
        "Halo", "Status", "Makan", "Keluar"
    }, response[4]{
        "Halo juga, Senpai! Ada yang bisa aku bantu?", "Statusku saat ini lagi nungguin kamu koding...", "Aku laper... beliin seblak dong?", "Dadah! Sampai ketemu lagi ya!"
    }, pilihan;
    
    cout<<"Selamat Datang di Program Array: 'ChatBot Jane Doe'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    while(true){
        cout<<"--- ChatBot ---\n";
        cout<<"1. Halo\n2. Status\n3. Makan\n4. Keluar\n\nMasukkan pilihan (Ex: Halo): ";
        cin>>pilihan;
        
        if(pilihan=="Keluar" || pilihan=="keluar"){
            cout<<"Jane Doe: "<<response[3];
            cout<<endl<<endl;
            break;
        }
        bool ketemu=false;
        for(int i=0;i<3;i++){
            if(pilihan==keyword[i]){
                cout<<"Jane Doe: "<<response[i]<<endl<<endl;
                ketemu=true;
            }
        }
        if(ketemu==false){
            cout<<"Perintah tidak ditemukan...\n";
            break;
        }
    }
    return 0;
}