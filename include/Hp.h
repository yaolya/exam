#pragma once
#include <iostream>
#include "storage.h"
#include "error.h"

class Hp {
private:
	Storage<int> m_n; //нормальный вектор
	Storage<int> m_x0; //точка,через которую проходит гиперплоскость	
	int m_size;
public:
	Hp(Storage<int>& n, Storage<int>& x0, int razm);

	double distance(Storage<int>& point);

	void position(Storage<int>& point);

	bool operator==(Hp& hp2);

	int getSizeofHp() { return --m_size; }
};
