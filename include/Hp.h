#pragma once
#include "storage.h"
#include <cmath>
#include "error.h"

class Hp {
private:
	Storage<int> m_n; //���������� ������
	Storage<int> m_x0; //�����,����� ������� �������� ��������������	
	int m_size;
public:
	Hp(Storage<int>& n, Storage<int>& x0, int razm);

	double distance(Storage<int>& point);

	bool operator==(Hp& hp2);


};