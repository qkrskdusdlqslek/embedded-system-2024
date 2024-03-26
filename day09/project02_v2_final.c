/*
File: linkedList.c
Created: 2024-03-27
Author: 박나연
*/

/* 연결리스트 자료구조로 도서관리 프로그램 작성
   v1 ->
   ****메뉴****
   1 도서구입(등록)
   2 도서검색- 검색한 도서의 유무만 출력함
   3 도서삭제
   4 도서출력
   0 종료
   v2 ->
  ****메뉴****
  1 도서구입(등록)
  2 도서검색 - 검색 후 대여의 기능을 구현함
  3 도서삭제
  4 도서출력
  5 도서 반납
  6 종료*/
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  //#include <stdbool.h>
 
  typedef struct Book {
  //int id;
    char title[100];       // 제목
    char author[100];      // 저자
    char publisher[100];  // 출판사
    char price[100];         // 가격
    int rented;   // 대여가능 여부
   struct Book* next;
  }Book;
 
  Book* head = NULL;  // 전역 변수로 연결 리스트 헤드 포인터 선언
 
  // 연결 리스트에 도서 추가 함수
  void addBook() {
   Book* newBook = (Book*)malloc(sizeof(Book));
 
   printf("도서제목: ");
   scanf("%s", newBook->title);
   printf("저자: ");
   scanf("%s", newBook->author);
   printf("출판사: ");
   scanf("%s", newBook->publisher);
   printf("가격: ");
   scanf("%s", newBook->price);
   //printf("대여: ");
   //scanf("%s", newBook->borrowed);
 
   newBook -> next = head;
   head = newBook;
 
   printf("도서가 추가되었습니다\n");
 }
 
  // 도서 제거 함수
  void removeBook() {
   char title[100];
   printf("삭제할 도서 제목: ");
   scanf("%s", title);
 
   Book* current = head;
   Book* prev = NULL;
 
   while(current != NULL) {
    if(strcmp(current->title, title) ==0) {
      if(prev == NULL) {
        head = current->next;
      } else {
          prev->next = current->next;
        }
      free(current);
      printf("도서가 삭제되었습니다\n");
      return;
      }
    prev = current;
    current = current->next;
    }
   printf("해당 도서를 찾을 수 없습니다.\n");
  }
 // 도서 검색 함수
  void searchBook() {
    char title[100];
    printf("검색할 도서 제목: ");
    scanf("%s", title);
 
    struct Book* current = head;
 
    while(current != NULL) {
      printf("도서제목: %s\n", current->title);
      printf("저자: %s\n", current->author);
      printf("출판사: %s\n", current->publisher);
      printf("가격:%s\n", current->price);
 
      if(current -> rented == 0) {
        printf("도서를 대여합니다\n");
        current -> rented = 1;  // 대여 중
      } else {
          printf("해당 도서는 대여 중입니다.\n");
      }
     return;
  }
   current = current->next;
 }

 // 도서 목록 출력 함수
 void displayBooks() {
   if(head == NULL) {
   printf("등록된 도서가 없습니다\n");
   return;
   }
   printf("도서목록\n");
   Book* current = head;
   while (current != NULL) {
     printf("도서제목:%s\n", current->title);
     printf("저자:%s\n", current->author);
     printf("출판사:%s\n", current->publisher);
     printf("가격:%s\n", current->price);
     current = current->next;
   }
 }

 // 도서 반납 함수
  void returnBook() {
    char title[100];
    printf("반납할 도서 제목: \n");
    printf("책 제목: ");
    scanf("%s", title);

    struct Book* current = head;
    while(current != NULL) { // 입력한 도서 제목과 일치하는 도서 찾음
     if(strcmp(current->title, title)== 0) {
       if(current->rented == 1) {
         current->rented =0;   // 도서 대여 가능
         printf("도서를 반납했습니다.\n");
       } else {
           printf("대여 가능합니다.\n");
       }
       return;
    }
    current = current->next;
  }
 }

 void  main()
 {
    int choice;
 // do while 문 : 한번은 {}안의 내용을 실행하고 그 후 while 조건을 확인 >
    do{
     printf(" 도서관리 프로그램\n");
     printf("1. 도서추가\n");
     printf("2. 도서삭제\n");
     printf("3. 도서검색 및 대여\n");
     printf("4. 도서목록출력\n");
     printf("5. 도서 반납\n");
     printf("6. 종료\n");
     printf("선택:");
     scanf("%d",&choice);

     switch(choice) {
       case 1:
         addBook();
         break;
       case 2:
         removeBook();
         break;
       case 3:
         searchBook();
         break;
       case 4:
         displayBooks();
         break;
       case 5:
         returnBook();
         break;
       case 6:
         printf("프로그램을 종료합니다\n");
         break;
       default:
         printf("다시 시도하세요\n");
    }
 } while(choice != 6);
 }
