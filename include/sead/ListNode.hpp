#ifndef SEAD_LISTNODE_HPP
#define SEAD_LISTNODE_HPP

namespace sead {

class ListNode {
  void insertBack_(ListNode* pNode /* node */);
  void insertFront_(ListNode* pNode /* node */);
  void erase_();
  ListNode* m_pPrev /* mPrev */ = nullptr;
  ListNode* m_pNext /* mNext */ = nullptr;
};

} // namespace sead

#endif // SEAD_LISTNODE_HPP
