//Ʋ�� ȿ�������� Ʋ��
#include <string>
#include <vector>
#include<iostream>
using namespace std;

string ReplaceAll(string& str, const string& from, const string& to) {
	size_t start_pos = 0; //stringó������ �˻�
	while ((start_pos = str.find(from, start_pos)) != std::string::npos)  //from�� ã�� �� ���� ������
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // �ߺ��˻縦 ���ϰ� from.length() > to.length()�� ��츦 ���ؼ�
	}
	return str;
}

vector<int> solution(vector<string> info, vector<string> query) {
	vector<int> answer;
	vector<vector<string>> info_vec(50000); //���������� ����
	vector<vector<string>> query_str_vec(50000); //�������� ����
	//[i][0] : ��� 
	//[i][1] : ����
	//[i][2] : ���
	//[i][3] : �ҿ�Ǫ��
	//[i][4] : ����

	//��������������
	for (int i = 0; i < info.size(); i++) {
		string info_str = info[i];
		string str;
		for (int j = 0; j < info_str.size(); j++) {
			//���� �������� string(���� ����)�� ����
			if (info_str[j] == ' ') {
				info_vec[i].push_back(str);
				str = "";
				continue;
			}

			str += info_str[j];



		}
		//������ ����
		info_vec[i].push_back(str);
	}


	//query�а�, ��������������
	for (int i = 0; i < query.size(); i++) {
		string query_str = query[i];
		string str;
		//query ����
	   //ġȯ�۾�
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
	//������ ������ ��
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
