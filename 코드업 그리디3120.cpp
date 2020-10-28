//틀림
//코드업 그리디 3120
//#include<iostream>
//using namespace std;
//int main() {
//
//	int curTemp;
//	int objectiveTemp;
//	int result;
//	int c;
//
//	cin >> curTemp;
//	cin >> objectiveTemp;
//	result = abs(objectiveTemp - curTemp) / 10;
//
//	//10으로 나눈 나머지
//	c = abs(objectiveTemp - curTemp) % 10;
//	if (c == 1 || c == 5)
//		result += 1;
//	else if (c == 2 || c == 4 ||c==6|| c == 9)
//		result += 2;
//	else if (c == 3 || c == 7 || c == 8)
//		result += 3;
//
//	cout << result << endl;
//
//
//	
//
//}

//1이 되기위해서는 +1 (1회)
//2이 되기위해서는 +1 +1 (2회)
//3이 되기 위해서는 +1 +1 +1, +5 -1 -1 (3회)
//4가 되기 위해서는 +5 -1 (2회)
//5가 되기 위해서는 +5 (1회)
//6이 되기 위해서는 +5 +1 (2회)
//7이 되기 위해서는 +5 +1 +1 (3회)
//8이 뒤기 위해서는 +10 -1 -1 (3회)
//9이 되기 위해서느 +10 -1 (2회)
