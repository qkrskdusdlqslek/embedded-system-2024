/*
File: linkedList.c - 파일분할
Created: 2024-03-27
Author: 박나연
*/

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
