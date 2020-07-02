#include "Hp.h"

	Hp::Hp(Storage<int>& n, Storage<int>& x0, int razm) {
		m_n = n;
		m_x0 = x0;
		m_size = razm - 1;
	}

	double Hp::distance(Storage<int>& point) {
		if (point.size() != m_size) throw Error();
		int sum = 0;
		for (int i = 0; i < m_size; ++i) {
			sum += pow((point[i] - m_x0[i]) * m_n[i], 2);
		}
		int lengthp_x0 = sqrt(sum);
		sum = 0;
		for (int i = 0; i < m_size; ++i) {
			sum += pow(m_n[i], 2);
		}
		int lengthn = sqrt(sum);
		return lengthp_x0 / lengthn;
	}

	bool Hp::operator==(Hp& hp2) {
		bool b = true;
		if (m_size == hp2.m_size) {
			for (int i = 0; i < m_size; ++i) {
				if (!(m_x0[i] == hp2.m_x0[i] && (m_n[i] % hp2.m_n[i] == 0 || hp2.m_n[i] % m_n[i] == 0))) b = false;
			}
		}
		else {
			int min_size = 0;
			(m_size < hp2.m_size) ? min_size = m_size : min_size = hp2.m_size;
			for (int i = 0; i < min_size; ++i) {
				if (!(m_x0[i] == hp2.m_x0[i] && (m_n[i] % hp2.m_n[i] == 0 || hp2.m_n[i] % m_n[i] == 0))) b = false;
			}
		}
		return b;
	}
