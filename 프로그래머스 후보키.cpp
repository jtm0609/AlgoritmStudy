////����: ���α׷��ӽ� �ĺ�Ű LV2
////�˰���: ��Ʈ����ũ + �ؽ�(map)
////�����ϱ� �ʹ� ������� 
////https://www.youtube.com/watch?v=gCy00NeWag0 �������� �����ϰ� �Ʒ���ũ ��������
////����: https://coding-insider.tistory.com/entry/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-2-%ED%9B%84%EB%B3%B4%ED%82%A4-CC-%E2%98%85%E2%98%85%E2%98%85
//
//#include <string>
//#include <vector>
//#include<map>
//
//using namespace std;
//vector<int> ans;
//
////���ϼ��� �����ϴ� ���Ϳ��� �ּҼ����ϱ�
////ex){�̸�,����}�� ���ϼ��� �����Ѵٸ� {�̸�, ����, �г�}�� �ּҼ�������x
//bool check_min(int bit) {
//	for (int i = 0; i < ans.size(); i++) {
//		if ((ans[i] & bit) == ans[i])
//			return false;
//	}
//	return true;
//}
//int solution(vector<vector<string>> relation) {
//	int answer = 0;
//	int row = relation.size(); //���� ����
//	int col = relation[0].size(); //�Ӽ��ǰ���
//
//	//<<���ϼ�üũ>>
//	//������Ǽ��� �����ؾ��ϹǷ�, �Ӽ��ǰ�����ŭ <<��Ʈ����
//	//ex) 0000 {}, 0001 {�й�}, 0010 {�̸�}, 0011 {�й�,�̸�}
//	for (int i = 1; i < (1 << col); i++) {
//		map<string, int> check;
//		for (int j = 0; j < row; j++) {
//			string now;
//			//i�� ���ڸ������� ��ġ�ϴ°��� �ִ��� Ȯ��
//			for (int k = 0; k < col; k++) {
//				if (i & 1 << k) now += relation[j][k];
//			}
//			check[now] = 1;
//		}
//		//�ߺ��Ǵ°��̾���(���ϼ�), �ּҼ��� �����Ѵٸ� push
//		if (check.size() == row && check_min(i)) {
//			ans.push_back(i);
//		}
//	}
//	return ans.size();
//}