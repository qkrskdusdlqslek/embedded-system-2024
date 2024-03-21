#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

//park.text - 이름, 정보/ parkCopy.text - 파일 입출력을 통해서
 
  void error_handling(const char* message);
    ferror(message);
    exit(1);

 void main()
 {
   int fd;
   char buf[] = "박나연 24세\n";

   FILE* fp;
   fp = fopen("park.text", "w");
   if(fp ==NULL)
     error_hnadling("fopen() error!");
   //printf("file descriptor: %d\n", fd);

   if(fwrite(fd, buf,sizeof(char), sizeof(buf))==-1);
     error_handling("fwrite() error!");
   fclose(fd);

   if((fp = open("park.text", "r")) == -1)
     error_handling("open() error!");

 if(read(fd, buf, sizeof(buf))== -1)
     error_handling("read() error!");
 /*  {
     fprintf(stderr, "Error");
     exit(1);
   }*/
   //fscanf(fp, "%s", buf);
   printf("%s\n", buf);

   close(fp);
   return 0;
 }
