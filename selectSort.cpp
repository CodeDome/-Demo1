#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include <algorithm>
using namespace std;
//ð������
void selectSort(int arr[], int n) {
	//����[i,n)����Ԫ�ص���Сֵ
	for (int i = 0; i < n; i++) {
		//�����i��λ���ϵ�Ԫ����С
		int minIndex = i;
		//�ӵ�i��Ԫ�ص���һ��Ԫ�ؿ�ʼ������֮�ԱȲ�����λ��
		for (int j = i + 1; j < n; j++) {
			//��������СԪ�ضԱ�
			if (arr[j] < arr[minIndex]) {
				//������Сλ�õ�Ԫ��
				minIndex = j;
			}
		}
		//����λ��
		swap(arr[i], arr[minIndex]);

	}
}
int main() {
	int arr[10] = { 99,20,50,10,88,35,66,89,100,77 };
	selectSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}
