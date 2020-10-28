////문제: 오픈채팅방
////알고리즘: 해쉬
////https://greenapple16.tistory.com/71 참고함
//
//
////풀이: 1. 순차적으로 채팅방에 들어온 아이디를 벡터에저장하고, 맵또한 아이디와 닉네임을 저장한다.
////		2. 들어왔는지, 나갔는지 또한 상태값도 벡터에 저장한다.
////		3. 변경이일어나면 id 값을통해 맵에 value값(닉네임)을 변경시켜준다.
////		4. for문을 이용해 출력한다.
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
//		//문자열 분리
//		stringstream ss(info);
//		ss >> action;
//		if(action=="Enter"){
//			ss >> id;
//			ss >> name;
//			status_v.push_back("님이 들어왔습니다.");
//			uid_v.push_back(id);
//			m[id] = name;
//		}
//		else if (action == "Leave") {
//			ss >> id;
//			uid_v.push_back(id);
//			status_v.push_back("님이 나갔습니다.");
//
//		}
//		else if (action == "Change") {
//			ss >> id;
//			ss >> name;
//			//닉네임변경
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