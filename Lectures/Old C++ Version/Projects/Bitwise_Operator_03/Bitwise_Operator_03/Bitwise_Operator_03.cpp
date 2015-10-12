#include <bitset>
#include <iostream>

int main() {
	// �ǿ����ڸ� �غ�
	unsigned char a;
	a = 178;

	// ����Ʈ ������ ����
	unsigned char a_rshift, a_lshift;
	a_rshift = a >> 3;	// ������ ����Ʈ ����(3ĭ ����Ʈ)
	a_lshift = a << 3;	// ���� ����Ʈ ����(3ĭ ����Ʈ)

	// ����� ���(��ȣ �ȿ��� 10������ ���)
	std::cout << "a      = " << std::bitset<8>(a) << "(" << (unsigned int)a << ")" << std::endl;
	std::cout << "a >> 3 = " << std::bitset<8>(a_rshift) << "(" << (unsigned int)a_rshift << ")" << std::endl;
	std::cout << "a << 3 = " << std::bitset<8>(a_lshift) << "(" << (unsigned int)a_lshift << ")" << std::endl;

	return 0;
}