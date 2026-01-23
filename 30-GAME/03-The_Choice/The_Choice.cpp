#include <iostream>
#include <string>
#include <thread> // Library untuk jeda waktu (efek mengetik)
#include <chrono> // Library untuk satuan waktu milidetik

// ANSI STYLE: Biar tampilan terminal lebih keren
const std::string BOLD   = "\033[1m";
const std::string ITALIC = "\033[3m";
const std::string RESET  = "\033[0m";
const std::string GREEN  = "\033[32m";

std::string player; // Penampung nama pemain

std::string mainQuest = ""; // Quest utama di game
std::string sideQuest[5]; // Quest sampingan di game (ini bisa berubah-ubah tergantung situasi/emergent open world)
bool questSelesaiFlag = false; // flag buat quest udah selesai/belum

// ===== UTIL (Fungsi Pembantu) =====

// Fungsi mesin ketik: memunculkan huruf satu per satu
void ketik(const std::string& teks, int kecepatan = 25){
    for(char c : teks){
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(kecepatan));
    }
}

// Shortcut: Mengetik teks tebal
void inputBold(const std::string& teks){
    std::cout << BOLD;
    ketik(teks);
    std::cout << RESET;
}

// Shortcut: Mengetik teks biasa tanpa ganti baris
void say(const std::string& teks){
    ketik(teks);
}

// Shortcut: Mengetik teks + otomatis kasih 2 baris baru
void sayln(const std::string& teks){
    ketik(teks);
    std::cout << "\n\n";
}

// Shortcut: Menampilkan kotak Tip/Objek/Informasi
void tip(const std::string& teks){
    std::cout << BOLD << "      [" << teks << "]      " << RESET << "\n\n";
}

// Shortcut: Menampilkan teks Quest
void quest(const std::string& teks){
    mainQuest = teks;
    questSelesaiFlag = false;

    std::cout << BOLD << GREEN;
    sayln("      [QUEST BARU TERBUKA: " + teks + "]      ");
    std::cout << RESET;
}

//Shortcut: Menampilkan teks Quest selesai
void questMainSelesai(){
    if(mainQuest == ""){
        return; // tidak ada main Quest
    }

    questSelesaiFlag = true;

    std::cout << BOLD << GREEN;
    sayln("     [QUEST " + mainQuest + " Selesai]");
    std::cout << RESET;

    mainQuest = "";
}

// Fungsi Berhenti: Menunggu pemain menekan Enter
void pause(){
    std::string _;
    std::cout << "[Tekan ENTER untuk melanjutkan...]";
    std::getline(std::cin, _);
    std::cout << "\n";
}

// ===== SCENE (Bagian Cerita Lengkap) =====

void intro(){
    sayln("WARISAN TERAKHIR");
    sayln("Layar gelap.");
    sayln("Suara napas berat terdengar, diiringi bunyi mesin tua yang berdengung pelan.");

    tip("TIP: Gunakan tombol A / D untuk bergerak");
    pause();
}

void sceneBunker1(){
    sayln("Cahaya redup muncul. Sebuah bunker bawah tanah yang sempit dan lembap. "
          "Lampu neon berkedip, hampir mati. Debu beterbangan di udara.");

    sayln("Seorang pemuda berdiri di dekat pintu besi. Tangannya masih kaku, "
          "seolah baru terbangun dari tidur yang terlalu lama.");

    sayln("Di sudut ruangan, terdengar suara batuk.");
    pause();

    sayln("Kakek: \"Kh… khh… Nak…\"");

    inputBold("Masukkan Nama Player: ");
    std::getline(std::cin, player);
    std::cin.ignore(); // Membersihkan sisa Enter agar getline di pause() tidak error
    std::cout << "\n";
}

