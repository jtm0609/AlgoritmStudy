////��������
////�׻� �����γ�����
//#include<iostream>
//using namespace std;
//int sorted[8]; //���ĵ� �迭
//void merge(int arr[], int start, int mid, int end) {
//	int i = start;
//	int j = mid + 1;
//	int k = start;
//	
//	//������ ���� �ΰ��Ǻκ��� ���ϸ�, ���� ������� �迭�� ����
//	while (i <= mid && j <= end) {
//		if (arr[i] <= arr[j]) {
//			sorted[k] = arr[i];
//			i++;
//		}
//		else {
//			sorted[k] = arr[j];
//			j++;
//		}
//		k++;
//	}
//
//	//���� ������ ����
//	if (i > mid) {
//		for (int t = j; t <= end; t++) {
//			sorted[k] = arr[t];
//			k++;
//		}
//	}
//	else {
//		for (int t = i; t <= mid; t++) {
//			sorted[k] = arr[t];
//			k++;
//		}
//	}
//
//	//���ĵ� �迭����
//	for (int t = start; t <= end; t++) {
//		arr[t] = sorted[t];
//	}
//}
//
////������ ������
//void mergeSort(int arr[], int start, int end) {
//	if (start < end) {
//		int mid = (start + end) / 2;
//		mergeSort(arr, start, mid);
//		mergeSort(arr, mid + 1, end);
//		merge(arr, start, mid, end);
//	}
//}
//int main() {
//	int arr[8] = { 8,6,5,3,1,2,7,4 };
//	mergeSort(arr, 0, 7);
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i] << " ";
//	}
//}