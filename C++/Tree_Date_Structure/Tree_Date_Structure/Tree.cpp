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

	if (ptr == nullptr)//obj ����ó��
	{
		cout << "��ü����";
		return;
	}

	if (m_RootNode == nullptr)//ó�� �����Ҵ��
	{
		m_RootNode = ptr;
		return;
	}

	while (1)//Add�� �����ϴ� ���� ���� ����.
	{
		if (CPresentNode->GetValue() > ptr->GetValue())//PresentNode�� Value�� �� Ŭ��(�������� �̵�)
		{
			if (CPresentNode->GetLeft() == nullptr)//���� ��尡 ��������� �ڸ��Ҵ�
			{
				ptr->SetParent(CPresentNode);
				CPresentNode->SetLeft(ptr);
				return;
			}
			else//��� ���� ������ ��Node�� Present�� ����
			{
				CPresentNode = CPresentNode->GetLeft();
			}
		}
		else//PresentNode�� Value�� �� ������(���������� �̵�)
		{
			if (CPresentNode->GetRight() == nullptr)//������ ��尡 ��������� �ڸ��Ҵ�
			{
				ptr->SetParent(CPresentNode);
				CPresentNode->SetRight(ptr);
				return;
			}
			else//��� ���� ������ ��Node�� Present�� ����
			{
				CPresentNode = CPresentNode->GetRight();
			}
		}
	}
}

void CTree::SearchNode(int ptr,CNode* present)//����Լ��� ���� ��;��� �� �� �ִ� ����� �����غ���
{
	if (present->GetValue() == ptr)
	{
		cout << "�˻��Ͻ� Value�� �ֽ��ϴ�.";
	}

	SearchNode(ptr, present->GetLeft());//Left SubRoute�� �˻�
	SearchNode(ptr, present->GetRight())//Right SubRoute�� �˻�
}

void CTree::ReMoveNode()
{
}

CNode* CTree::GetRoot()
{
	return m_RootNode;
}
