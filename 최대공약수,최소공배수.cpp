//
//
//int gcd(int a, int b) {
//	//a가 b보다 커야함
//	if (b > a) {
//		int temp = b;
//		b = a;
//		a = temp;
//	}
//
//	//유클리드 호제법
//	//b가 0인순간 a를 gcd로판단후 리턴
//	while (b != 0) {
//		int n = a % b;
//		a = b;
//		b = n;
//	}
//	//최대공약수 리턴
//	return a;
//
//}
//
////최소공배수 구하기
////a*b를 최대공약수로 나누어줌
//int lcm(int a, int b) {
//	return a * b / gcd(a, b);
//}