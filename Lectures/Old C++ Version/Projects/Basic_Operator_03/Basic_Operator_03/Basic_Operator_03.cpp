#include <iostream>

int main() {
	// �ǿ����ڸ� ����
	int a = 3;
	int b = 5;

	// ���� ������ ���
	bool b1, b2, b3, b4, b5, b6;
	b1 = a > b;		// a�� b���� ũ��
	b2 = a >= b;	// a�� b���� ũ�ų� ����
	b3 = a < b;		// a�� b���� �۴�
	b4 = a <= b;	// a�� b���� �۰ų� ����
	b5 = a == b;	// a�� b�� ����
	b6 = a != b;	// a�� b�� ���� �ʴ�

	// bool Ÿ���� ���� ���ڷ� ����ϰ� ����
	std::cout << std::boolalpha;

	// ����� ���
	std::cout << a << " > " << b << " : " << b1 << std::endl;
	std::cout << a << " >= " << b << " : " << b2 << std::endl;
	std::cout << a << " < " << b << " : " << b3 << std::endl;
	std::cout << a << " <= " << b << " : " << b4 << std::endl;
	std::cout << a << " == " << b << " : " << b5 << std::endl;
	std::cout << a << " != " << b << " : " << b6 << std::endl;

	return 0;
}