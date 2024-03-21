  // 아이디와 비밀번호를 입력하여 맞으면 본인의 정보가 저장된 [>
  2 // open 한다.   파일명 : myinfo.txt
  3
  4 #include <stdio.h>
  5 #include <stdlib.h>
  6 #include <string.h>
  7 #include <unistd.h>
  8 #include <fcntl.h>
  9
 10 int main()
 11 {
 12   char id[] = "1234";    // 초기 아이디 설정
 13   char psw[] = "5678";   // 초기 비번 설정
 14   char user1[10];        // 입력 받을 id  초기 변수선언
 15   char user2[10];        // 입력 받을 psw 초기 변수선언
 16
 17 // string cmp 문자열 비교하는 걸로
 18   printf("아이디와 비밀번호를 입력하세요\n");
 19   while(1) {  // 무한루프 생성
 20     printf("아이디 : ");
 21     scanf("%s", user1);
 22
 23     printf("비밀번호 : ");
 24     scanf("%s", user2);
 25
 26   if(strcmp(id, user1) != 0)
 27     printf("아이디가 일치하지 않습니다.\n");
 28   else {
     printf("아이디가 일치합니다.\n");
 30
 31     if(strcmp(psw, user2) != 0)
 32       printf("비밀번호가 일치하지 않습니다.\n");
 33     else {
 34       printf("비밀번호가 일치합니다.\n");
 35
 36       break;   // 무한루프 탈출
 37     }
 38   }
 39 }
 40
 41 // 파일 열기
 42  int fd = open("myinfo.txt", O_CREAT | O_WRONLY | O_TRUNC, 06>
 43  if(fd < 0) {
 44    printf("파일 열기 실패\n");
 45    return 1;
 46  }
 47
 48 // 파일에 문자열 쓰기
 49  char str[] = "박나연 24세\n";
 50  if(write(fd, str, strlen(str)) < 0) {
 51    printf("파일 쓰기 실패\n");
 52    close(fd);
 53    return 1;
 54  }
 55
 56  close(fd);
 // 파일 읽기
 59  fd = open("myinfo.txt", O_RDONLY);
 60  if(fd < 0) {
 61    printf("파일 열기 실패\n");
 62    return 1;
 63  }
 64
 65 // 파일 내용 읽기
 66  char buf[1024];
 67  int bytes_read = read(fd, buf, sizeof(buf));
 68  if(bytes_read < 0) {
 69    printf("파일 읽기 실패\n");
 70    close(fd);
 71    return 1;
 72  }
 73
 74 // 파일 내용 출력
 75  printf("파일 내용: %.*s\n", bytes_read, buf);
 76  close(fd);
 77
 78  return 0;
 79 }
