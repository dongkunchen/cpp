#include<iostream>
using namespace std;

int main12(){

	int arr[5] = { 300,400,200,250,175 };
	
	int max = 0;

	for (int i = 0; i < 5; i++) 
	{
		if (arr[i] > max) 
		{
			max = arr[i];
		}

	}
	cout << "³Ì¤j­È¬O: " << max << endl;

	system("pause");

	return 0;
}