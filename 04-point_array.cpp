#include <iostream>
using namespace std;

int main4() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "�Ĥ@�Ӥ�����: " << arr[0] << endl;

	int* p = arr;//���q�ܶq�n�[&�~��X�ݦa�}

	cout << "�Q�Ϋ��w�X�ݲĤ@�Ӥ���: " << *p << endl;

	p++;//�����w�����|�Ӧr�`

	cout << "�Q�Ϋ��w�X�ݲĤG�Ӥ���: " << *p << endl;

	//�Q�Ϋ��w�M������
	cout << "�Q�Ϋ��w�M���Ʋ�" << endl;

	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	system("pause");

	return 0;
}