#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ranage 10000
int dd(int k);
int main()
{
	int sum;
	int m1[ranage] = { 0 };

	for (int i = 1; i <= ranage; i++) {
		sum = dd(i);
		m1[sum] = 1;
	}

	for (int j = 1; j <= ranage; j++) {
		if (m1[j] == 0) {
			printf("%d\n", j);
		}
	}

	system("pause");
	return 0;
}
int dd(int k)//°ª + °¢ ÀÚ¸´¼öº° µ¡¼À 
{
	int sum = k;//ÇÕ
	int n;//³ª¸ÓÁö

	while (k > 0) {
		n = k % 10;
		sum += n;
		k = k / 10;
	}

	return sum;
}
