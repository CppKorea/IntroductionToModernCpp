#include <iostream>

void Dog() {
	std::cout << "I'm a Dog.\n";
}

void Cat() {
	std::cout << "I'm a Cat.\n";
}

int main() {
	// �Լ��� �����͸� ����
	void (*p)();

	// Dog() �Լ��� ����Ű�� �� �Ŀ� ȣ��
	p = &Dog;
	(*p)();

	// Cat() �Լ��� ����Ű�� �� �Ŀ� ȣ��
	p = &Cat;
	(*p)();

	return 0;
}