#include "atacante.h"
#include <iostream>
#include <string>

/*
Autores do código:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

using namespace std;

Atacante::Atacante(int tipo, float alt, float pes, int ida, int numRg, int vel, int fin, int dri) : Jogadores(tipo, alt, pes, ida, numRg){
	this->tipoJogador = tipo;
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

Atacante::Atacante(const Atacante &obj) {
velocidade = obj.velocidade;
finalizacao = obj.finalizacao;
drible = obj.drible;
}