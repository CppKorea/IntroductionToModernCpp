#include <iostream>

struct Dizzy {
	int id;		// ����ü �������� ���� ������ ��
	Dizzy* p;	// Dizzy ����ü�� ����Ű�� ������
};

int main() {
	// Dizzy ��ü�� 3�� �����, ���θ� ����Ű�� ����
	Dizzy a, b, c;

	a.id = 1;
	a.p = &b;
	b.id = 2;
	b.p = &c;
	c.id = 3;
	c.p = &a;

	// a�� ����ؼ� a, b, c�� ��� ����
	std::cout << "a.id = " << a.id << std::endl;
	std::cout << "b.id = " << a.p->id << std::endl;
	std::cout << "c.id = " << a.p->p->id << std::endl;
	std::cout << "a.id = " << a.p->p->p->id << "(again)" << std::endl;

	return 0;
}