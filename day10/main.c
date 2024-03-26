 #include <stdio.h>
 #include "book.h"

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
