 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "book.h"

 Book* head = NULL;

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

