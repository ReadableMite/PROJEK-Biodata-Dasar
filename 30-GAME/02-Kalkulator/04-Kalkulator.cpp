#include<iostream>

int main(){
    // std::string input[3];
    std::string Error="Perhitungan Error!";
    int nilai1, nilai2;
    char op;
    bool isError=false;
    
    std::cout<<"\nInput: ";
    std::cin>>nilai1>>op>>nilai2;

    if(op=='+'){
        nilai1=nilai1 + nilai2;
    }else if(op=='-'){
        nilai1=nilai1 - nilai2;
    }else if(op=='*'){
        nilai1=nilai1 * nilai2;
    }else if(op=='/'){
        if(nilai2==0){
            std::cout<<"Perintah tidak sesuai.\n";
        }else if(nilai2!=0){
            nilai1=nilai1 / nilai2;
        }
    }else if(op=='%'){
        nilai1=nilai1 % nilai2;
    }

    while(isError!=true){
        std::cout<<"\nInput: "<<nilai1;
        std::cin>>op>>nilai2;
        
        if(op=='+'){
            nilai1=nilai1 + nilai2;
        }else if(op=='-'){
            nilai1=nilai1 - nilai2;
        }else if(op=='*'){
            nilai1=nilai1 * nilai2;
        }else if(op=='/'){
            if(nilai2==0){
                std::cout<<"Perintah tidak sesuai.\n";
            }else if(nilai2!=0){
                nilai1=nilai1 / nilai2;
            }
        }else if(op=='%'){
            nilai1=nilai1 % nilai2;
        }
    }
    return 0;
}