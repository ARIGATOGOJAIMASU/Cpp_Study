#include "stafx.h"

CNode::CNode()
{
	m_iValue = 0;
}

CNode::CNode(int value)
{
	m_iValue = value;
}

CNode::~CNode()
{
	if (m_Parent != nullptr)
	{
		m_Parent = nullptr;
	}

	if (m_Left != nullptr)
	{
		m_Left = nullptr;
	}

	if (m_Right != nullptr)
	{
		m_Right = nullptr;
	}
}

int CNode::GetValue()
{
	return m_iValue;
}

CNode* CNode::GetLeft()
{
	return m_Left;
}

CNode* CNode::GetRight()
{
	return m_Right;
}

CNode* CNode::GetParent()
{
	return m_Parent;
}

void CNode::SetLeft(CNode* ptr)
{
	m_Left = ptr;
}

void CNode::SetRight(CNode* ptr)
{
	m_Right = ptr;
}

void CNode::SetParent(CNode* ptr)
{
	m_Parent = ptr;
}
