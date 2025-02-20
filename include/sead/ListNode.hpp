#ifndef SEAD_LISTNODE_HPP
#define SEAD_LISTNODE_HPP

namespace sead {

class ListNode {
  void insertBack_(ListNode* pListNode);
  void insertFront_(ListNode* pListNode);
  void erase_();
  ListNode* m_pPrev = nullptr;
  ListNode* m_pNext = nullptr;
};

} // namespace sead

#endif // SEAD_LISTNODE_HPP
