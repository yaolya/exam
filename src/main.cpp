#include <iostream>
#include "Hp.h"

/*3. Реализовать класс "гиперплоскость в n-мерном пространстве", с
возможностями проверки совпадения двух гиперплоскостей, а также
проверки для заданной точки нахождения на гиперплоскости, или в
положительном (отрицательном) полупространстве относительно нее.*/

void test() {
	Storage<int> nv1;
	Storage<int> nv2;
	Storage<int> p;
	Storage<int> point;
	int n = 3;
	//std::cin >> n;
	/*std::cout << "Normalny vector" << std::endl;
	for (int i = 0; i < n - 1; ++i) {
		std::cin >> nv[i];
	}
	std::cout << "Tochka" << std::endl;
	for (int i = 0; i < n - 1; ++i) {
		std::cin >> p[i];
	}*/
	nv1.add(1);
	nv1.add(2);
	nv1.add(2);
	nv1.add(4);
	p.add(2);
	p.add(4);
	point.add(2);
	point.add(4);

	Hp hp1(nv1, p,n);
	Hp hp2(nv2, p, n);
	//std::cout << (hp1 == hp2) << std::endl;
	std::cout << hp1.distance(point) << std::endl;
}

int main() {

	test();

	return 0;
}