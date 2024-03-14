 // 열거형
 2 #include <stdio.h>
 3
 4 void main()
 5 {
 6   enum season {SPRING=1, SUMMER, FALL, WINTER} s;
 7   s = SPRING;
 8   printf("%d\n", s);
 9
10   s=WINTER;
11   printf("%d\n", s);
12 }
