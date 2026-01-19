#include<iostream>

int main(){
    int nilai1, nilai2, hasil;
    char input;
    bool isError=false;
    std::string Error="Perhitungan Error!";

    while(isError!=true){
        std::cout<<"\nInput: ";
        std::cin>>nilai1>>input>>nilai2;
        
        if(input=='+'){
            hasil=nilai1 + nilai2;
        }else if(input=='-'){
            hasil=nilai1 - nilai2;
        }else if(input=='*'){
            hasil=nilai1 * nilai2;
        }else if(input=='/'){
            hasil=nilai1 / nilai2;
        }else if(input=='%'){
            hasil=nilai1 % nilai2;
        }

        if(hasil==0){
            std::cout<<"Hasil: 0"<<std::endl;
            break;
        }
        std::cout<<"Hasil = "<<hasil;
    }
    return 0;
}
