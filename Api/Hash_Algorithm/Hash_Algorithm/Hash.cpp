#include <iostream>
#include "Hash.h"

using namespace std;

CHash::CHash()
{
}


CHash::CHash(int key)
{
	for (int i = 0; i < key; ++i)
	{
		m_Hashlist.push_back(nullptr);
	}

	m_iKey = key;
}

CHash::~CHash()
{
	for (size_t i = 0; i < m_Hashlist.size(); ++i)
	{
		if (m_Hashlist[i] != nullptr)
		{
			DeleteList(m_Hashlist[i]->NextNode());
			delete m_Hashlist[i];
			m_Hashlist[i] = nullptr;
		}
	}
}

void CHash::AddNode(CNode* ptr)
{
	if (ptr == nullptr)
	{
		return;
	}

	int iKey = ptr->Getvalue() % m_iKey;

	ptr->Setkey(iKey);

	if (m_Hashlist[iKey] == nullptr)
	{
		m_Hashlist[iKey] = ptr;
	}
	else
	{
		CNode* Temp = m_Hashlist[iKey];

		while (1)
		{
			if (Temp->NextNode() == nullptr)
			{
				Temp->SetNext(ptr);
				return;
			}

			Temp = Temp->NextNode();
		}
	}
}

void CHash::ReMoveNode(int temp)
{
	int iKey = temp % m_iKey;
	CNode* Temp;

	Temp = m_Hashlist[iKey];

	if (m_Hashlist[iKey]->Getvalue() == temp)//���� ����� ù��°�϶�
	{
		m_Hashlist[iKey] = m_Hashlist[iKey]->NextNode();

		Temp->SetNext(nullptr);
		delete Temp;
		Temp = nullptr;
	}
	else
	{
		while (Temp->NextNode() != nullptr)
		{
			if (Temp->NextNode()->Getvalue() == temp)
			{
				CNode* DeleteNode;
				DeleteNode = Temp->NextNode();
				Temp->SetNext(Temp->NextNode()->NextNode());

				delete DeleteNode;
				DeleteNode = nullptr;
				cout << "�����Ϸ� \n";
				return;
			}

			Temp = Temp->NextNode();
		}

		//value���� ������ 
		cout << "���Ͻô� ���� �����ϴ�.\n";
	}
}

void CHash::Seach(int ptr)
{
	int iKey = ptr % m_iKey;
	int iCount = 0;
	CNode* Temp;

	Temp = m_Hashlist[iKey];

	while (Temp != nullptr)
	{
		++iCount;

		if (Temp->Getvalue() == ptr)
		{
			cout << ptr << "�� " << iKey << "�� Ű���̸� " << iCount << "��°�� �ֽ��ϴ�.\n";
			
			Temp = m_Hashlist[iKey];

			/// <summary>
			/// ////////////////
			//�� ���
			cout << "key�� = " << iKey << ":";
			while (Temp != nullptr)
			{
				cout << " <= " << Temp->Getvalue();
				Temp = Temp->NextNode();
			}
			return;
		}

		Temp = Temp->NextNode();
	}

	//value���� ������ 
	cout << "���Ͻô� ���� �����ϴ�.\n";
}

void CHash::Print()
{
	CNode* Temp;

	for (int i = 0; i < m_iKey; ++i)
	{
		Temp = m_Hashlist[i];

		cout << i << " : ";

		while (Temp != nullptr)
		{
			cout << " <= " << Temp->Getvalue();
			Temp = Temp->NextNode();
		}

		if (m_Hashlist[i] == nullptr)
		{
			cout << "�����ϴ�.";
		}

		cout << endl;
	}
}

void CHash::DeleteList(CNode* ptr)
{
	if (ptr != nullptr)
	{
		DeleteList(ptr->NextNode());
	}

	delete ptr->NextNode();
}
