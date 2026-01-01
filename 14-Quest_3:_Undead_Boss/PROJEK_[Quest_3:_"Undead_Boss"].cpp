#include<iostream>
using namespace std;
int main(){
    int serangan, damage=10, heal=1, stamina=60, hp_mc=100, stamina_kurang=5, hp_undead=300;
    cout<<"A little bit hard of training, right? Then, you must be thirsty of war.\nContinue your Journey, and fight Undead Boss!\n\n"<<endl;
    cout<<"FIght Undead Boss in Wasteland!\n";
    do{
        cout<<"Undead Boss ada dihadapanmu, serang dia!\nKetik jumlah serangan: ";
        cin>>serangan;
        
        for(int i=1;i<=serangan;i++){
            cout<<"SLASH!\n";
            stamina=stamina-stamina_kurang;
            hp_undead=hp_undead-damage;
            
            if(stamina<0){
                cout<<"Stamina kamu kurang...segera lakukan 'Heal' untuk memulihkan diri?(ketik 1) ";
                cin>>heal;
                stamina=stamina+50;
            }else{
                cout<<" \n";
            }
            cout<<"Stamina kamu tersisa "<<stamina<<endl;
        }
    }while(hp_undead>0);
    cout<<"Undead telah dikalahkan! Selamat, kamu adalah seorang Pahlawan!!";
        
    
    return 0;
}