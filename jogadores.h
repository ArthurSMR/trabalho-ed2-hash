#ifndef JOGADORES_H
#define JOGADORES_H

#include <string>

/*
Autores do c�digo:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

class Jogadores {

private:
	float peso;
protected:
	float altura;
	int idade;
	int tipoJogador;
	int rg;

public:
	Jogadores(int tipo = 0, float alt = 0.0, float pes = 0.0, int idade = 0, int numRg = 0);

	float getAltura() const;
	float getPeso() const;
	int getIdade() const;
	int getRg() const;
	int getTipo() const;

	void setIdade(int ida);
	void setAltura(float alt);
	void setPeso(float pes);
	void setRg(int numRg);
	void print();
	
	Jogadores(const Jogadores &obj);
	int virtual getHash(int max_number) const;
};


#endif // !JOGADORES_H
