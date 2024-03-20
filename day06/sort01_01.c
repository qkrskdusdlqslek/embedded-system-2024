#include <stdio.h>
 
 
  void main()
  {
    int ary[] = {9, 4};
    //입력 받고 오름차순으로 정렬하기
 
    if(ary[0]> ary[1]) {
     int tmp = ary[0];

     ary[0] = ary[1];
     ary[1] = tmp;
   }
   printf("%d\n", ary[0]);
   printf("%d\n", ary[1]);
 }
