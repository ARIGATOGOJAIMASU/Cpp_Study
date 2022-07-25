#pragma once
#include <list>
#include <vector>
#include "Node.h"

using namespace std;

class CHash
{
public:
	CHash();
	CHash(int key);
	~CHash();

public:
	void AddNode(CNode* ptr);
	void ReMoveNode(int tmep);
	void Seach(int ptr);
	void Print();
	void DeleteList(CNode* ptr);

private:
	int m_iKey = 0;
	vector<CNode*> m_Hashlist;
};