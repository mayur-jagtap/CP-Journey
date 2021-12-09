#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
Node* first = NULL;

void insert_node(int val){
	Node* nn;
	Node* curr;
	nn = new Node();
	nn->next = NULL;
	nn->data = val;
	if(first == NULL){
		first = nn;
	}else{
		curr = first;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = nn;
	}
}

 void display_node(){
	Node* curr;
	curr = first;
	if(first == NULL){
		cout<<"here";
	}else{
		while(curr != NULL){
			cout<<curr->data<<" ";
			curr = curr->next;
		}
	}
}

void rverese_linkedList(){
	Node* curr = first;
	Node* prev = NULL;
	Node* nextptr;
	while(curr != NULL){
		nextptr = curr->next;
		curr->next = prev;

		prev = curr;
		curr = nextptr;
	}
	first = prev;
}

ListNode* reverseList(ListNode* head) {
    if(!head or !head->next){
            return head;
    }
    ListNode* reversehead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return reversehead;
}

int main() {
	insert_node(1);
	insert_node(2);
	insert_node(3);
	insert_node(4);
	cout<<"before reverse :"<<" ";
	display_node();
	cout<<"\n";
	rverese_linkedList();
	cout<<"after reverse :"<<" ";
	display_node();
	return 0;
}
void main(){
	
}