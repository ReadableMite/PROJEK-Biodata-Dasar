#include<iostream>
using namespace std;
int main(){
    string inventory[3];
    
    cout<<"Selamat Datang di Program Array: 'Slot Item'\nSilahkan Ikuti Program Berikut.\n";
    cout<<"Masukkan item untuk slot 0: ";
    cin>>inventory[0];
    cout<<"Masukkan item untuk slot 1: ";
    cin>>inventory[1];
    cout<<"Masukkan item untuk slot 2: ";
    cin>>inventory[2];
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"Slot "<<i<<": "<<inventory[i]<<endl;
    }
    
    return 0;
}