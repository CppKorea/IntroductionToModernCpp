int main() {
	// �迭�� ����
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// �� ������ ���� �� ��� ����
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		array[i] *= 2;
	}

	return 0;
}