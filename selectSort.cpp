#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include <algorithm>
using namespace std;
//冒泡排序
void selectSort(int arr[], int n) {
	//查找[i,n)区间元素的最小值
	for (int i = 0; i < n; i++) {
		//假设第i个位置上的元素最小
		int minIndex = i;
		//从第i个元素的下一个元素开始查找与之对比并交换位置
		for (int j = i + 1; j < n; j++) {
			//与假设的最小元素对比
			if (arr[j] < arr[minIndex]) {
				//更新最小位置的元素
				minIndex = j;
			}
		}
		//交换位置
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
