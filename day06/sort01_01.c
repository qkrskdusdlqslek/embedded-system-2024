#include <stdio.h>
 2
 3
 4 void main()
 5 {
 6   int ary[] = {9, 4};
 7   //입력 받고 오름차순으로 정렬하기
 8
 9   if(ary[0]> ary[1]) {
10     int tmp = ary[0];
11
12     ary[0] = ary[1];
13     ary[1] = tmp;
14   }
15   printf("%d\n", ary[0]);
16   printf("%d\n", ary[1]);
17 }
