#include <iostream>
#include <cmath>

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
	// ��Ÿ����� ������ ���
	double distance;
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	// ����� ��ȯ
	return distance;
}