////��������
////�־��� �����Ϳ��� �������� �����͸� ã�Ƽ� ����
//#include<iostream>
//using namespace std;
//
//
//void selectSort(int arr[]) {
//	int idx=0;
//	for (int i = 0; i < 8; i++) {
//		int min = arr[i];		
//		for (int j = i+1; j < 8; j++) {
//			if (min > arr[j]) {
//				min = arr[j];
//				idx = j;
//			}
//		}
//		int temp = arr[i];
//		arr[i] = arr[idx];
//		arr[idx] = temp;
//	}
//}
//
//int main() {
//	int arr[8] = { 8,6,5,3,1,2,7,4 };
//	selectSort(arr);
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i]<<" ";
//	}
//}