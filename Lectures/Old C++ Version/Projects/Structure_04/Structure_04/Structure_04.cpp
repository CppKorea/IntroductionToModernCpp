#include <iostream>

int main() {
	// ����ü�� ���� : 2���������� ���� ���� ����
	struct Point {
		int x;	// x ��ǥ
		int y;	// y ��ǥ
	};

	// ���� �� ���� ���� �Ǵ� ����
	Point pt1 = {30, 50};
	Point pt2;

	// pt1�� pt2�� ����
	pt2 = pt1;

	// ��� ���� ���
	std::cout << "pt1 = (" << pt1.x << ", " << pt1.y << ")" << std::endl;
	std::cout << "pt2 = (" << pt2.x << ", " << pt2.y << ")" << std::endl;

	return 0;
}