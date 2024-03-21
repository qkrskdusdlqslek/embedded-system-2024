 // 아이디와 비밀번호를 입력하여 맞으면 본인의 정보가 저장된 파>
  // open 한다.   파일명 : myinfo.txt
 
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <unistd.h>
  #include <fcntl.h>
 
 #define SUCCESS 1
 #define FAIL 0
 #define LIMIT 2

 int check(int id, int psw);

 int main()
 {
   int id, psw, result;

  while{
     printf("id : ")
     scanf("%d", &id);
     printf("psw : ");
     scanf("%d", &psw);
     result = check(id, psw);
     if(result == SUCCESS) break;
   }
     printf("로그인 성공\n");
     return 0;
 }

 int check(int id, int psw) {
   static int s_id = 1234;
   static int s_psw = 5678;
   static int try_count = 0;    // 값 고정 코드
   try_count++;

   if(id == s_id && psw == s_psw) {
     return SUCCESS;
   }
   else {
     if(try_count == LIMIT) {
       printf("횟수초과\n");
       exit(1);
     }
     return FAIL;
   }
 }
 void  main()
 {
   int fd1, fd2;
   char str[] = "박나연 24세\n";
   char buf[1024];

   fd1 = open("myinfo.txt", O_CREAT | O_RDWR | O_TRUNC, 0600);
   if(fd1<0) printf("Open Error");
   if(write(fd1, str, strlen(str)) < 0) printf("Write Error");
   close(fd1);

   fd1 = open("myinfo.txt", O_RDONLY);
   if(read(fd1, buf, 1024) < 0) printf("Read Error");

   printf("%s\n", buf);

   fd2 = open("myinfo_copy.txt", O_CREAT | O_RDWR | O_TRUNC, 06>
   if(fd2<0) printf("Open Error");
   if(write(fd2, str, strlen(str)) < 0) printf("Write Error");

   close(fd1);
   close(fd2);
 }
