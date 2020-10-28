//틀림 효율성에서 틀림
#include <string>
#include <vector>
#include<iostream>
using namespace std;

string ReplaceAll(string& str, const string& from, const string& to) {
	size_t start_pos = 0; //string처음부터 검사
	while ((start_pos = str.find(from, start_pos)) != std::string::npos)  //from을 찾을 수 없을 때까지
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // 중복검사를 피하고 from.length() > to.length()인 경우를 위해서
	}
	return str;
}

vector<int> solution(vector<string> info, vector<string> query) {
	vector<int> answer;
	vector<vector<string>> info_vec(50000); //지원자정보 벡터
	vector<vector<string>> query_str_vec(50000); //쿼리정보 벡터
	//[i][0] : 언어 
	//[i][1] : 직군
	//[i][2] : 경력
	//[i][3] : 소울푸드
	//[i][4] : 점수

	//지원자정보저장
	for (int i = 0; i < info.size(); i++) {
		string info_str = info[i];
		string str;
		for (int j = 0; j < info_str.size(); j++) {
			//공백 나오기전 string(지원 사항)을 저장
			if (info_str[j] == ' ') {
				info_vec[i].push_back(str);
				str = "";
				continue;
			}

			str += info_str[j];



		}
		//점수를 저장
		info_vec[i].push_back(str);
	}


	//query읽고, 지원자정보랑비교
	for (int i = 0; i < query.size(); i++) {
		string query_str = query[i];
		string str;
		//query 벡터
	   //치환작업
		ReplaceAll(query_str, " and ", " ");
		for (int j = 0; j < query_str.size(); j++) {

			if (query_str[j] == ' ') {
				query_str_vec[i].push_back(str);
				str = "";
				continue;
			}
			str += query_str[j];

		}
		query_str_vec[i].push_back(str);





	}



	int count = 0;
	//지원자 정보랑 비교
	for (int a = 0; a < query.size(); a++) {
		for (int i = 0; i < info.size(); i++) {

			if ((query_str_vec[a][0] == info_vec[i][0]) || (query_str_vec[a][0] == "-"))
				if ((query_str_vec[a][1] == info_vec[i][1]) || (query_str_vec[a][1] == "-"))
					if ((query_str_vec[a][2] == info_vec[i][2]) || (query_str_vec[a][2] == "-"))
						if ((query_str_vec[a][3] == info_vec[i][3]) || (query_str_vec[a][3] == "-"))
							if (stoi(query_str_vec[a][4]) <= stoi(info_vec[i][4])) {
								count++;

							}

		}
		answer.push_back(count);
		count = 0;
	}





	return answer;
}
