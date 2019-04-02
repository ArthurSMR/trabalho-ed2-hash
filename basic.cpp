#include <iostream>
#include <cstddef> // Para usar o NULL
#include "basic.h"


/*
O construtor já foi feito para você, apenas memorize a sintaxe de
alocação de um array. Observe que a chamada "new Account[size]" vai
gerar novos objetos Account
*/

Hash::Hash(int size) {
    MAX_ITEMS = size;
    cadastro = new Jogadores*[size];
    for (int i = 0; i < size; i++) {
        cadastro[i] = NULL;
    }
    length = 0;
}

int Hash::getLength() const{
    return length;
}

void Hash::retrieveItem(Jogadores& jogadores, bool& found){
    int location = jogadores.getHash(MAX_ITEMS);
    if (cadastro[location] == NULL ) { 
        found = false;
    } else {
        found = true;
    // A atribuição invoca o copy constructor.
        jogadores = *cadastro[location];    
    }
}


/*
A chamada da função invoca o copy constructor.
*/
void Hash::insertItem(Jogadores *jogadores){ 
    int location = jogadores->getHash(MAX_ITEMS);
    cadastro[location] = jogadores;
    length++;
}

void Hash::deleteItem(Jogadores *jogadores){
    int location = jogadores->getHash(MAX_ITEMS);
    delete cadastro[location];
    cadastro[location] = NULL;
    length--; 
}

void Hash::print() const {
    std::cout << "INI" << std::endl;
    for (int i = 0; i < MAX_ITEMS; i++) {
        Jogadores* acc = cadastro[i];
        if(acc != NULL){
            acc->print();
        }
    }
    std::cout << "FIM" << std::endl;
}