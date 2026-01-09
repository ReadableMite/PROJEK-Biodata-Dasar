#include<iostream>
using namespace std;
int main(){
    string nama_musuh[3]{
        "Slime", "Goblin", "Orc"
    }, pilihan;
    int hp_musuh[3]{
        30, 50, 100
    }, attack_musuh[3]{
        5, 10, 20
    }, attack_karakter=20, hp_karakter=100;
    
    cout<<"Selamat Datang di Program Array: 'Fight Enemy RPG'\nSilahkan Ikuti Program Berikut.\n"<<endl;
    while(true){
        cout<<"--- Daftar Monster ---\n";
        cout<<"1. Slime: "<<hp_musuh[0]<<"\n2. Goblin: "<<hp_musuh[1]<<"\n3. Orc: "<<hp_musuh[2]<<"\n4. Kabur: Kamu penakut\n\nPilih monster untuk dilawan: ";
        cin>>pilihan;
        
        if(pilihan=="Kabur" || pilihan=="kabur"){
            cout<<"Kamu lari terbirit-birit...";
            break;
        }
        hp_karakter=100;
        bool lawan=false;
        for(int i=0;i<3;i++){
            if(pilihan==nama_musuh[i]){
                hp_musuh[i]-=attack_karakter;
                hp_karakter-=attack_musuh[i];
                if(hp_musuh[i]<=0 && hp_karakter>0){
                    cout<<"[⚔️] Kamu bertarung dengan "<<nama_musuh[i]<<" dan menang!\n"<<endl;
                }else if(hp_musuh[i]>0 && hp_karakter<=0){
                    cout<<"[⚔️] Kamu bertarung dengan "<<nama_musuh[i]<<" dan kalah.\n"<<endl;
                }else if(hp_musuh[i]<=0 || hp_karakter<=0){
                    cout<<"[⚔️] Kamu bertarung dengan "<<nama_musuh[i]<<" dan kalah.\n"<<endl;
                }
                lawan=true;
                break;
            }
        }
        
        if(lawan=false){
            cout<<"Monster tidak ditemukan...\n";
            break;
        }
    }
    return 0;
}