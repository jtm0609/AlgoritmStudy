////������
////�ǹ��� �������� ����,�������� �������Ѵ�.
////��������
//
//#include<iostream>
//using namespace std;
//void quickSort(int data[], int start, int end) {
//	//���Ұ� 1���ΰ�� 
//	if (start >= end) return;
//
//	int pivot = start; //�ǹ��� ù��° ����
//	int i = start + 1; int j = end;
//	int temp;
//
//	while (i <= j) { //������ ������ �ݺ�
//		//�ǹ������� ū���� ����������
//		while (i <= end && data[i] <= data[pivot]) { 
//			i++;
//		}
//		//�ǹ������� �������� ����������
//		while (j > start && data[j] > data[pivot]) {
//			j--;
//		}
//		if (i > j) { //���� ������ ���¶�� �ǹ����� ��ü
//			temp = data[j];
//			data[j] = data[pivot];
//			data[pivot] = temp;
//		}
//		else { //�������� �ʾҴٸ� i�� j ��ü
//			temp = data[i];
//			data[i] = data[j];
//			data[j] = temp;
//		}
//
//	}
//
//	quickSort(data, start, j - 1);
//	quickSort(data, j + 1, end);
//}
//
//int main() {
//	int arr[8] = { 8,6,5,3,1,2,7,4 };
//	quickSort(arr,0,7);
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i] << " ";
//	}
//}