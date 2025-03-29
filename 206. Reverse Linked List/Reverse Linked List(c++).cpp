/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prev =NULL; //con trỏ trỏ đến node trước đó (ban đầu là NULL)
    ListNode* curr=head; //con trỏ trỏ đến node hiện tại (ban đầu là head)
//curr luôn chạy trước prev 1 đơn vị
 //None 1->2->3->None thì Node đầu là prev, 1 (head) là curr
        while (curr !=NULL){
            ListNode* tmp =curr->next; //lưu lại node kế 
//(NULL)1->2->3->NULL , thì tmp trỏ vào 2->3->NULL
            curr->next=prev; //đảo ngược hướng liên kết
//1->NULL
            prev=curr; //di chuyển prev lên node hiện tại
//prev thì trỏ vào 1->NULL
            curr=tmp; //tiếp tục với node tiếp theo
        } 
        return prev; //trả về node đầu tiên của danh sách đảo ngược
  //1->2->3->node khi curr chạy đến node thì prev chạy đến 3, ta in ra 3 là phần tử đầu tiên của danh sách đảo ngược
    }
};
//Độ phức tạp O(n) duyệt ds 1 lần
