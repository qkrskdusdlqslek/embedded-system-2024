//순차자료구조를  이용한 큐 자료구조
  #include <stdio.h>
  #include <stdlib.h>
 
  #define QSIZE 10
 
  typedef struct {
    int front;
    int rear;
   char queue[QSIZE];
 }queue;
  queue* create();    // 함수 선언
  void enqueue(queue *pq, char data);
  void dequeue();
  int isFull();
  int isEmpty();
  void printQueue();

 void main()
 {
   queue* pq = create();
   enqueue(pq, 'A');
   enqueue(pq, 'B');

   printf("%d\n", dequeue());

 }
 int isEmpty(queue pq)
 {
   if(pq->rear == pq->front) {
     printf("Queue is empty!!\n");
     return 1;
   } else {
     return 0;
   }
 }

 int isFull(queue pq)
 {
   if(pq->rear == QSIZE -1) {
     printf("Queue is ffull!!\n");
     return 1;
   }
   else {
     return 0;
   }
 }
 queue* create()
 { // 동적할당
   queue *q = (queue*)malloc(sizeof(queue));
   if(q == NULL) exit(1);
  // 초기화
   q->front = -1;
   q->rear = -1;
   return q;
 }
 void enqueue(queue* pq, char ch)
 {
   if(isFull()) return;
   pq->queue[++(pq->rear)] = ch;
 }
 queue* dequeue(queue* pq)
 {
   if(isEmpty()) return;
   return pq->queue[++(pq->front)];
 }
 void printQueue(queue* pq)
 {
   for(int i = pq->front+1; i<=pq->rear; i++) {
     printf("%c\n", pq->queue[i]);
   }
   printf("\n");
 }
