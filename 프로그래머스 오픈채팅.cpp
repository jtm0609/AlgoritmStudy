////����: ����ä�ù�
////�˰���: �ؽ�
////https://greenapple16.tistory.com/71 ������
//
//
////Ǯ��: 1. ���������� ä�ù濡 ���� ���̵� ���Ϳ������ϰ�, �ʶ��� ���̵�� �г����� �����Ѵ�.
////		2. ���Դ���, �������� ���� ���°��� ���Ϳ� �����Ѵ�.
////		3. �������Ͼ�� id �������� �ʿ� value��(�г���)�� ��������ش�.
////		4. for���� �̿��� ����Ѵ�.
//
//#include <string>
//#include <vector>
//#include<sstream>
//#include<map>
//using namespace std;
//
//map<string, string> m;
//vector<string> status_v;
//vector<string> uid_v;
//vector<string> solution(vector<string> record) {
//	vector<string> answer;
//	for (int i = 0; i < record.size(); i++) {
//		string info = record[i];
//		string action,id,name;
//		//���ڿ� �и�
//		stringstream ss(info);
//		ss >> action;
//		if(action=="Enter"){
//			ss >> id;
//			ss >> name;
//			status_v.push_back("���� ���Խ��ϴ�.");
//			uid_v.push_back(id);
//			m[id] = name;
//		}
//		else if (action == "Leave") {
//			ss >> id;
//			uid_v.push_back(id);
//			status_v.push_back("���� �������ϴ�.");
//
//		}
//		else if (action == "Change") {
//			ss >> id;
//			ss >> name;
//			//�г��Ӻ���
//			m[id] = name;
//
//		}
//	}
//
//	for (int i = 0; i < status_v.size(); i++) {
//		string id = uid_v[i];
//		string name = m[id];
//		answer.push_back(name + status_v[i]);
//	}
//
//	return answer;
//}