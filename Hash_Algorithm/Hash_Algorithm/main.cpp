#include <iostream>
#include <list>
#include <vector>
#include "Hash.h"
#include"Node.h"

using namespace std;

int main()
{
	int iChoice;

	cout << "Hash�� key���� �Է����ּ���";
	cin >> iChoice;

	CHash Hash(iChoice);

	while (1)
	{
		cout << "���Ͻô� ����� �������ּ��� 1.����߰� 2.��� ���� 3.�˻� 4.��� 5.���� = ";

		cin >> iChoice;

		switch (iChoice)
		{
		case 1:
			cout << "�߰��Ͻ� ����� Value�� �Է����ּ��� = ";
			cin >> iChoice;

			Hash.AddNode(new CNode(iChoice));

			cout << endl;
			break;
		case 2:
			cout << "�����Ͻ� node�� Value�� �Է����ּ��� = ";
			cin >> iChoice;

			Hash.ReMoveNode(iChoice);

			cout << endl;
			break;
		case 3:
			cout << "�˻��Ͻ� Node�� Value�� ���� �Է����ּ���";
			cin >> iChoice;

			Hash.Seach(iChoice);

			cout << endl;
			break;
		case 4:
			Hash.Print();

			cout << endl;
			break;
		case 5:
			break;
		}
	}
}