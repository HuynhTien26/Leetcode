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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* DS1 =new ListNode(); //tạo 1 node để quản lý ds kết quả
        ListNode* cur=DS1; //con trỏ hiện tại để tạo 1 danh sách mới
        int carry=0; //biến lưu phần dư khi cộng 2 số
/*VD: 9+1=10, ghi 0, carry=1 
2+8+carry(1)=11, ghi 1, carry=1 */
        while (l1 !=NULL || l2 !=NULL ||carry){ //lặp khi l1, l2 còn số hoặc carry còn nhớ
            int sum=carry; //khởi tạo tổng=carry
            if(l1){ //nếu l1 chưa hết
                sum+=l1->val; //cộng giá trị của node hiện tại trong l1 cho tổng
                l1=l1->next; //trỏ/ di chuyển đến số/phần tử kế tiếp 
            }
            if(l2){ //l2 chưa hết thì vòng lặp vẫn tiếp tục
                sum+=l2->val; //+phần tử hiện tại vào sum
                l2=l2->next; //trỏ đến phần tử kế
            }
            carry=sum/10; //tính phần dư(nếu tổng >9, carry sẽ là 1)
            cur->next=new ListNode(sum%10); //tạo node mới chứa chữ số hàng đơn vị của tổng
            cur=cur->next; //di chuyển con trỏ cur đến node vừa tạo ở trên
        }
        return DS1->next; //trả về danh sách kết quả, bỏ qua node ban đầu
    }
};
