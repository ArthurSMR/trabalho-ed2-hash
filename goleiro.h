#ifndef GOLEIRO_H
#define GOLEIRO_H

#include <string>
#include "jogadores.h"

/*
Autores do c�digo:
	Thales Loreto		224730
	Arthur Rodrigues	213315

*/

class Goleiro : public Jogadores {

private:
	int defesa;
	int reflexo;
	int salto;
public:

	Goleiro(float alt = 0.0, float pes = 0.0, int ida = 0, int numRg = 0, int def = 0, int ref = 0, int sal = 0);

	int getDefesa() const;
	int getReflexo() const;
	int getSalto() const;

	void setDefesa(int def);
	void setReflexo(int ref);
	void setSalto(int sal);
	void print();

	Goleiro(const Goleiro &obj);
	int getHash(int max_number) const;
};

#endif // !GOLEIRO_H
