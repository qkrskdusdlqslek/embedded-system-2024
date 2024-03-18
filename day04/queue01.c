 #include <stdio.h>
 
  #define Q_SIZE 10
  void enqueue(int* pqueue[], int* _rear,  int _data)  // 배열 이[>
 {                             // _rear = -1이복사돼서 사용됨
   if(rear =Q_SIZE -1) {
     printf("QUEUE OF!!\n");
     return;
   }
   pqueue[++(*(_rear))] = _data;         // _rear = 0
 }
 void main()
 {
  int rear = -1;
  int front = -1;
  int queue[Q_SIZE];

   enqueue(queue, &rear,  10);
  //rear를 주소로 받으면 바로 11행에서 1 증가
   enqueue(20);

 }
