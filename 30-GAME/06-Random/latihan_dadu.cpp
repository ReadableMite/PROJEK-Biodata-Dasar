#include <iostream>
#include <cstdlib>

int main(){

    char lanjut;
    while (true){
        std::cout << "Lempar dadu? (y/n) ";
        std::cin >> lanjut;

        if(lanjut == 'y'){
            std::cout << 1 + (rand() % 6) << std::endl;
        }else if(lanjut == 'n'){
            std::cout << "Program cancelled";
            break;
        }else{
            std::cout << "Warning: Pilihan tersedia 'y' or 'n'\n";
        }
    }

    return 0;
}