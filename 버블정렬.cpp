////버블정렬
////서로 인접한 두 원소를 검사하여 정렬하는 알고리즘
//#include<iostream>
//using namespace std;
//
//void bubble_sort(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size - i-1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[8] = { 8,6,5,3,1,2,7,4 };
//	int size = sizeof(arr) / sizeof(int);
//	bubble_sort(arr,size);
//	
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i] << " ";
//	}
//}