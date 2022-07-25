#include "stafx.h"

int main()
{
	int iChoice;
	CTree TreeDateStructure;


	while (1)
	{
		cout << "tree알고리즘입니다. 원하시는 메뉴를 선택하시오 1.Add  2.Search  3.ReMove  4.Exit = ";
		cin >> iChoice;

		switch (iChoice)
		{
		case 1:
			cout << "Value값을 입력해주세요 = ";
			cin >> iChoice;

			TreeDateStructure.AddNode(new CNode(iChoice));

			cout << endl;
			break;
		case 2:
			cout << "찾을시 Value값을 입력해주세요 = ";
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