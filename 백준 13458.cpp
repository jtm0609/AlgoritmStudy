////문제: 시험감독
////알고리즘: 수학
////시간 복잡도 O(n^2)으로 구현했었는데 시간초과로 오답 
////+ int형의 최댓값은 2147483647로 약20억이므로,
////+감독관의 총수가 백만*백만= 즉 1조가될때는, 정수범위를 초과하여 오답이남
////+따라서 최대값인 9백경인 long long값을 사용
//
////https://velog.io/@skyepodium/%EB%B0%B1%EC%A4%80-13458-%EC%8B%9C%ED%97%98-%EA%B0%90%EB%8F%85 참조해서 O(n)으로 풀었음
//#include<iostream>
//using namespace std;
//
//int n; //시험장
//int a; //응시자수
//int b, c; //총감독관, 부감독관의 감시할수있는 응시자수,
//long long super, support; //총감독관, 부감독관의 수
//int testers[1000000];
//long long ans;
//
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> testers[i];
//	}
//	cin >> b >> c;
//
//
//	for (int i = 0; i < n; i++) {
//		//총감독관의 수
//		testers[i] = testers[i] - b;
//		super++;
//
//		//부감독관의 수
//		if (testers[i] > 0) {
//			support += testers[i] / c;
//
//			//나머지가 있으면 부 감독관을 한명더 늘림
//			if (testers[i] % c > 0)
//				support++;
//		}
//	}
//
//	
//
//	ans = super + support; //총감독관+ 부감독관
//	cout << ans;
//
//}