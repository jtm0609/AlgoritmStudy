////퀵정렬
////피벗을 기준으로 좌축,우측에서 정렬을한다.
////분할정복
//
//#include<iostream>
//using namespace std;
//void quickSort(int data[], int start, int end) {
//	//원소가 1개인경우 
//	if (start >= end) return;
//
//	int pivot = start; //피벗은 첫번째 원소
//	int i = start + 1; int j = end;
//	int temp;
//
//	while (i <= j) { //엇갈릴 때까지 반복
//		//피벗값보다 큰값을 만날때까지
//		while (i <= end && data[i] <= data[pivot]) { 
//			i++;
//		}
//		//피벗값보다 작은값을 만날때까지
//		while (j > start && data[j] > data[pivot]) {
//			j--;
//		}
//		if (i > j) { //현재 엇갈린 상태라면 피벗값과 교체
//			temp = data[j];
//			data[j] = data[pivot];
//			data[pivot] = temp;
//		}
//		else { //엇갈리지 않았다면 i와 j 교체
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