void questGenerator(){
    quest("Nyalakan generator");

    std::string aksi;
    bool berhasil = false;

    while(!berhasil){
        std::cout << "Ketik 'Generator' untuk menyalakan mesin: ";
        std::getline(std::cin, aksi); // Pake getline lebih aman

        if(aksi == "Generator" || aksi == "generator"){
            sayln("\n*BRRRRRRRRRRRMMMM!* Suara mesin menderu pelan. Lampu neon menyala stabil.");
            questMainSelesai();
            berhasil = true;
        } else {
            sayln("\nKamu mencoba mengotak-atik, tapi tidak terjadi apa-apa. Sepertinya kamu salah ketik.");
        }
    }
}

void sceneBunker2(){
    sayln("Kakek: \"Kh...Kh...Kkkhhh...\" suara batuknya semakin parah");
    pause();

    

    sayln("Seorang pria renta duduk di kursi kayu, tubuhnya dibungkus selimut lusuh. "
          "Tangannya gemetar, tapi matanya masih tajam menatap pemuda itu.");
    pause();

    sayln("Kakek: \"Kau sudah bangun?\" tanyanya pelan.");
    pause();

    std::cout << ITALIC;
    sayln("Kamu mendekat.");
    std::cout << RESET;

    tip("TIP: Tekan W untuk lompat | S untuk menunduk");
    pause();

    sayln(player + ": \"Aku di sini, Kek.\"");
    pause();

    sayln("Pria itu tersenyum tipis.");
    sayln("Kakek: \"Bagus… hari ini kita harus cek pintu bunker. "
          "Semalam aku dengar suara di luar.\"");
    pause();

    tip("OBJ: Temui Kakek (Tekan E untuk Interaksi)");
    pause();

    sayln("Kakek: \"Kakimu jangan terlalu berisik,\" kata sang kakek.");
    sayln("Kakek: \"Undead masih suka berkeliaran di permukaan.\"");
    pause();

    std::cout << ITALIC;
    sayln("Kamu mengangguk.");
    std::cout << RESET;
}

void sceneSurface(){
    sayln("Kalian berhenti di depan pintu besi besar. "
          "Angin dingin menyelinap dari celahnya.");

    sayln("Kakek: \"Aku akan menunggu di sini. Kau saja yang naik.\"");
    pause();

    tip("TIP: Tekan Shift untuk Lari | Ctrl untuk Sneak");
    pause();

    sayln("Kamu menaiki tangga besi menuju permukaan.");
    sayln("Dunia luar menyambutmu dengan keheningan yang menyesakkan.");
    sayln("Gedung runtuh. Pohon mati. Bau busuk memenuhi udara.");
    pause();

    tip("OBJ: Ambil Kayu & Scrap Besi");
    pause();

    sayln("Tiba-tiba, sebuah Undead muncul dari balik reruntuhan.");

    tip("COMBAT: Serangan Jarak Dekat | Perhatikan Stamina");
    pause();

    sayln("Undead itu roboh ke tanah.");

    std::cout << ITALIC;
    sayln("Napasmu terengah. Ini bukan latihan.");
    std::cout << RESET;
    pause();
}

void sceneDeath(){
    sayln("Kamu turun kembali ke bunker.");
    sayln(player + ": \"Kek, aku—\"");
    pause();

    sayln("Kata-katamu terhenti.");
    sayln("Pria renta itu terbaring di lantai. "
          "Matanya terpejam. Wajahnya tenang.");
    pause();

    sayln(player + ": \"Kek…?\"");
    pause();

    sayln("Mesin bunker terus berdengung.");
    pause();

    std::cout << ITALIC;
    sayln("Beberapa waktu kemudian…");
    std::cout << RESET;
    pause();

    sayln("Kamu berdiri di depan gundukan tanah yang masih basah.");
    sayln("Suara itu kembali terngiang di kepalamu.");

    std::cout << ITALIC;
    sayln("\"Dunia ini terlalu luas untuk dinikmati sendirian.\"");
    std::cout << RESET;
    pause();

    std::cout << BOLD << GREEN;
    sayln("      [QUEST BARU TERBUKA: Keluar ke Dunia Luar]      ");
    std::cout << RESET;
}

// ===== MAIN =====
int main(){
    intro();
    sceneBunker1();
    questGenerator();
    sceneBunker2();
    sceneSurface();
    sceneDeath();
    
    return 0;
}