//#include<iostream>
//using namespace std;
//
//int fibo(int num) {
//	long long* arr = new long long[num + 1];
//	arr[0] = 0;
//	arr[1] = 1;
//	for (int i = 2; i <= num; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//
//	long long result = arr[num];
//	delete arr;
//	return result;
//}
//int main() {
//	int n;
//	cin >> n;
//	cout<<fibo(n);
//}