#pragma once

class CNode
{
public:
	CNode();
	CNode(int value);
	~CNode();

public:
	int GetValue();
	CNode* GetLeft();
	CNode* GetRight();
	CNode* GetParent();

public:
	void SetLeft(CNode* ptr);
	void SetRight(CNode* ptr);
	void SetParent(CNode* ptr);

private:
	int m_iValue;
	CNode* m_Parent = nullptr;
	CNode* m_Left = nullptr;
	CNode* m_Right = nullptr;
	
};