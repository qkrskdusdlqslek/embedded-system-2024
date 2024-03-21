#include <stdio.h>
#include <stdlib.h>
 
  void main()
  {
    char msg[20] = "File Test!!!";
 
    FILE* fp;    // 파일포인터
    fp = fopen("test.txt", "w");    // write할 목적으로  파일을 연다.
   if(fp == NULL) {
     fprintf(stderr, "Error");   // 파일 입출력에서 사용하는 fprintf
     exit(1);    // 종료
   }
   fprintf(fp, "%s" , msg);   // 파일로 출력
   printf("%s", msg);

   fclose(fp);
 }
