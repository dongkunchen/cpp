#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <ctime>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;
};

void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "選手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		/*cout << "選手: " << it->m_Name << " ,得分:" << it->m_Score << endl;
		for(deque<int>::iterator dit = d.begin(); dit != d.end();dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;*/
		//排序
		sort(d.begin(), d.end());
		//去除最高最低分
		d.pop_back();
		d.pop_front();
		
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end();dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end();it++)
	{
		cout << "姓名: " << it->m_Name << " ,平均: " << it->m_Score << endl;
	}
}


int main7() {

	//隨機種子
	srand((unsigned int)time(NULL));

	vector<Person>v;
	creatPerson(v);

	/*for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "姓名: " << (*it).m_Name << " ,分數: " << (*it).m_Score << endl;
	}*/

	setScore(v);

	showScore(v);

	system("pause");

	return 0;
}