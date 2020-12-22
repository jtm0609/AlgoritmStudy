////병합정렬
////항상 반으로나눈다
//#include<iostream>
//using namespace std;
//int sorted[8]; //정렬된 배열
//void merge(int arr[], int start, int mid, int end) {
//	int i = start;
//	int j = mid + 1;
//	int k = start;
//	
//	//반으로 나눈 두개의부분을 비교하며, 작은 순서대로 배열에 삽입
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
//	//남은 데이터 삽입
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
//	//정렬된 배열삽입
//	for (int t = start; t <= end; t++) {
//		arr[t] = sorted[t];
//	}
//}
//
////반으로 나누기
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