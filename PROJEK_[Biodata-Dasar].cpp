#include<iostream>
using namespace std;
int main(){
    string nama, alamat, kampus, cita_cita;
    int umur;
    float bb;
    
    cout<<"Masukkan Nama: ";
    getline(cin, nama);
    cout<<"Masukkan Umur: ";
    cin>>umur;
    cout<<"Masukkan Berat Badan: ";
    cin>>bb;
    cin.ignore(); 
    /*Ini buat kalo tiap ada yg ganti tipe data ya, soalnya tiap ganti tipe data itu selalu ada sisa dari data yg diisikan, tipe data cpp itu dia selalu ninggalin sisa kalo ganti ke tipe data lain
    
    Makanya waktu user Enter setelah ngetik itemnya yg di tipe data float, bakalan ada ke-enter sendiri buat tipe data setelah float. karena dianggap Enter itu masuk ke data yg perlu diisikan.
    
    Misal contoh: aku isi tipe data string, setelah itu ke int, bool, dan lain2, itu perlu cin.ignore() biar dia clear dan tipe data ga kebingungan mau return apa.*/
    
    cout<<"Masukkan Alamat: ";
    getline(cin,  alamat);
    cout<<"Masukkan Instansi/Pendidikan: ";
    getline(cin, kampus);
    cout<<"Masukkan Cita-Cita: ";
    getline(cin, cita_cita);
    cout<<"\nBaik Terima Kasih Atas Respon Anda!\nBerikut Merupakan Data Anda!\n"<<endl;
    
    cout<<"Nama                 : "<<nama<<endl;
    cout<<"Umur                 : "<<umur<<" tahun"<<endl;
    cout<<"Berat Badan          : "<<bb<<" kg"<<endl;
    cout<<"Alamat               : "<<alamat<<endl;
    cout<<"Instansi/Pendidikan  : "<<kampus<<endl;
    cout<<"Cita-Cita            : "<<cita_cita<<endl;
    
    return 0;
}