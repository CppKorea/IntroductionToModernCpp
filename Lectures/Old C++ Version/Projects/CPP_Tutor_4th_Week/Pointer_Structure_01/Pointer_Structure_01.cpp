#include <iostream>

// �簢���� ������ ���� ����ü
struct Rectangle {
	int x, y;
	int width, height;
};

int main() {
	// �簢�� ����ü ������ ����
	Rectangle rc = {100, 100, 50, 50};

	// �����Ͱ� �� ������ ����Ű�� ����
	Rectangle* p = &rc;

	// ����ü�� ����� ����
	(*p).x = 200;
	p->y = 250;

	// ����ü�� ������ ���
	std::cout << "rc = (" << rc.x << ", " << rc.y << ", ";
	std::cout << rc.width << ", " << rc.height << ")" << std::endl;

	return 0;
}