////����: ��ݱװ� LV2
////�˰���: �ؽ�(MAP)+���ڿ�
////Ǯ��: 
////1. ���ο���� ��ε�� ������ #�κ��� ġȯ�Ͽ� ����
////2. ���ǿ� ��ε� ���ԵǾ��ִٸ� vec�� ����
////3. vec������ִ°��߿� ���ǽð��� ��Ÿ� �켱���� �ϵ�, ���ٸ� ���� �� ���� ����
////���ڿ� ġȯ�ϴ¹��� https://eunchanee.tistory.com/79 ��������
//
//#include <string>
//#include <vector>
//#include<iostream>
//#include<map>
//
//using namespace std;
//
////����1. �Ǻ������� ���ٸ� ���Ǳ��̰� ����� ����
////����2. ���Ǳ��̵����ٸ� ������ ���°��� ����
////�ֿ��ذ��: #�κ��� ġȯ
//struct music {
//	int time;
//	string name;
//	string info;
//};
////#�κ��� ġȯ�ϴ��Լ�
//string change(string in, map<string, char> s) {
//	string out = "";
//	for (int i = 0; i < in.size(); i++) {
//		if (in[i + 1] == '#') {
//			out += s[in.substr(i, 2)];
//			i++;
//		}
//		else out += in[i];
//	}
//	return out;
//}
//string solution(string m, vector<string> musicinfos) {
//	string answer = "";
//	vector<music> vec;
//	vector<music> ans;
//	map<string, char> s;
//	s["C#"] = 'Q';
//	s["D#"] = 'W';
//	s["F#"] = 'R';
//	s["G#"] = 'T';
//	s["A#"] = 'Y';
//
//	string melody = change(m, s);
//	for (int i = 0; i < musicinfos.size(); i++) {
//		int idx = musicinfos[i].find(',', 0);
//		int temp;
//		string start, end, name, info;
//		for (int j = 0; j < 4; j++) {
//
//			if (j == 0) start = musicinfos[i].substr(0, idx);
//			if (j == 1) end = musicinfos[i].substr(temp + 1, idx - temp - 1);
//			if (j == 2) name = musicinfos[i].substr(temp + 1, idx - temp - 1);
//			if (j == 3) info = musicinfos[i].substr(temp + 1, idx - temp - 1);
//			temp = idx;
//			idx = musicinfos[i].find(',', idx + 1);
//
//		}
//		int start_hour = stoi(start.substr(0, 2)); int start_minute = stoi(start.substr(3, 2));
//		int end_hour = stoi(end.substr(0, 2)); int end_minute = stoi(end.substr(3, 2));
//		int time = (end_hour * 60 + end_minute) - (start_hour * 60 + start_minute);
//
//		vec.push_back({ time,name,change(info,s) });
//	}
//
//	for (int i = 0; i < vec.size(); i++) {
//		string info;
//		//���ǽð��� ��ª�ٸ� ���ǽð���ŭ ���
//		if (vec[i].time < vec[i].info.length()) {
//			for (int j = 0; j < vec[i].time; j++) {
//				info += vec[i].info[j];
//			}
//		}
//		//���ǽð��� ����ٸ� �ݺ����
//		else {
//			int length = vec[i].info.length();
//			for (int j = 0; j < vec[i].time; j++) {
//				info += vec[i].info[j % length];
//			}
//		}
//
//		//ã���� push
//		if (info.find(melody) != -1)
//			ans.push_back(vec[i]);
//
//
//	}
//	int time = ans[0].time;
//	int ans_idx = 0;
//	if (ans.size() == 0)
//		return "(None)";
//	for (int i = 0; i < ans.size() - 1; i++) {
//		if (time < ans[i + 1].time) {
//			time = ans[i + 1].time;
//			ans_idx = i + 1;
//		}
//	}
//
//	answer = ans[ans_idx].name;
//	return answer;
//}