#include <iostream>

int main() {
	// �� ���� ������ �迭�� ����
	char cArray[3] = {'A', 'B', 'C'};
	int iArray[4] = {100, 200, 300, 400};
	double dArray[5] = {0.1, 0.2, 0.3, 0.4, 0.5};

	// cArray�� ũ�⿡ ���� ����
	std::cout << "sizeof(cArray) = " << sizeof(cArray) << "(Bytes)" << std::endl;
	std::cout << "sizeof(cArray[0]) = " << sizeof(cArray[0]) << "(Bytes)" << std::endl;
	std::cout << "������ ���� = " << sizeof(cArray) / sizeof(cArray[0]) << std::endl << std::endl;

	// iArray�� ũ�⿡ ���� ����
	std::cout << "sizeof(iArray) = " << sizeof(iArray) << "(Bytes)" << std::endl;
	std::cout << "sizeof(iArray[0]) = " << sizeof(iArray[0]) << "(Bytes)" << std::endl;
	std::cout << "������ ���� = " << sizeof(iArray) / sizeof(iArray[0]) << std::endl << std::endl;

	// dArray�� ũ�⿡ ���� ����
	std::cout << "sizeof(dArray) = " << sizeof(dArray) << "(Bytes)" << std::endl;
	std::cout << "sizeof(dArray[0]) = " << sizeof(dArray[0]) << "(Bytes)" << std::endl;
	std::cout << "������ ���� = " << sizeof(dArray) / sizeof(dArray[0]) << std::endl << std::endl;

	return 0;
}