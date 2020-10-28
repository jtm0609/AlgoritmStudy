//(코드업)그리디알고리즘 2001

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//double compare(vector<double> arr);
//int main() {
//	vector<double> pasta(3);
//	vector<double> juice(2);
//	double pasta_min;
//	double juice_min;
//	double minAmount;
//
//	cin >> pasta[0];
//	cin >> pasta[1];
//	cin >> pasta[2];
//	cin >> juice[0];
//	cin >> juice[1];
//
//	pasta_min = compare(pasta);
//	juice_min = compare(juice);
//	minAmount = (pasta_min + juice_min) + (pasta_min + juice_min)*0.1;
//
//	cout.setf(ios::fixed);
//	cout.precision(1);
//	cout << minAmount << endl;
//
//}
//
//double compare(vector<double> arr) {
//	double minValue = arr[0];
//	for (int i = 1; i<arr.size(); i++) {
//		minValue = min(minValue, arr[i]);
//	}
//	return minValue;
//
//}