#include "atacante.h"
#include <iostream>
#include <string>

/*
Autores do código:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

using namespace std;

Atacante::Atacante(float alt, float pes, int ida, int numRg, int vel, int fin, int dri) : Jogadores(alt, pes, ida, numRg){
	this->altura = alt;
	this->idade = ida;
	this->rg = numRg;
	this->velocidade = vel;
	this->finalizacao = fin;
	this->drible = dri;
}

int Atacante::getVelocidade() const{
	return this->velocidade;
}

int Atacante::getFinalizacao() const{
	return this->finalizacao;
}

int Atacante::getDrible() const{
	return this->drible;
}

void Atacante::setVelocidade(int vel) {
	this->velocidade = vel;
}

void Atacante::setFinalizacao(int fin) {
	this->finalizacao = fin;
}

void Atacante::setDrible(int dri) {
	this->drible = dri;
}

int Atacante::getHash(int max_number) const{
	return rg % max_number;
}

void Atacante::print() {
	cout << "Posicao: Atacante" << endl;
	cout << "Altura.........: " << getAltura() << endl;
	cout << "Peso...........: " << getPeso() << endl;
	cout << "Idade..........: " << getIdade() << endl;
	cout << "Velocidade.....: " << getVelocidade() << endl;
	cout << "Finalizacao....: " << getFinalizacao() << endl;
	cout << "Drible.........: " << getDrible() << endl;
}

Atacante::Atacante(const Atacante &obj) {
velocidade = obj.velocidade;
finalizacao = obj.finalizacao;
drible = obj.drible;
}