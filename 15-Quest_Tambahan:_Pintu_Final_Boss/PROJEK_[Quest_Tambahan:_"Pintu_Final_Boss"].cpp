#include<iostream>
using namespace std;
int main(){
    int stamina=60, tenaga=5, serangan, damage=10, hp_pintu=60;
    cout<<"Hey, Adventurer! There is a door over there, can you unlock the door or somethin?\n"<<endl;
    do{
        cout<<"Masukkan jumlah serangan untuk mendobrak pintu: ";
        cin>>serangan;
        
        for(int i=0; i<serangan; i++){
            cout<<"Dobrak!\n";
            stamina=stamina-tenaga;
            hp_pintu=hp_pintu-damage;
            if(hp_pintu<=0){
                cout<<"Pintu rusak...kamu berhasil mendobraknya!\n";
                break;
            }else if(hp_pintu>0){
                cout<<"Lakukan lagi!\n";
            }
        }
    }while(stamina>=0 && hp_pintu>=0);
    
    return 0;
}