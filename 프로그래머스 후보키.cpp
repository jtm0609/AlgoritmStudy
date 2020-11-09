////문제: 프로그래머스 후보키 LV2
////알고리즘: 비트마스크 + 해시(map)
////이해하기 너무 어려웠음 
////https://www.youtube.com/watch?v=gCy00NeWag0 영상으로 이해하고 아래링크 참고했음
////참고: https://coding-insider.tistory.com/entry/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-2-%ED%9B%84%EB%B3%B4%ED%82%A4-CC-%E2%98%85%E2%98%85%E2%98%85
//
//#include <string>
//#include <vector>
//#include<map>
//
//using namespace std;
//vector<int> ans;
//
////유일성을 만족하는 벡터에서 최소성구하기
////ex){이름,전공}이 유일성을 만족한다면 {이름, 전공, 학년}은 최소성을만족x
//bool check_min(int bit) {
//	for (int i = 0; i < ans.size(); i++) {
//		if ((ans[i] & bit) == ans[i])
//			return false;
//	}
//	return true;
//}
//int solution(vector<vector<string>> relation) {
//	int answer = 0;
//	int row = relation.size(); //행의 개수
//	int col = relation[0].size(); //속성의개수
//
//	//<<유일설체크>>
//	//모든경우의수를 참고해야하므로, 속성의개수만큼 <<비트연산
//	//ex) 0000 {}, 0001 {학번}, 0010 {이름}, 0011 {학번,이름}
//	for (int i = 1; i < (1 << col); i++) {
//		map<string, int> check;
//		for (int j = 0; j < row; j++) {
//			string now;
//			//i의 각자릿수마다 일치하는것이 있는지 확인
//			for (int k = 0; k < col; k++) {
//				if (i & 1 << k) now += relation[j][k];
//			}
//			check[now] = 1;
//		}
//		//중복되는것이없고(유일성), 최소성을 만족한다면 push
//		if (check.size() == row && check_min(i)) {
//			ans.push_back(i);
//		}
//	}
//	return ans.size();
//}