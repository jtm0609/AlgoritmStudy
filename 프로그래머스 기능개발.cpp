////���� : ��ɰ��� LV2
////�˰���: ����/ť
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//	while (!progresses.empty()) {
//
//		//������ ���ǵ常ŭ ����
//		for (int i = 0; i < progresses.size(); i++) {
//			progresses[i] += speeds[i];
//		}
//
//		int cnt = 0;
//		for (int i = 0; i < progresses.size(); i++) {
//			//������ 100�� �Ǿ����� Ȯ��
//			if (progresses[i] >= 100) {
//				cnt++;
//				progresses.erase(progresses.begin() + i);
//				speeds.erase(speeds.begin() + i);
//				i--;
//			}
//			//�ƴ϶�� Ż��
//			else
//				break;
//		}
//		//�������Ǿ��ٸ� �߰�
//		if (cnt != 0)
//			answer.push_back(cnt);
//	}
//
//	return answer;
//}