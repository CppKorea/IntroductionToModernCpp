int main() {
	// �迭�� ũ�⸦ const ������ ����
	const unsigned int arraySize = 100;

	// �迭�� ����
	char characters[arraySize] = {0};

	// �迭�� 1 ~ arraySize�� ���� ����
	for (int i = 0; i < arraySize; i++) {
		characters[i] = i + 1;
	}

	return 0;
}