#include "sead/ListNode.hpp"

void sead::ListNode::insertBack_(sead::ListNode* pListNode) {
  this->m_pNext = pListNode;
  pListNode->m_pPrev = this;
  pListNode->m_pNext = this->m_pNext;
  if (this->m_pNext) {
    this->m_pNext->m_pPrev = pListNode;
  }
}

void sead::ListNode::insertFront_(sead::ListNode* pListNode) {
  this->m_pPrev = pListNode;
  pListNode->m_pPrev = this->m_pPrev;
  pListNode->m_pNext = this;
  if (this->m_pPrev) {
    this->m_pPrev->m_pNext = pListNode;
  }
}

void sead::ListNode::erase_() {
  if (this->m_pPrev) {
    this->m_pPrev->m_pNext = this->m_pNext;
  }
  if (this->m_pNext) {
    this->m_pNext->m_pPrev = this->m_pPrev;
  }
  this->m_pPrev = nullptr;
  this->m_pNext = nullptr;
}
