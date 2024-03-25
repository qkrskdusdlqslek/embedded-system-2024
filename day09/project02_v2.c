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
  //printf("해당 도서를 찾을 수 없습니다.\n");

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
 int  main()
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
    //   case 5:
      //   borrowBook();
       //  break;
       case 6:
         printf("프로그램을 종료합니다\n");
         break;
       default:
         printf("다시 시도하세요\n");
    }
 } while(choice != 6);

 // 프로그램 종료 시 동적 할당 메모리 해제
   Book* current = head;
   Book* next;
   while(current != NULL) {
     next = current->next;
     free(current);
     current = next;
   }
 }
