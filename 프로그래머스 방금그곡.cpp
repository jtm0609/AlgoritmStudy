////문제: 방금그곡 LV2
////알고리즘: 해쉬(MAP)+문자열
////풀이: 
////1. 새로운변수에 멜로디와 음악을 #부분을 치환하여 저장
////2. 음악에 멜로디가 포함되어있다면 vec에 저장
////3. vec저장되있는것중에 음악시간이 긴거를 우선으로 하되, 같다면 먼저 온 값을 리턴
////문자열 치환하는법만 https://eunchanee.tistory.com/79 참고했음
//
//#include <string>
//#include <vector>
//#include<iostream>
//#include<map>
//
//using namespace std;
//
////조건1. 악보정보와 같다면 음악길이가 긴것을 리턴
////조건2. 음악길이도같다면 더먼저 들어온것을 리턴
////주요해결법: #부분을 치환
//struct music {
//	int time;
//	string name;
//	string info;
//};
////#부분을 치환하는함수
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
//		//음악시간이 더짧다면 음악시간만큼 재생
//		if (vec[i].time < vec[i].info.length()) {
//			for (int j = 0; j < vec[i].time; j++) {
//				info += vec[i].info[j];
//			}
//		}
//		//음악시간이 더길다면 반복재생
//		else {
//			int length = vec[i].info.length();
//			for (int j = 0; j < vec[i].time; j++) {
//				info += vec[i].info[j % length];
//			}
//		}
//
//		//찾으면 push
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