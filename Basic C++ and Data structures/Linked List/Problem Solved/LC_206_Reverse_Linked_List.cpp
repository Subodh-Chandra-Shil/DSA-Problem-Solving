/**
 * @file        LC_206_Reverse_Linked_List.cpp
 * @author      Subodh Chandra Shil
 * @date        2023-06-19
 * @resources:  https://leetcode.com/problems/reverse-linked-list/
 *              https://youtu.be/BMfqGJTcoms
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/// Iterative and two pointer approach
/// TC: O(N), SC: O(1)
class Solution1
{
public:
    /// slow and fast pointer approach
    ListNode *reverseList(ListNode *head)
    {
        ListNode *result = nullptr, *temp = head;

        while (temp)
        {
            ListNode *remain = temp->next;
            temp->next = result;
            result = temp;
            temp = remain;
        }

        return result;
    }
};

class Solution2
{
public:
    void reverse(ListNode *&head, ListNode *it)
    {
        if (it->next == nullptr)
        {
            head = it;
            return;
        }

        reverse(head, it->next);
        it->next->next = it;
        it->next = nullptr;
    }

    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
            return head;

        reverse(head, head);

        return head;
    }
};