#include<iostream>

int main(){
    std::string keyword[3]{"Halo", "Sapa", "Tanya"}, respon[3]{"Halo juga, Senpai! Gimana kabarnyaa~ ?", "Halo, Senpai! Udahan ya main sapa-sapaannya, aku capek.", "Aku lagi ga mau ditanya-tanyain sekarang ay..."}, pilihan;
    int mood[3]{5, -5, -10}, mood_chatbot=50;
    
    std::cout<<"Selamat Datang di Program ChatBot Waifu: 'JaneDoe 2'\nSilahkan Ikuti Program Berikut.\n";
    while(mood_chatbot>0){
        std::cout<<"\n--- Daftar Menu ---\n";
        std::cout<<"1. Halo\n2. Sapa\n3. Tanya\n4. Bye\n\nMasukkan pilihan: ";
        std::cin>>pilihan;
        
        if(pilihan=="Gift" || pilihan=="gift"){
            mood_chatbot=100;
            std::cout<<"Hehe, makasihh~~ jadi sayang dechh...\n";
        }
        
        if((pilihan=="Bye" || pilihan=="bye") && mood_chatbot>50){
            std::cout<<"Dadah, Senpai! Kapan-kapan ngobrol lagi ama aku yah~\n";
            break;
        }else if((pilihan=="Bye" || pilihan=="bye") && mood_chatbot<=50){
            std::cout<<"Bye.\n";
            break;
        }else if((pilihan=="Bye" || pilihan=="bye") && mood_chatbot<=0){
            std::cout<<"Akhirnya pergi juga lu, gausah balik!\n";
            break;
        }
        
        bool ketemu=false;
        for(int i=0;i<3;i++){
            ketemu=true;
            
            if(pilihan==keyword[i]){
                mood_chatbot+=mood[i];
                std::cout<<"Jane Doe: "<<respon[i]<<std::endl;
                std::cout<<"Mood Waifu: "<<mood_chatbot<<std::endl;
                break;
            }
        }
        if(ketemu==false && pilihan!="Gift" && pilihan!="Bye"){
            std::cout << "Jane Doe: Hah? Ngomong apa sih?\n";
            mood_chatbot-=2;
        }
    }
    
    return 0;
}