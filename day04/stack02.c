// 연결리스트로 구현
  #include <stdio.h>
 
  #define STACK_SZ 10
  #define TRUE 1
  #define FALSE 0
 
  typedef struct STACK {
    int buf[STACK_SZ];
   int top;
 }stack;

 int isFull(stack* pstk)
 {
   if(pstk->top == STACK_SZ -1){
   return TRUE;
   } else {
    return FALSE;
  }
 }
 void push(stack*, int);  // 함수선언
 int pop(stack*);
 int isEmpty(stack*);

 void main()
 {
   stack s;
   s.top = 0;   //구조체 변수 접근
   push(&s, 10);  // 함수호출
   push(&s, 20);
   push(&s, 30);

   printf("%d\n", pop(&s));
   printf("%d\n", pop(&s));
 }
 void push(stack* pstk, int value)
 {
   if(isFull(pstk)){
     printf("stack overflow\n");
     return ;
   }
   pstk->buf[(pstk->top)]=value; // -1
   printf("%d\n", pstk->buf[(pstk->top)]);
   ++(pstk->top);
 //  pstk->top = -1;  // 구조체 포인터 변수 접근
 }
 int isEmpty(stack* pstk)
 {
   if(pstk->top <= -1){
     return TRUE;
 } else {
     return FALSE;
   }
 }
 int pop(stack* pstk)
 {
   if(isEmpty(pstk)) {
     printf("stack underflow\n");
     return -1;
     }
   int data;
   data = pstk->buf[--(pstk->top)];
   return data;
 }


