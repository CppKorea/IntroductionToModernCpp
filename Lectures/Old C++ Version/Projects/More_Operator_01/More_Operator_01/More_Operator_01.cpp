#include <iostream>

int main() {
	// 4���� ������ ������ ������ ä��
	int A, B, C, D;
	A = B = C = D = 3;

	// �پ��ϰ� ++, -- �����ڸ� ���
	int ppA, Bpp, mmC, Dmm;
	ppA = ++A; // 4
	Bpp = B++; // 3
	mmC = --C; // 2
	Dmm = D--; // 3

	// ����� ���
	std::cout << "A, B, C, D : " << A << ", " << B << ", " << C << ", " << D << std::endl;
	std::cout << "++A, B++, --C, D-- : " << ppA << ", " << Bpp << ", " << mmC << ", " << Dmm << std::endl;

	return 0;
}