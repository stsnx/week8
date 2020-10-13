#include<iostream>
#include<algorithm>
using namespace std;
struct info {
	int score;
	char name[60];
}student[100];
bool sortin(info x, info y)
{
	return x.score > y.score;
}
void printsort(int n)
{
	sort(student, student + n, sortin);
	for (int i = 0; i < n; i++)
	{
		if (student[i].score > 100 || student[i].score < 0)
			cout << student[i].name << " error" << endl;
		else
			cout << student[i].name << ' ' << student[i].score << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> student[i].name;
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			int temp;
			cin >> temp;
			sum += temp;
		}
		student[i].score = sum;
		if (student[i].score > 100 || student[i].score < 0)
		{
			student[i].score = -1;
		}
	}
	printsort(n);
	return 0;
}
