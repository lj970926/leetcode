/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int carry = 0;
		ListNode *p = l1, *q = l2;
		while (p->next && q->next) {
			p->val += (q->val + carry);
			carry = p->val / 10;
			p->val = p->val % 10;
			p = p->next;
			q = q->next;
		}
		if (p->next == NULL)
			p->next = q->next;
		p->val += (q->val + carry);
		carry = p->val / 10;
		p->val = p->val % 10;
		q = p;
		p = p->next;
		while (carry && p) {
			p->val += carry;
			carry = p->val / 10;
			p->val = p->val % 10;
			p = p->next;
			q = q->next;
		}
		if (carry) {
			q->next = new ListNode(carry);
		}
		return l1;
	}

};
