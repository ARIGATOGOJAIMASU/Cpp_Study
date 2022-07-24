#include <iostream>
#include <list>
#include <vector>
#include "Hash.h"
#include"Node.h"

using namespace std;

int main()
{
	int iChoice;

	cout << "Hash의 key값을 입력해주세요";
	cin >> iChoice;

	CHash Hash(iChoice);

	while (1)
	{
		cout << "원하시는 기능을 선택해주세요 1.노드추가 2.노드 삭제 3.검색 4.출력 5.종료 = ";

		cin >> iChoice;

		switch (iChoice)
		{
		case 1:
			cout << "추가하실 노드의 Value를 입력해주세요 = ";
			cin >> iChoice;

			Hash.AddNode(new CNode(iChoice));

			cout << endl;
			break;
		case 2:
			cout << "삭제하실 node의 Value를 입력해주세요 = ";
			cin >> iChoice;

			Hash.ReMoveNode(iChoice);

			cout << endl;
			break;
		case 3:
			cout << "검색하실 Node의 Value의 값을 입력해주세요";
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