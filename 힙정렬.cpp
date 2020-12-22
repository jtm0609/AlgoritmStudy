////힙정렬
////완전 이진트리를 기본으로 하는 정렬방식
////최대힙구성-> 루트의값을 마지막요소와 바꾼후 힙사이즈를 줄임
//#include<iostream>
//using namespace std;
//int number = 9;
//
//// 힙을 구성
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
//// 크기를 줄여가며 반복적으로 힙을 구성
//void heapSort(int arr[]) {
//	for (int i = number - 1; i >= 0; i--) {
//		//루트 노드와 마지막 노드 swap
//		int temp = arr[0];
//		arr[0] = arr[i]; 
//		arr[i] = temp;
//
//		int root = 0;
//		int c = 0;
//		do {
//			c = 2 * root + 1;
//			// 자식 중에 더 큰 값을 찾기 
//			if (c < i - 1 && arr[c] < arr[c + 1]) {
//				c++;
//			}
//			// 루트보다 자식이 크다면 교환 
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
//	// 결과 출력 
//	for(int i = 0; i < number; i++) {
//		printf("%d ", arr[i]);
//	}
//}