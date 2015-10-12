#include <iostream>

int main() {
	// ���� ����
	int a, b, c, d;
	a = 1;
	b = 2;
	c = 4;
	d = 3;

	std::cout << std::boolalpha;

	// AND�� ��� : Short-Circuit Evaluation ����
	bool b1;
	b1 = (a > b) && (b = 10);
	std::cout << "b1 = " << b1 << ", b = " << b << std::endl;

	// AND�� ��� : Short-Circuit Evaluation ������
	bool b2;
	b2 = (a < b) && (b = 10);
	std::cout << "b2 = " << b2 << ", b = " << b << std::endl;

	// OR�� ��� : Short-Circuit Evaluation ����
	bool b3;
	b3 = (c > d) | (c = 100);
	std::cout << "b3 = " << b3 << ", c = " << c << std::endl;

	// OR�� ��� : Short-Circuit Evaluation ������
	bool b4;
	b4 = (c < d) || (c = 100);
	std::cout << "b4 = " << b4 << ", c = " << c << std::endl;

	return 0;
}