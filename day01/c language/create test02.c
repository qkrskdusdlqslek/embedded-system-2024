 #include <stdio.h>
 2
 3 #define BUFSIZE 14
 4 void main()
 5 {
 6   char str[BUFSIZE]= "Raspberrypi!!";
 7   printf("%s\n", str);
 8
 9   for(int i = 0; i< BUFSIZE; i++) {
10   printf("%c", str[i]);
11
12   }
13   printf("\n");
14
15 }
