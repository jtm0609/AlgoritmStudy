////삽입정렬
////기준을 정하고, 그앞의 원소들과 비교하여 삽입할위치를 지정한후
////원소를 뒤로옮기고 지정된자리에 삽입하는 알고리즘
////즉, 앞의 원소보단 크고 뒤의원소보단 작은위치에 삽입하는 정렬알고리즘
//
//#include<iostream>
//using namespace std;
//
//void insertSort(int arr[]) {
//	int key = 0;
//	for (int i = 1; i < 8; i++) {
//		key = arr[i];
//		int idx = i-1;		
//		//기준위치보다 현재인덱스가 크다면
//		while (idx>=0 && arr[idx]>key) {
//			arr[idx + 1] = arr[idx];
//			idx--;
//		}
//		//앞의 원소보다 크고 뒤의원소보다 작은위치를 찾았다면
//		//그위치에 key값 삽입
//		arr[idx + 1] = key;
//	}
//}
//int main() {
//	int arr[8] = { 8,6,5,3,1,2,7,4 };
//	insertSort(arr);
//	for (int i = 0; i < 8; i++) {
//		cout << arr[i] << " ";
//	}
//}