#include "goleiro.h"
#include <iostream>
#include <string>

/*
Autores do c�digo:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

using namespace std;

Goleiro::Goleiro(float alt, float pes, int ida, int numRg, int def, int ref, int sal) : Jogadores(alt, pes, ida, numRg) {
	this->altura = alt;
	this->idade = ida;
	this->rg = numRg;
	this->defesa = def;
	this->reflexo = ref;
	this->salto = sal;
}


int Goleiro::getDefesa() const {
	return this->defesa;
}

int Goleiro::getReflexo() const {
	return this->reflexo;
}

int Goleiro::getSalto() const {
	return this->salto;
}

void Goleiro::setDefesa(int def) {
	this->defesa = def;
}

void Goleiro::setReflexo(int ref) {
	this->reflexo = ref;
}

void Goleiro::setSalto(int sal) {
	this->salto = sal;
}

int Goleiro::getHash(int max_number) const{
	return rg % max_number;
}

void Goleiro::print() {
	cout << "Posicao: Goleiro" << endl;
	cout << "Altura..: " << getAltura() << endl;
	cout << "Peso....: " << getPeso() << endl;
	cout << "Idade...: " << getIdade() << endl;
	cout << "Defesa..: " << getDefesa() << endl;
	cout << "Reflexo.: " << getReflexo() << endl;
	cout << "Salto...: " << getSalto() << endl;
}

Goleiro::Goleiro(const Goleiro &obj) {
defesa = obj.defesa;
reflexo = obj.reflexo;
salto = obj.salto;
}