#include <iostream>

int main() {
	// �޸𸮸� �Ҵ�
	short* p = new short[100];

	// p�� ������ �ּ� ���� Ȯ��
	std::cout << "p = " << p << "\n";

	// �޸𸮸� ����
	delete[] p;
	p = NULL;

	// p�� ������ �ּ� ���� Ȯ��
	std::cout << "p = " << p << "\n";

	// �޸𸮸� ����
	delete[] p;
	p = NULL;

	return 0;
}