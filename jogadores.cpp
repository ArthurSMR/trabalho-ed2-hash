#include <iostream>
#include "jogadores.h"
#include <string>

/*
Autores do c�digo:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

using namespace std;

Jogadores::Jogadores(int tipo, float alt, float pes, int ida, int numRg) : tipoJogador(tipo), altura(alt), peso(pes), idade(ida), rg(numRg) { }

int Jogadores::getTipo() const {
	return this->tipoJogador;
}

float Jogadores::getAltura() const{
	return this->altura;
}

float Jogadores::getPeso() const{
	return this->peso;
}

int  Jogadores::getIdade() const {
	return this->idade;
}

int Jogadores::getRg() const {
	return this->rg;
}


void Jogadores::setAltura(float alt){
	this->altura = alt;
}

void Jogadores::setPeso(float pes){
	this->peso = pes;
}

/*
void Jogadores::setNome(string nom) {
	this->nome = nom;
}
*/

void Jogadores::setIdade(int ida) {
	this->idade = ida;
}

void Jogadores::setRg(int numRg){
	this->rg = numRg;
}


void Jogadores::print() {
	cout << "Altura.: " << getAltura() << endl;
	cout << "Peso...: " << getPeso() << endl;
	cout << "Idade..: " << getIdade() << endl;
}

int Jogadores::getHash(int max_number) const{
	return rg % max_number;
}

Jogadores::Jogadores(const Jogadores &obj) {
peso = obj.peso;
tipoJogador = obj.tipoJogador;
rg = obj.rg;
altura = obj.altura;
idade = obj.idade;
}