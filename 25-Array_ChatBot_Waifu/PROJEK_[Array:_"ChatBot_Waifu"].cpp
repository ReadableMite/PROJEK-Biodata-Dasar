#include<iostream>
using namespace std;
int main(){
    string keyword[4]{
        "Halo", "Status", "Makan", "Keluar"
    }, response[4]{
        "Halo juga, Senpai! Ada yang bisa aku bantu?", "Statusku saat ini lagi nungguin kamu koding...", "Aku laper... beliin seblak dong?", "Dadah! Sampai ketemu lagi ya!"
    }, pilihan;
    
    cout<<"Selamat Datang di Program Array: 'ChatBot Waifu'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    while(true){
        cout<<"--- ChatBot ---\n";
        cout<<"1. Halo\n2. Status\n3. Makan\n4. Keluar\n\nMasukkan pilihan (Ex: Halo): ";
        cin>>pilihan;
        
        if(pilihan=="Keluar" || pilihan=="keluar"){
            cout<<"Waifu: "<<response[3];
            cout<<endl<<endl;
            break;
        }
        
        if(pilihan=="Halo" || pilihan=="halo"){
            cout<<"Waifu: "<<response[0];
            cout<<endl<<endl;
        }else if(pilihan=="Status" || pilihan=="status"){
            cout<<"Waifu: "<<response[1];
            cout<<endl<<endl;
        }else if(pilihan=="Makan" || pilihan=="makan"){
            cout<<"Waifu: "<<response[2];
            cout<<endl<<endl;
        }
    }
    return 0;
}