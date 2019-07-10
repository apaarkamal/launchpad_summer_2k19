#include<bits/stdc++.h>

using namespace std;

const int N=5;

class node{
public:
    int val;
    node *next;
    node(int _val){
        val=_val;
        next=NULL;
    }
};

node* createll(){
    int n;
    cin>>n;
    node *head=NULL,*tail=NULL;
    // here tail points to the current last node
    while(n--){
        int x;
        cin>>x;
        if(head==NULL){
            node *cur=new node(x);
            head=cur;
            tail=cur;
        }
        else{
            node *cur=new node(x);
            tail->next=cur;
            tail=cur;
        }
    }
    return head;
}

node* createll_end_with__1(){
    node *head=NULL,*tail=NULL;
    // here tail points to the current last node
    while(1){
        int x;
        cin>>x;
        if(x==-1) return head;
        if(head==NULL){
            node *cur=new node(x);
            head=cur;
            tail=cur;
        }
        else{
            node *cur=new node(x);
            tail->next=cur;
            tail=cur;
        }
    }
}

void print(node* head){
    node *cur=head;
    while(cur!=NULL){
        cout<<cur->val<<" ";
        cur=cur->next;
    }
    cout<<'\n';
}

int find_length(node* head){
    int cnt=0;
    node *cur=head;
    while(cur){
        cnt++;
        cur=cur->next;
    }
    return cnt;
}

node* delete_kth_index(node *head,int k){
    node *cur=head,*prev=NULL;
    k=k-1;
    while(k--){
        prev=cur;
        cur=cur->next;
    }
    if(prev==NULL){// if k was 1
        head=cur->next;
    }
    else{
        prev->next=cur->next;
    }
    return head;
}

node* reverse(node* head)
{
    node* cur=head;
    node* prev=NULL;
    while(cur)
    {
        node* ahead=cur->next;
        cur->next=prev;
        prev=cur;
        cur=ahead;
    }
    return prev;
}

node* append_k(node *head,int k){
    node *cur=head,*prev=NULL;
    while(k--){
        cur=cur->next;
    }
    prev=head;
    while(cur->next!=NULL){
        cur=cur->next;
        prev=prev->next;
    }
    node *temp=prev->next;
    prev->next=NULL;
    cur->next=head;
    return temp;
}

node* insert_at_head(node* head,int x){
    node* cur=new node(x);
    cur->next=head;
    return cur;
}

node* insert_at_tail(node* head,int x){
    node* cur=head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    node* nw=new node(x);
    cur->next=nw;
    return head;
}

node* insert_at(node* head,int x,int pos){
    if(pos==0){
        return insert_at_head(head,x);
    }
    else if(pos==find_length(head)){
        return insert_at_tail(head,x);
    }
    else{
        node* cur=head;
        pos--;
        while(pos--){
            cur=cur->next;
        }
        node* nw=new node(x);
        nw->next=cur->next;
        cur->next=nw;
        return head;
    }
}

node* delete_at_head(node* head){
    return head->next;
}

node* delete_at_tail(node* head){
    node *cur=head,*prev=NULL;
    while(cur->next!=NULL){
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    return head;
}

node* delete_at(node* head,int pos){
    if(pos==0){
        return delete_at_head(head);
    }
    else if(pos==find_length(head)-1){
        return delete_at_tail(head);
    }
    else{
        node *cur=head,*prev=NULL;
        while(pos--){
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        return head;
    }
}

bool cycle(node* head){
    if(head==NULL){
        return false;
    }
    if(head->next==head){ // cycle of length 1
        return true;
    }
    node *slow=head,*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}

node* cycle_at_pos(node* head){
    node *slow=head,*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return slow;
    }
}

node* detect_break_cycle(node *head){
    if(cycle(head)){
        node *temp=cycle_at_pos(head);
        node *cur=head,*temp2=temp;
        while(1){
            temp2=temp->next;
            while(1){
                if(temp2==temp){
                    break;
                }
                else if(temp->next==temp2&&temp2==cur){
                    temp->next=NULL;
                    return head;
                }
                else if(temp2->next==cur){
                    temp2->next=NULL;
                    return head;
                }
                temp2=temp2->next;
            }
            cur=cur->next;
        }
    }
    else{
        return head;
    }
}

node* merge_recursive(node *head1,node *head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->val<=head2->val){
        head1->next=merge_recursive(head1->next,head2);
        return head1;
    }
    else{
        head2->next=merge_recursive(head1,head2->next);
        return head2;
    }
}

node *merge_iterative(node *head1,node *head2){
    node *head_to_be_returned;
    if(head1->val<=head2->val){
        head_to_be_returned=head1;
    }
    else{
        head_to_be_returned=head2;
    }
    while(head1 && head2){
        while(head1->next && head1->next->val < head2->val){
            head1=head1->next;
        }
        while(head2->next && head2->next->val < head1->val){
            head2=head2->next;
        }
        if(head1->val < head2->val){
            node *ahead=head1->next;
            head1->next=head2;
            head1=ahead;
        }
        else{
            node *ahead=head2->next;
            head2->next=head1;
            head2=ahead;
        }
    }
    return head_to_be_returned;
}

node* midPoint(node* head){
    node* slow = head;   // SET
    node* fast = head;

    // GO
    while(slow && fast && fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node* mergeSort(node* head){
    if (head == NULL || head->next == NULL) return head;
    node* midNode = midPoint(head);
    node* b = midNode->next;
    midNode->next = NULL;

    head = mergeSort(head);
    b = mergeSort(b);
    node* ans = merge_recursive(head, b);
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    // v=creation , insertion and deletion
    // node* head=createll();
    // print(head);
    // // head=reverse(head);
    // head=insert_at_head(head,0);
    // print(head);
    // head=insert_at_tail(head,0);
    // print(head);
    // head=insert_at(head,6,6);
    // print(head);
    // head=delete_at(head,6);
    // print(head);
    // head=detect_break_cycle(head);


    // cycle detection and break 
    // node* head=createll();
    // head->next->next->next->next->next=head->next;
    // if(cycle(head)){
    //     cout<<"YES CYCLE\n";
    // }
    // else{
    //     cout<<"NO Cycle\n";
    // }
    // head=detect_break_cycle(head);
    // cout<<find_length(head);

    // merge two sorted link list
    // recursive and iterative
    // node *head1=createll();
    // node *head2=createll();
    // node *head=merge_iterative(head1,head2);
    // node *head=merge_recursive(head1,head2);
    
    // node *head=createll();
    // head=mergeSort(head);
    // print(head);
}        
