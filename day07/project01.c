 // 아이디와 비밀번호를 입력하여 맞으면 본인의 정보가 저장된 파일을
// open 한다.   파일명 : myinfo.txt
  
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <unistd.h>
   #include <fcntl.h>
  
  int main()
  {
    char id[] = "1234";    // 초기 아이디 설정
    char psw[] = "5678";   // 초기 비번 설정
    char user1[10];        // 입력 받을 id  초기 변수선언
    char user2[10];        // 입력 받을 psw 초기 변수선언
 
  // string cmp 문자열 비교하는 걸로
    printf("아이디와 비밀번호를 입력하세요\n");
    while(1) {  // 무한루프 생성
      printf("아이디 : ");
      scanf("%s", user1);
 
      printf("비밀번호 : ");
      scanf("%s", user2);
 
    if(strcmp(id, user1) != 0)
      printf("아이디가 일치하지 않습니다.\n");
    else {
      printf("아이디가 일치합니다.\n");
 
      if(strcmp(psw, user2) != 0)
        printf("비밀번호가 일치하지 않습니다.\n");
      else {
        printf("비밀번호가 일치합니다.\n");
 
        break;   // 무한루프 탈출
      }
    }
  }
 
  // 파일 열기
   int fd = open("myinfo.txt", O_CREAT | O_WRONLY | O_TRUNC, 0600);
   if(fd < 0) {
     printf("파일 열기 실패\n");
     return 1;
   }
 
  // 파일에 문자열 쓰기
   char str[] = "박나연 24세\n";
   if(write(fd, str, strlen(str)) < 0) {
     printf("파일 쓰기 실패\n");
     close(fd);
     return 1;
   }
 
   close(fd);
 // 파일 읽기
   fd = open("myinfo.txt", O_RDONLY);
   if(fd < 0) {
     printf("파일 열기 실패\n");
     return 1;
   }
 
  // 파일 내용 읽기
   char buf[1024];
   int bytes_read = read(fd, buf, sizeof(buf));
   if(bytes_read < 0) {
     printf("파일 읽기 실패\n");
     close(fd);
     return 1;
   }
 
  // 파일 내용 출력
   printf("파일 내용: %.*s\n", bytes_read, buf);
   close(fd);
 
   return 0;
  }
