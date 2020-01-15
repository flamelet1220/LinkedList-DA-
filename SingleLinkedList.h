struct Node{
	int data;
	Node* next;
};

class SingleLinked{
	Node* head;
	
public:
	SingleLinked();
	~SingleLinked();

	void insertFirstNode(int data);			// 첫 노드 삽입
	void insertNode(int data);				// 리스트 마지막에 노드 삽입
	void insertNode(int Cnt, int data);		// n번째 다음위치에 노드 삽입
	void deleteNode(Node* n);				// 해당 노드 삭제
	void deleteNode(int data);			// 데이터로 삭제
	//void SearchView(int data);			// 데이터로 탐색 후 해당 노드 값 출력
	//Node* Search(int data);				// 데이터로 탐색해 노드를 가져온다.
	//void Reverse();						// 리스트를 거꾸로
	//int GetSize();						// 리스트 크기
	void PrintAll();						// 리스트 전부 출력

};
