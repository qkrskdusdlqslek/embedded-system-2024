#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
void error_handling(char* message);
  //park.text - 이름, 정보/ parkCopy.text - 파일 입출력을 통해서
 
  void main()
  {
   int fd;
   char msg[] = "박나연 24세\n";

   FILE* fp;
   fp = fopen("park.text", "w");
   if(fp ==NULL)
     error_hnadling("fopen() error!");
   printf("file descriptor: %d\n", fd);

   if(write(fd, msg, sizeof(msg))==-1);
     error_handling("write() error!");
   fclose(fd);

   if((fp = open("park.text", "r")) ==NULL); {
     fprintf(stderr, "Error");
     exit(1);
   }
   fscanf(fp, "%s", msg);
   printf("%s\n", msg);

   fclose(fp);
   return 0;
 }
