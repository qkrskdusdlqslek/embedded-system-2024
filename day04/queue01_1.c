 // 전역함수
  #include <stdio.h>
 
  #define Q_SIZE 10
 
  int queue[Q_SIZE];
  int front = -1;
  int rear = -1;

 void enqueue(int _data)  // 배열 이름은 주소
 {                             // _rear = -1이복사돼서 사용됨
   if(rear >= Q_SIZE -1) {
     printf("QUEUE OverF!!\n");
     return;
   }
   queue[++(*(_rear))] = _data;         // _rear = 0
 }
 int dequeue()
 {
   if(front == rear) {
     printf("QUEUE UnderF!!\n");
     return -1;   // 정수를 리턴해야 하기 때문에 -1
   }
   return queue[++front];
 }
 void main()
 {
   enqueue(10);
   enqueue(20);
   enqueue(30);

   printf("%d\n", dequeue());    // 10
   printf("%d\n", dequeue());    // 20

 }
