#include <iostream>
#include "Hp.h"

/*3. Реализовать класс "гиперплоскость в n-мерном пространстве", с
возможностями проверки совпадения двух гиперплоскостей, а также
проверки для заданной точки нахождения на гиперплоскости, или в
положительном (отрицательном) полупространстве относительно нее.*/

void testCreation() {
	Storage<int> nv1;
	Storage<int> point;
	int n = 2;
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
	point.add(2);
	point.add(4);

	Hp hp1(nv1, point, n);

	std::cout << hp1.getSizeofHp() << std::endl;
}

void testEqual() {
	Storage<int> nv1;
	Storage<int> nv2;
	Storage<int> nv3;
	Storage<int> p;
	Storage<int> point;
	int n = 2;
	nv1.add(1);
	nv1.add(2);
	nv2.add(2);
	nv2.add(4);
	nv3.add(2);
	nv3.add(7);
	p.add(2);
	p.add(4);
	point.add(2);
	point.add(4);

	Hp hp1(nv1, p, n);
	Hp hp2(nv2, p, n);
	Hp hp3(nv3, p, n);
	std::cout << "Equal? " << (hp1 == hp2) << std::endl;
	std::cout << "Equal? " << (hp1 == hp3) << std::endl;
}

void testDistance() {
	Storage<int> nv;
	Storage<int> p;
	Storage<int> point;
	Storage<int> point2;
	int n = 2;
	nv.add(1);
	nv.add(2);
	p.add(2);
	p.add(4);
	point.add(2);
	point.add(4);
	point2.add(3);
	point2.add(8);

	Hp hp(nv, p, n);

	std::cout << "Distance " << hp.distance(point) << std::endl;
	std::cout << "Distance " << hp.distance(point2) << std::endl;
}

void testPosition() {
	Storage<int> nv;
	Storage<int> p;
	Storage<int> point;
	Storage<int> point2;
	int n = 2;
	nv.add(1);
	nv.add(2);
	p.add(2);
	p.add(4);
	point.add(2);
	point.add(4);
	point2.add(3);
	point2.add(8);

	Hp hp(nv, p, n);

	hp.position(point);
	hp.position(point2);
}

int main() {

	testCreation();
	testDistance();
	testEqual();
	testPosition();

	return 0;
}
