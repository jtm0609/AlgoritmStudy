////������
////���� ����Ʈ���� �⺻���� �ϴ� ���Ĺ��
////�ִ�������-> ��Ʈ�ǰ��� ��������ҿ� �ٲ��� ������� ����
//#include<iostream>
//using namespace std;
//int number = 9;
//
//// ���� ����
//void heapfify(int arr[]) {
//	for (int i = 1; i < number; i++) {
//		int c = i;
//		do {
//			int root = (c - 1) / 2;
//			if (arr[root] < arr[c]) {
//				int temp = arr[root];
//				arr[root] = arr[c];
//				arr[c] = temp;
//			}
//			c = root;
//		} while (c != 0);
//	}
//}
//// ũ�⸦ �ٿ����� �ݺ������� ���� ����
//void heapSort(int arr[]) {
//	for (int i = number - 1; i >= 0; i--) {
//		//��Ʈ ���� ������ ��� swap
//		int temp = arr[0];
//		arr[0] = arr[i]; 
//		arr[i] = temp;
//
//		int root = 0;
//		int c = 0;
//		do {
//			c = 2 * root + 1;
//			// �ڽ� �߿� �� ū ���� ã�� 
//			if (c < i - 1 && arr[c] < arr[c + 1]) {
//				c++;
//			}
//			// ��Ʈ���� �ڽ��� ũ�ٸ� ��ȯ 
//			if (c < i && arr[root] < arr[c]) {
//				temp = arr[root];
//				arr[root] = arr[c];
//				arr[c] = temp;
//			}
//			root = c;
//		} while (c < i);
//	}
//}
//int main(void) {
//	int arr[9] = { 7, 6, 5, 8, 3, 5, 9, 1, 6 };
//	heapfify(arr);
//	heapSort(arr);
//
//	// ��� ��� 
//	for(int i = 0; i < number; i++) {
//		printf("%d ", arr[i]);
//	}
//}