// 배열로 구현
   #include <stdio.h>
 
   #define STACK_SZ 10
   #define TRUE 1
   #define FALSE 0
 
   int stack[STACK_SZ];
   int top = -1;   // -1이라고 선언하면 19행에서는 0번방으로 간다

 void push();    // 이런 함수가 있다는 것을 알려줌
 int  pop();

 void main()
 {
   push(3);     // 호출
   push(5);
   push(10);

   printf("%d\n", pop());
   printf("%d\n", pop());
 }
 int  isFull()   // 32행
 {
   if(top ==STACK_SZ -1) {
     return TRUE;     // 참인 경우 리턴됨
   } else {
     return FALSE;
   }
  }
 void push(int data)
 {
   //if(top == STACK_SZ -1) {    // isFull(): if(isFull) {  }
   if(isFull()) {
     printf("stack overflow!!\n"); // stack 값이 커지면 overflow
     return ;    // 출력이 없기 때문에 정수값을 주면 안됨
   //  return -1 ;   int push로 했을 경우
   }
   stack[++top] = data;   // top이라는 인덱스 변수 역할
 }

 int isEmpty()
 {
   if(top <= -1) {
     return TRUE;
   }
   else {
     return FALSE;
   }
 }
 int  pop()
 {
 //  if(top == -1) {
     if(isEmpty()) {
     printf("stack underflow\n");
     return -1;
   }
   return stack[top--];
   // top--;
 }
