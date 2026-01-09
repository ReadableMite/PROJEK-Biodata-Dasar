#include<iostream>
using namespace std;
int main(){
    string nama_musuh[3]{"Slime", "Goblin", "Orc"}, pilihan;
    int hp_musuh[3]{30, 50, 100}, attack_musuh[3]{5, 10, 20}, attack_karakter=20, hp_karakter=100;
    
    cout<<"Selamat Datang di Program Array: 'Turn Based RPG'\nSilahkan Ikuti Program Berikut.\n";
    
    hp_karakter=100;
    while(hp_karakter>0){
        cout<<"\n--- Daftar Monster ---\n";
        cout<<"HP Kamu: "<<hp_karakter<<endl<<endl;
        for(int a=0;a<3;a++){
            if(hp_musuh[a]>0){
                cout<<a+1<<". "<<nama_musuh[a]<<": "<<hp_musuh[a]<<endl;
            }else{
                cout<<a+1<<". "<<nama_musuh[a]<<": "<<hp_musuh[a]<<" [TELAH DIKALAHKAN]\n";
            }
        }
        cout<<"4. Kabur\n";
        cout<<"\nPilih Monster (Ex. Slime): ";
        cin>>pilihan;
        
        if(pilihan=="Heal"){
            hp_karakter=100;
        }
        
        if(pilihan=="Kabur" || pilihan=="kabur"){
            cout<<"Kamu lari terbirit-birit...";
            break;
        }
        
        bool ketemu=false;
        for(int i=0;i<3;i++){
            if(pilihan==nama_musuh[i]){
                ketemu=true;
            
                if(hp_musuh[i]<=0){
                    cout<<"Musuh telah dikalahkan...\n"<<endl;
                }else{
                    cout<<"Kamu telah memberikan damage sebesar "<<attack_karakter<<" kepada "<<nama_musuh[i]<<endl;
                    hp_musuh[i]-=attack_karakter;
                    if(hp_musuh[i]<=0){
                        hp_musuh[i]=0;
                        cout<<nama_musuh[i]<<" [Mati]\n";
                    }else{
                        hp_karakter-=attack_musuh[i];
                        cout<<nama_musuh[i]<<" memberikan damage "<<attack_musuh[i]<<" kepadamu\n";
                    }
                }
                break;
            }
        }
        
        if(ketemu==false && pilihan!="Heal"){
            cout<<"Monster tidak ditemukan...\n";
        }
    }
    return 0;
}