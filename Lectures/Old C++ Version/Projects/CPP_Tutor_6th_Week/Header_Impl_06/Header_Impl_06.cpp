struct Point {
	int x, y;
};

double Distance(const Point& pt1, const Point& pt2) {
	// �� �Լ��� ������ ����
	return 0.0f;
}

int main() {
	// �� ���� ����
	Point a = {100, 100};
	Point b = {200, 200};

	// �Լ��� ȣ��
	double dist;
	dist = Distance(a, b);

	return 0;
} 