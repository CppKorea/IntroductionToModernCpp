#include <iostream>

int main() {
	// �� ���� �����͸� �ʱ�ȭ
	short sArrays[10];
	short* ps1 = &sArrays[3];
	short* ps2 = &sArrays[7];

	// ����� ���
	std::cout << "ps1 = " << ps1 << std::endl;
	std::cout << "ps2 = " << ps2 << std::endl;
	std::cout << "ps2 - ps1 = " << ps2 - ps1 << std::endl;

	return 0;
}