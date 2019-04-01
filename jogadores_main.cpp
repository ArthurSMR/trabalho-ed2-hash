#include <iostream>
#include "jogadores.h"
#include "goleiro.h"
#include "atacante.h"
#include "basic.h"
#include <string>

/*
Autores do c�digo:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

using namespace std;

void printJogadores(Jogadores **jogador, int i) {
	for (i = 0; i < 3; i++) {
		cout << "\n";
		cout << "Jogador " << i + 1 << endl;
		cout << "Altura: " << jogador[i]->getAltura() << endl;
		cout << "Peso..: " << jogador[i]->getPeso() << endl;
		cout << "Idade.: " << jogador[i]->getIdade() << endl;
		cout << "RG....: " << jogador[i]->getRg() << "\n" << endl;
	}
}

void deleteJogadores(Jogadores **jogador, int i) {
	for (i = 0; i < 3; i++) {
		delete jogador[i];
	}
}

int main() {
	Hash hash;
	hash.print();
	Jogadores jogador;

	int tipo, ida, numRg;
	float alt, pes;

	//for (int i = 0; i < 3; i++) {

		cout << "Tipo 1 = Goleiro\nTipo 2 = Atacante\nTipo 3 = Jogador sem posicao\n" << endl;
		cout << "Tipo.......: ";
		cin >> tipo;
		cout << "Idade......: ";
		cin >> ida;
		cout << "Altura.....: ";
		cin >> alt;
		cout << "Peso.......: ";
		cin >> pes;
		cout << "RG.........: ";
		cin >> numRg;
		
		if (tipo == 1) {		//Goleiro
			int def, ref, sal;
			cout << "Defesa.....: ";
			cin >> def;
			cout << "Reflexo....: ";
			cin >> ref;
			cout << "Salto......: ";
			cin >> sal;
			cout << "\n--------------------" << endl;

			Goleiro goleiro = Goleiro(alt, pes, ida, numRg, def, ref, sal);
			hash.insertItem(goleiro);
		}
		else if (tipo == 2) {	//Atacante
			int vel, fin, dri;
			cout << "Velocidade.: ";
			cin >> vel;
			cout << "Finalizacao: ";
			cin >> fin;
			cout << "Drible.....: ";
			cin >> dri;
			cout << "\n--------------------" << endl;

			Atacante atacante = Atacante(tipo, alt, pes, ida, numRg, vel, fin, dri);
			hash.insertItem(atacante);
		}
		else {					//Jogador normal
			cout << "\n--------------------" << endl;
			Jogadores jogadores = Jogadores(tipo, alt, pes, ida, numRg);
			hash.insertItem(jogadores);
		}

	//}
	
	hash.print();
	cout << "------------------------------" << endl;
	
	//Jogadores jogadores()

	return 0;
}