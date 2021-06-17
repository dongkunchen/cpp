#include<iostream>
using namespace std;

int main11() {

	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//數組長度(總字節/1個字節)-1最後下標位置

	while (start < end)
	{
		//實現元素互換
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
	//打印結果
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}