struct Node{
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
void delete_node(){
	Node* curr;
	Node* prev;
	curr = first;
	prev = first;
	if(first == NULL){
		cout<<"#";
	}else{
		while(curr->next != NULL){
			prev = curr;
			curr = curr->next;
		}
		free(curr);
		prev->next = NULL;
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

int main(){
	insert_node(30);
}