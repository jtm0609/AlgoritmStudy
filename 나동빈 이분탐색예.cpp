
//이분탐색 알고리즘은 배열이 정렬되어있다는 전제하에 탐색하는것임.
#include<iostream>
#define NUMBER 12
using namespace std;
int a[] = { 1,3,5,7,9,11,14,15,18,19,25,28 };

const int target = 7;


int search(int start, int end, int tar) {
	if (start > end)
		return -1;
	int mid = (start + end) / 2;
	if (a[mid] > tar)
		return search(start, mid - 1, tar);
	else if (a[mid] < tar)
		return search(mid + 1, end, tar);
	else if (a[mid] == tar)
		return mid;
}

int main() {
	int result = search(0, NUMBER - 1, target);
	if (result != -1)
		cout << result + 1 << "번째에서 찾았습니다.";

}