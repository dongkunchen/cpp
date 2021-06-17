#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>
#include <ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2


class Worker
{
public:
	/*Worker(string name, int salary)
	{
		this->m_Name = name;
		this->m_Salary = salary;
	}*/
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "���u";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 40000 + 10000;
		v.push_back(worker);
	}
}

//���u����
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGourp(multimap<int,Worker>&m)
{
	cout << "���e����: " << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end()&& index < count;pos++,index++)
	{
		cout << "�m�W: " << pos->second.m_Name << " �u��: " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "���N����: " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count;pos++, index++)
	{
		cout << "�m�W: " << pos->second.m_Name << " �u��: " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "��o����: " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count;pos++, index++)
	{
		cout << "�m�W: " << pos->second.m_Name << " �u��: " << pos->second.m_Salary << endl;
	}

}

int main() {

	srand((unsigned int)time(NULL));

	vector<Worker>vWorker;
	createWorker(vWorker);

	//���u����
	multimap<int,Worker>mWorker;
	setGroup(vWorker,mWorker);

	//������ܭ��u
	showWorkerByGourp(mWorker);

	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end();it++)
	{
		cout << "�m�W: " << it->m_Name << " �u��: " << it->m_Salary << endl;
	}*/

	system("pause");
	
	return 0;
}