#include <iostream>

struct Point {
	int x, y;
};

// �� ���� �Ÿ��� ���ϴ� �Լ��� ����
double Distance(Point p1, Point p2);

int main() {
	// �� ���� ����
	Point a = {0, 0};
	Point b = {3, 4};

	// �� ���� �Ÿ��� ����
	double dist_a_b = Distance(a, b);

	// ����� ���
	std::cout << "(" << a.x << ", " << a.y << ") �� ";
	std::cout << "(" << b.x << ", " << b.y << ") �� �Ÿ� = " << dist_a_b << "\n";

	return 0;
}

double Distance(Point p1, Point p2) {
	std::cout << "p1 = (" << p1.x << ", " << p1.y << ")\n";
	std::cout << "p2 = (" << p2.x << ", " << p2.y << ")\n";

	return 0.0f;
}