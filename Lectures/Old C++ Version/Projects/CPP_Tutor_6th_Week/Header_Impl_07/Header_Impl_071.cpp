struct Point {
	int x, y;
};

int main() {
	// �� ���� ����
	Point a = {100, 100};
	Point b = {200, 200};

	// �Լ��� ȣ��
	double dist;
	dist = Distance(a, b);

	return 0;
} 