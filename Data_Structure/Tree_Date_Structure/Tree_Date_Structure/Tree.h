#pragma once

class CTree
{
public:
	CTree();
	~CTree();

public: //��� �Լ�
	void AddNode(CNode* ptr);
	void SearchNode(int ptr, CNode* present);
	void ReMoveNode();

public:
	CNode* GetRoot();

private:
	CNode* m_RootNode = nullptr;
};