#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
   int data;
   struct NODE* next;
 }node;

 //void pre_addNode(node* pnode, int _data)          // 전위삽입
 //{
 //  node* newnode = (node*)malloc(sizeof(node));
 //newnode->data = _data;
 //  newnode->next = pnode->next;
 //  pnode->next = newnode;

 //}
 void rear_addNode(node* pnode, int _data)         // 후위삽입
 {
   node* newnode = (node*)malloc(sizeof(node));
   newnode->data = _data;
   newnode->next = NULL;

   while(pnode->next != NULL)
  // 연결리스트의 마지막 노드의 next가 NULL 이므로
   {
    pnode = pnode->next;             // pnode가 다음 노드를 가리킴
   }                                // 마지막 노드를 가리킬 때까지 반복
     pnode->next = newnode;
}

 void showNode(node* pnode)        // 출력함수
 {
   if(pnode==NULL){
     printf("비어있음\n");
   }
   else{
    printf("현재=%d\n", pnode->data);
     }
   }
 void main()
 {
   node* head =(node*)malloc(sizeof(node));
   head->next = NULL;

   head->data = 0;

   rear_addNode(head, 10);       // 첫번째 노드로 삽입
   rear_addNode(head, 20);
   rear_addNode(head, 30);
   rear_addNode(head, 40);
   rear_addNode(head, 50);

   node* curr = head->next;
   while(curr !=NULL) {
   // printf("현재=%d\n", curr->data);
     showNode(curr);
    curr = curr->next;
   }

   curr = head->next;
   while(curr != NULL) {
     head->next = curr->next;
     free(curr);
     curr = head->next;

   //  head->next = curr->next;
   }
   printf("%d\n", head->next, curr);   // head->next = NULL
   free(head);
 }
