// 표준입출력 함수
#include <stdio.h>
 2 #include <stdlib.h>
 3
 4 void main()
 5 {
 6   char msg[20];
 7   FILE* fp;
 8   if((fp = fopen("test.txt", "r")) == NULL) {
 9     fprintf(stderr, "ERROR");   // 표준에러는 모니터와 연결
10     exit(1);
11   }
12   fscanf(fp, "%s", msg);
13   printf("%s\n", msg);
14
15   fclose(fp);
16 }
