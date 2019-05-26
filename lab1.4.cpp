#include<iostream>
using namespace std;

class node {
	public:
	int val;
	node*next;
	node() {
		next=NULL;
	}
};

class linkedlist {
	public:
	node*head;
	linkedlist () {
		head=NULL;
	}
	//insert function
	void insert () {
		node*t=new node();
		t->next=head;
		head=t;
	}

			

	void insertat () {
		//start at the head
		node*current=head;
		int k=0;
		int pos;
		//loop till i reach 0
		while ( current != NULL) {
			k++;
			//jump to next
			current=current->next;
		}
		//if count is more than position+1		
		if (pos > k+1) {
			cout<<"The code won't be valid"<<endl;
		}
		else if (pos==1){
			insert ();
		}
		else {
			node*temp=new node();
			node*current=head;
			int i=0;
			while (i != pos-1) {
				i++;
				current=current->next;
			};
			temp->next=current->next;
			current->next=temp;
		}
	};

	void delet () {
		node*temp=head;
		head=head->next;
		delete temp;
	};	

	void deleteat () {
		node*current=head;
		int c=0;
		int pos;
		while (current != NULL) {
			c++;
			current=current->next;
		}
		if (pos > c+1) {
			cout<<"The code won't be valid"<<endl;
		}
		else if (pos==1) {
			delet ();
		}
		else {
			node*current=head;
			int j=0;
			while (j != pos) {
				j++;
				current=current->next;
			};
			node*temp=current->next;
			current=temp->next;
			delete temp;
		}
	};
	
	void display (){
		node*current=head;
		int a=0;
		while(current != NULL) {
			a++;
			current=current->next;
		};
		cout<<"NULL"<<endl;
	};
	
	int count () {
		int count=0;
		node*current=head;
		while (current != NULL) {
			count++;
			current=current->next;
		}
	return count;
	};
};
int main () {
	linkedlist l1;
	for (int b=0; b <= 20; b++) {
		l1.insert();
	}
	l1.insertat();
	l1.delet();
	l1.deleteat();
	l1.display();
	l1.count();

	
return 0;
}
