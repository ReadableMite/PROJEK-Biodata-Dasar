#include<iostream>
using namespace std;
int main(){
    int total_xp=0, dapet_xp, kurang_xp;
    cout<<"Welcome Adventurer!\nA Beautiful Day at Wasteland\n"<<endl;

    while(true){
        cout<<"Masukkan jumlah EXP yang kamu dapatkan, Adventurer!\nJumlah EXP: ";
        cin>>dapet_xp;
        total_xp=dapet_xp+total_xp;
        kurang_xp= 100 - total_xp;
        if(total_xp>100){
            cout<<"EXP yang kamu masukkan terlalu banyak, silahkan kurangi sesuai jumlah EXP yang dibutuhkan.\n"<<endl;
        }else{
            if(total_xp<100){
                cout<<"EXP yang kamu dapatkan masih kurang, kamu membutuhkan "<<kurang_xp<<" untuk melanjutkan.\n"<<endl;
            }else if(total_xp==100){
                cout<<"EXP kamu sudah mencukupi, terima kasih atas kerja kerasmu, Advenurer!\n"<<endl;
                break;
            }
        }
    }

return 0;
}