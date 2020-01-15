#include <stdio.h>
#include <string.h>
#include "SingleLinkedList.h"

SingleLinked::SingleLinked(){

}

SingleLinked::~SingleLinked(){

}

//첫 노드 삽입
void SingleLinked::insertFirstNode(int data){
	if (head == NULL)
	{
		head = new Node;
		head->data = data;
		head->next = NULL;

		return;
	}
}

//리스트 마지막에 노드 삽입
void SingleLinked::insertNode(int data){
	for (Node* node = head; node != NULL; node = node->next){
		if (node->next == NULL){
			Node *n = new Node;
			n->data = data;
			n->next = NULL;
			node->next = n;

			return;
		}
	}

}

// n번째 다음위치에 노드 삽입
void SingleLinked::insertNode(int Cnt, int data){
	int cnt = 0;
	for (Node* node = head; node != NULL; node = node->next){
		if (cnt == Cnt - 2){
			Node* n = new Node;
			n->data = data;
			n->next = node->next;
			node->next = n;

			return;
		}
		else if (Cnt == 1){
			Node *n = new Node;
			n->data = head->data;
			n->next = head->next;
			head->data = data;
			head->next = n;
			
			return;
		}
		cnt++;
	}
}

//노드를 실제 삭제시키는 함수
void SingleLinked::deleteNode(Node *n) {
	delete(n);
}

//삭제하려는 노드의 data를 검출하고 삭제하는 함수
void SingleLinked::deleteNode(int data){
	for (Node* n = head; n != NULL; n = n->next){

		if (head == NULL){
			printf("노드가 없습니다.");
		}

		if (n->next->data == data){
			Node *temp = n->next->next;
			deleteNode(n->next);
			n->next = temp;
			return;
		}
	}
}

void SingleLinked::PrintAll(){
	int cnt=1;
	for (Node* p = head; p != NULL; p = p->next){
		printf("%d번째 데이터 : %d\n", cnt, p->data);
		cnt++;
	}
}

void main()
{
	SingleLinked Link;
	
	Link.insertFirstNode(1);
	Link.insertNode(2);
	Link.insertNode(3);
	Link.insertNode(1024);
	Link.insertNode(512);
	Link.insertNode(1, 5);
	Link.deleteNode(3);
	Link.PrintAll();
	
}
