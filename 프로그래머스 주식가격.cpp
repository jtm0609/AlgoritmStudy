//����: �ֽİ��� LV2
//https://rile1036.tistory.com/14 ������
#include <cstring>
#include <vector>
#include<queue>
#include<iostream>
using namespace std;
vector<int> solution(vector<int> prices) {
	vector<int> answer;
	for (int i = 0; i < prices.size(); i++) {
		int price = 0;
		for (int j = i + 1; j < prices.size(); j++) {
			//���������ʴ´ٸ�
			if (prices[j] >= prices[i]) price++;
			//��������
			else {
				price++;
				break;
			}
		}
		answer.push_back(price);
	}
	
	return answer;
}