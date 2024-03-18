 #include <stdio.h>
 #include <stdlib.h>
  
 typedef struct NODE{
    int data;
    struct NODE* next;
 }node;
 
 typedef struct {
    node *head;
  }headNode;
 
  headNode* createHeadNode(void)
  {
    headNode* newheadNode = (headNode*)malloc(sizeof(headNode));
   //  if(newheadNode==NULL) {
   //  printf("할당실패\n");
  //  exit();
  //    return -1;
  //  }
    return newheadNode;
  }
 
  void pre_addNode(node* pnode, int _data)  // 전위삽입
  {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = _data;
    newnode->next = pnode->next;
  pnode->next = newnode;
 
  }
  //void rear_addNode(node* pnode, int _data)      // 후위삽입
  // {
    // node* newnode = (node*)malloc(sizeof(node));
    // newnode->data = _data;
    // newnode->next = NULL;
 
    // while(pnode->next != NULL)
    // 연결리스트의 마지막 노드의 next가 NULL 이므로
    // {
     // pnode = pnode->next;             // pnode가 다음 노드를>
    // }                                // 마지막 노드를 가리킬>
      // pnode->next = newnode;
  //}
 
 
  void showNode(node* pnode)   // 출력함수
  {
    if(pnode==NULL){
      printf("비어있음\n");
    }
    else{
     printf("현재=%d\n", pnode->data);
      }
    }
 
// 전체 원소를 하나씩 거쳐가며 메모리 해제
  void allFreeNode(node* pnode)     // 전체메모리 해제함수
  {
    node* curr = pnode->next;
    while(curr != NULL) {
      node* next = curr->next;   // 다음 원소 저장 후
      free(curr);        // 현재 가리키는 원소 할당 해제
      curr = next;   // curr 포인터를 다음 node를가리킴
    }
  }
 
  void main()
  {
  //  node* head =(node*)malloc(sizeof(node));
  //  head->next = NULL;
 
  //headNode  호출해서  리턴해주는 코드 작성
    headNode* newheadNode = createHeadNode();
 
  //  head->data = 0;
 
    //  rear_addNode(head, 10);    // 첫번째 노드로 삽입
     // rear_addNode(head, 20);
    //  rear_addNode(head, 30);
    //  rear_addNode(head, 40);
    //  rear_addNode(head, 50);
 
     pre_addNode(newheadNode, 10);
  pre_addNode(head->headNode, 20);
    // pre_addNode(head, 30);
    // pre_addNode(head, 40);
    // pre_addNode(head, 50);
  /*
    node* curr = node->next;
    while(curr !=NULL) {
     printf("현재=%d\n", curr->data);
      showNode(curr);
      curr = curr->next;
    }
    */
 
 //  curr = head->next;
 //  while(curr != NULL) {
   //  head->next = curr->next;
   //  free(curr);
   //  curr = head->next;

   //  head->next = curr->next;
 //  }
 //  printf("%d\n", head->next, curr);   // head->next = NULL
   allFreeNode(newheadNode);
 }
