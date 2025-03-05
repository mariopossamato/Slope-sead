#include "sead/ListNode.hpp"

namespace sead {

void ListNode::insertBack_(ListNode* pNode) {
  ListNode* pNext = this->m_pNext;
  this->m_pNext = pNode;
  pNode->m_pPrev = this;
  pNode->m_pNext = pNext;
  if (pNext) {
    pNext->m_pPrev = pNode;
  }
}

void ListNode::insertFront_(ListNode* pNode) {
  ListNode* pPrev = this->m_pPrev;
  this->m_pPrev = pNode;
  pNode->m_pPrev = pPrev;
  pNode->m_pNext = this;
  if (pPrev) {
    pPrev->m_pNext = pNode;
  }
}

void ListNode::erase_() {
  if (this->m_pPrev) {
    this->m_pPrev->m_pNext = this->m_pNext;
  }
  if (this->m_pNext) {
    this->m_pNext->m_pPrev = this->m_pPrev;
  }
  this->m_pPrev = nullptr;
  this->m_pNext = nullptr;
}

} // namespace sead
