#include <iostream>
#include <string>
#include <thread> // Library untuk mengatur alur waktu (jeda/sleep)
#include <chrono> // Library untuk standar satuan waktu (ms, detik, dll)

// ANSI STYLE: Kode rahasia untuk memberitahu terminal agar mengubah tampilan teks
const std::string BOLD   = "\033[1m";
const std::string ITALIC = "\033[3m";
const std::string RESET  = "\033[0m"; // Wajib digunakan untuk mengembalikan teks ke normal
const std::string GREEN  = "\033[32m";

// Variabel Global: Bisa diakses dari fungsi mana pun (Intro, Bunker, dll)
std::string player;

// ===== UTIL (Fungsi Pembantu/Alat) =====

// Fungsi efek mesin ketik. 
// const std::string& teks: Mengambil input tulisan (pake & biar hemat memori)
// int kecepatan: Jeda antar huruf (default 25 milidetik)
void ketik(const std::string& teks, int kecepatan = 25){
    for(char c : teks){ // Perulangan untuk mengambil satu per satu karakter dari kalimat
        std::cout << c << std::flush; // Tampilkan karakter & paksa muncul ke layar saat itu juga
        std::this_thread::sleep_for(std::chrono::milliseconds(kecepatan)); // Jeda sebentar
    }
}

// Fungsi khusus buat ngetik teks tebal
void inputBold(const std::string& teks){
    std::cout << BOLD;
    ketik(teks);
    std::cout << RESET;
}

// Fungsi shortcut untuk ngetik teks biasa tanpa ganti baris
void say(const std::string& teks){
    ketik(teks);
}

// Fungsi shortcut untuk ngetik teks + otomatis kasih 2 baris baru di akhir
void sayln(const std::string& teks){
    ketik(teks);
    std::cout << "\n\n";
}

// Fungsi untuk menampilkan kotak informasi/tips biar seragam
void tip(const std::string& teks){
    std::cout << BOLD << "      [" << teks << "]      " << RESET << "\n\n";
}

// Fungsi untuk menghentikan cerita sementara sampai user pencet ENTER
void pause(){
    std::string _; // Variabel dummy/sampah cuma buat nampung enter
    std::cout << "[Tekan ENTER untuk melanjutkan...]";
    std::getline(std::cin, _);
    std::cout << "\n";
}

// ===== SCENE (Bagian Cerita) =====

void intro(){
    sayln("WARISAN TERAKHIR");
    sayln("Layar gelap.");
    sayln("Suara napas berat terdengar, diiringi bunyi mesin tua yang berdengung pelan.");
    tip("TIP: Gunakan tombol A / D untuk bergerak");
    pause();
}

void sceneBunker(){
    sayln("Cahaya redup muncul. Sebuah bunker bawah tanah yang sempit dan lembap...");

    // ... (Logika cerita sama seperti sebelumnya)

    sayln("Kakek: \"Kh… khh… Nak…\"");

    inputBold("Masukkan Nama Player: ");
    std::cin >> player;
    std::cin.ignore(); // Membersihkan sisa 'Enter' di buffer agar tidak mengganggu getline berikutnya
    std::cout << "\n";

    // ...
    sayln(player + ": \"Aku di sini, Kek.\""); // Menggabungkan nama player dengan teks dialog
    // ...
}

void sceneSurface(){
    // Logika scene di permukaan bumi
    // ...
    tip("COMBAT: Serangan Jarak Dekat | Perhatikan Stamina");
    pause();
}

void sceneDeath(){
    // Logika scene penutup/kematian kakek
    // ...
    std::cout << BOLD << GREEN;
    sayln("[QUEST BARU TERBUKA: Keluar ke Dunia Luar]");
    std::cout << RESET;
}

// ===== MAIN (Pintu Masuk Utama Program) =====
int main(){
    // Memanggil fungsi scene satu per satu secara berurutan (Linear)
    intro();
    sceneBunker();
    sceneSurface();
    sceneDeath();
    
    return 0; // Menandakan program selesai dengan sukses
}