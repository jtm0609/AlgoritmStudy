
//�̺�Ž�� �˰����� �迭�� ���ĵǾ��ִٴ� �����Ͽ� Ž���ϴ°���.
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
		cout << result + 1 << "��°���� ã�ҽ��ϴ�.";

}