#include <bitset>
#include <iostream>

int main() {
	// �ǿ����ڸ� �غ�
	unsigned char a, b;
	a = 178;
	b = 113;

	// ��Ʈ ���� �� ������ ����
	unsigned char c1, c2, c3, c4;
	c1 = a & b;		// AND
	c2 = a | b;		// OR
	c3 = a ^ b;		// XOR
	c4 = ~a;		// NOT

	// ����� ���(��ȣ �ȿ��� 10������ ���)
	std::cout << "a     = " << std::bitset<8>(a) << "(" << (unsigned int)a << ")" << std::endl;
	std::cout << "b     = " << std::bitset<8>(b) << "(" << (unsigned int)b << ")" << std::endl;
	std::cout << "a & b = " << std::bitset<8>(c1) << "(" << (unsigned int)c1 << ")" << std::endl;
	std::cout << "a | b = " << std::bitset<8>(c2) << "(" << (unsigned int)c2 << ")" << std::endl;
	std::cout << "a ^ b = " << std::bitset<8>(c3) << "(" << (unsigned int)c3 << ")" << std::endl;
	std::cout << "~a    = " << std::bitset<8>(c4) << "(" << (unsigned int)c4 << ")" << std::endl;

	return 0;
}