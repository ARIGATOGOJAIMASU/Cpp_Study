#include "stafx.h"

int main()
{
	int iChoice;
	CTree TreeDateStructure;


	while (1)
	{
		cout << "tree�˰����Դϴ�. ���Ͻô� �޴��� �����Ͻÿ� 1.Add  2.Search  3.ReMove  4.Exit = ";
		cin >> iChoice;

		switch (iChoice)
		{
		case 1:
			cout << "Value���� �Է����ּ��� = ";
			cin >> iChoice;

			TreeDateStructure.AddNode(new CNode(iChoice));

			cout << endl;
			break;
		case 2:
			cout << "ã���� Value���� �Է����ּ��� = ";
			cin >> iChoice;

			TreeDateStructure.SearchNode(iChoice, TreeDateStructure.GetRoot());

			cout << endl;
			break;
		case 3:
			break;
		case 4:
			exit(1);
			break;
		}
	}
}