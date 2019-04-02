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

int main() {
	Hash hash;
	Jogadores *jogadores;
	Goleiro *goleiro;
	Atacante *atacante;

	int tipo, ida, numRg;
	float alt, pes;

  cout << "LISTA:" << endl;
	hash.print(); // mostrar hash vazia
	cout << "------------------------------" << endl;
	cout << "Inserir um jogador de cada tipo" << endl;
	cout << "Tipo 1 = Goleiro\nTipo 2 = Atacante\nTipo 3 = Jogador sem posicao\n" << endl;
	for (int i = 0; i < 3; i++) {

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

			goleiro = new Goleiro(alt, pes, ida, numRg, def, ref, sal);
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

			atacante = new Atacante(alt, pes, ida, numRg, vel, fin, dri);
			hash.insertItem(atacante);
		}
		else {					//Jogador sem posicao definida
			cout << "\n--------------------" << endl;
			jogadores = new Jogadores(alt, pes, ida, numRg);
			hash.insertItem(jogadores);
		}

	}
	

  	cout << "LISTA:" << endl;
	hash.print(); // Mostrar a lista com os elementos já na Hash
	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;
	
	//deletando os elementos da hash
	hash.deleteItem(goleiro);
	hash.deleteItem(atacante);
	hash.deleteItem(jogadores);
	
    cout << "Jogadores deletados" << endl;
	cout << "------------------------------" << endl;

  	cout << "LISTA:" << endl;
	hash.print();
	cout << "------------------------------" << endl;

	return 0;
}