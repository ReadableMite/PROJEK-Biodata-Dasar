#include<iostream> // library standard cpp
using namespace std; // pake standard

int main(){ // fungsi utama yang dijalankan dulu

    int n, f1 = 0, f2 = 1, fn;  // variabel n buat panjang deret
                                // f1 buat nilai 1 atau awal
                                // f2 buat nilai keduanya
                                // fn buat nilai terbaru nya
    cout << "Masukkan panjgan deret: ";
    cin >> n;

    cout << f1 << " " << f2 << " "; // keluarin nilai f1 sama f2 dulu

    for(int i = 1; i <= (n - 2); i++){ // 
        fn = f1 + f2; // f1 sama f2 ditambah
        cout << fn << " "; // keluarkan nilai baru (penjumlahan dari f1 dan f2)

        f1 = f2;
        f2 = fn;
    }
    cout << endl;
    return 0;
}
