#include <iostream>

int main() {
	// ������ ���� ���� ������ ����
	int i = 10;
	float f = 10.0f;

	// �� ������ ������ ���� ����
	float i_div_4, f_div_4;
	i_div_4 = i / 4;
	f_div_4 = f / 4;

	// ��� ���
	std::cout << "i = " << i << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "i / 4 = " << i_div_4 << std::endl;
	std::cout << "f / 4 = " << f_div_4 << std::endl;

	return 0;
}