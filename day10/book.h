#ifndef BOOK_H
#define BOOK_H

 typedef struct Book {
     char title[100];       // 제목
     char author[100];      // 저자
     char publisher[100];   // 출판사
     char price[100];       // 가격
     int rented;            // 대여가능 여부
     struct Book* next;
 } Book;

 void addBook();
 void removeBook();
 void searchBook();
 void displayBooks();
 void returnBook();

 #endif /* BOOK_H */
