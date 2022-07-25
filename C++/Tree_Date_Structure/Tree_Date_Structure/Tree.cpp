#include "stafx.h"

CTree::CTree()
{
}

CTree::~CTree()
{
}

void CTree::AddNode(CNode* ptr)
{
	CNode* CPresentNode = m_RootNode;

	if (ptr == nullptr)//obj 예외처리
	{
		cout << "객체없음";
		return;
	}

	if (m_RootNode == nullptr)//처음 동적할당시
	{
		m_RootNode = ptr;
		return;
	}

	while (1)//Add가 실패하는 일은 절대 없다.
	{
		if (CPresentNode->GetValue() > ptr->GetValue())//PresentNode의 Value가 더 클시(왼쪽으로 이동)
		{
			if (CPresentNode->GetLeft() == nullptr)//왼쪽 노드가 비어있을시 자리할당
			{
				ptr->SetParent(CPresentNode);
				CPresentNode->SetLeft(ptr);
				return;
			}
			else//비어 있지 않을시 그Node를 Present로 설정
			{
				CPresentNode = CPresentNode->GetLeft();
			}
		}
		else//PresentNode의 Value가 더 작을시(오른쪽으로 이동)
		{
			if (CPresentNode->GetRight() == nullptr)//오른쪽 노드가 비어있을시 자리할당
			{
				ptr->SetParent(CPresentNode);
				CPresentNode->SetRight(ptr);
				return;
			}
			else//비어 있지 않을시 그Node를 Present로 설정
			{
				CPresentNode = CPresentNode->GetRight();
			}
		}
	}
}

void CTree::SearchNode(int ptr,CNode* present)//재귀함수로 구현 재귀없시 할 수 있는 방법도 생각해보자
{
	if (present->GetValue() == ptr)
	{
		cout << "검색하신 Value가 있습니다.";
	}

	SearchNode(ptr, present->GetLeft());//Left SubRoute로 검색
	SearchNode(ptr, present->GetRight())//Right SubRoute로 검색
}

void CTree::ReMoveNode()
{
}

CNode* CTree::GetRoot()
{
	return m_RootNode;
}
