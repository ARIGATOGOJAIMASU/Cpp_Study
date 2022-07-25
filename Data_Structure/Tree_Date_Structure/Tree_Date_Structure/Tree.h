#pragma once

class CTree
{
public:
	CTree();
	~CTree();

public: //기능 함수
	void AddNode(CNode* ptr);
	void SearchNode(int ptr, CNode* present);
	void ReMoveNode();

public:
	CNode* GetRoot();

private:
	CNode* m_RootNode = nullptr;
};