#pragma once

class CNode
{
public:
	CNode() {};
	CNode(int value) { m_iValue = value; };
	~CNode() {};

public:
	void Setkey(int key) { m_iKey = key; };
	void SetValue(int value) { m_iValue = value; };
	void SetNext(CNode* ptr) { NextCNode = ptr; };

public:
	int GetKey() { return m_iKey; };
	int Getvalue() { return m_iValue; };
	CNode* NextNode() { return NextCNode; };

private:
	int m_iKey = 0;
	int m_iValue = 0;
	CNode* NextCNode = nullptr;
};