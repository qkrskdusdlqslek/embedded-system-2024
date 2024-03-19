 // 연결자료구조를 이용한 큐
  #include <stdio.h>
  #include <stdlib.h>
 
  typedef struct NODE {
    int data;
    struct NODE* link;
  }node;
  typedef struct {
   node* rear;
   node* front;
 }linkQ;

 linkQ* createlinkQ();
 void enQueue(linkQ*, int);
 void printQ(linkQ*);
 void deQueue(linkQ*);
 void main()
 {
   linkQ* q = createlinkQ();
   enQueue(q, 10);
   enQueue(q, 20);
   enQueue(q, 30);
   printQ(q);
   deQueue(q);
   deQueue(q);
 }
 /*int isFull(linkQ* alq)
   {
   if(alq->rear == ) {
     printf("queue overflow\n")
     return;
   }
}*/

 linkQ* createlinkQ()
 {
   linkQ* lq = malloc(sizeof(linkQ));
   if(lq == NULL) {
     printf("메모리 할당 실패!\n");
   }
   lq -> front = NULL;
   lq -> rear = NULL;
   return lq;
 }

 void enQueue(linkQ* alq, int data)
 {
   node* newNode = malloc(sizeof(node));
   newNode->data = data;
   newNode->link = NULL;

   if(alq->front==NULL) {//큐가 비어있는 경우
     alq->front = newNode;
     alq->rear = newNode;
 /*  if(isFull()) return;
   alq->linkQ[++(alq->rear)] = data;*/
   }
   else{//큐가 비어있지 않은 경우
     alq->rear->link = newNode;
     alq->rear = newNode;
   }
 }
 void printQ(linkQ* alq)
 {
   printf("Queue : ");
   node* curr = alq->front;
   while(curr != NULL){
     printf("%d ", curr->data);
   //  alq->front = alq->front->link;
     curr = curr->link;
   }
   printf("\n");
 }
 void deQueue(linkQ* alq)
 {
   node* curr = alq->front;
   alq->front = alq->front->link;
   printf("dq: %d\n", curr->data);
   free(curr);

 }
