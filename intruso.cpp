#include <string>
#include <vector>
#include <iostream>
#include<map>
#include "intruso.hpp"
// Exemplos de entrada
// 2 (numero de entrada)
// 1 7 3 9 0 8 5 6 2 4 B C E A E B
//9 0 7 5 8 4 6 2 3 1 E C C B D A
//----------------------------------

std :: vector <char> a, b, c, d, e;
int size_all_password = 0, counter = 0;
std :: string password = "         ";


void Intruso :: set_senha_vazada(std::string vazou){
    //Duas primeiras prosições de cada vetor de cada letra são os possiveis numeros;
    a.push_back(vazou[0]); a.push_back(vazou[2]);
    b.push_back(vazou[4]); b.push_back(vazou[6]);
    c.push_back(vazou[8]); c.push_back(vazou[10]);
    d.push_back(vazou[12]); d.push_back(vazou[14]);
    e.push_back(vazou[16]); e.push_back(vazou[18]);

    //a cada 10 elementos, temos uma senha distinta;
    //size_all_password / 10 = n° de senhas;
    for(int i=20; i < vazou.size(); i+=2){
        all_passwords.push_back(vazou[i]);
        size_all_password = all_passwords.size();
    }
}
    
//Implementado, mas apenas vai testar as duas primeiras senhas;
std::string Intruso ::  crack_senha(){
    std :: string count;
    for(int i = 0; i < 10; i++){
        switch(all_passwords[i]){
            case 'A':
                    for(int j = 0; j < 2; j++){
                        for(int k = 2; k < 4; k++){
                            if(a[j] == a[k])
                            count[i] = a[j];
                        }
                    }
            case 'B':
                    for(int j = 0; j < 2; j++){
                        for(int k = 2; k < 4; k++){
                            if(b[j] == b[k])
                            count[i] = b[j];
                        }
                    }
            case 'C':
                    for(int j = 0; j < 2; j++){
                        for(int k = 2; k < 4; k++){
                            if(c[j] == c[k])
                            count[i] = c[j];
                        }
                    }
            case 'D':
                    for(int j = 0; j < 2; j++){
                        for(int k = 2; k < 4; k++){
                            if(d[j] == d[k])
                            count[i] = d[j];
                        }
                    }
            case 'E':
                    for(int j = 0; j < 2; j++){
                        for(int k = 2; k < 4; k++){
                            if(e[j] == e[k])
                            count[i] = e[j];
                        }
                    }
            default:
            //não fazer nada
        }
    }
    for(int j = 0, i = 0; j < 10; j+=2, i++){
            password[j] = count[i];
            password[j+1] = ' ';
    }
    return password;
}