#ifndef ATACANTE_H
#define ATACANTE_H

#include <string>
#include "jogadores.h"

/*
Autores do c�digo:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

class Atacante : public Jogadores {

private:
	int velocidade;
	int finalizacao;
	int drible;

public:
	Atacante(int tipo = 0, float alt = 0.0, float pes = 0.0, int ida = 0, int numRg = 0, int vel = 0, int fin = 0, int dri = 0);

	int getVelocidade() const;
	int getFinalizacao() const;
	int getDrible() const;

	void setVelocidade(int vel);
	void setFinalizacao(int fin);
	void setDrible(int dri);

	Atacante(const Atacante &obj);
	int getHash(int max_number) const;
};


#endif // !ATACANTE_H
