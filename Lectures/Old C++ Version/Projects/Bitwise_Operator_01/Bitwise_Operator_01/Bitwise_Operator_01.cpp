#include <bitset>		// bitset ����� ���� �غ� �۾�
#include <iostream>

int main() {
	// �پ��� Ÿ���� ������ �غ�
	char c = 1;
	short int si = 2;
	int i = 4;

	// ���� 2������ 10������ ���
	std::cout << "c = " << std::bitset<8>(c) << "(" << (int)c << ")" << std::endl;
	std::cout << "si = " << std::bitset<16>(si) << "(" << si << ")" << std::endl;
	std::cout << "i = " << std::bitset<32>(i) << "(" << i << ")" << std::endl;

	return 0;
}