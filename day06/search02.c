// 이진탐색 -> 반으로 나눠서 탐색
 #include <stdio.h>

void main()
 {
   int ary[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int size = sizeof(ary) / sizeof(ary[0]);
   int first = 0;
   int last = size;
   int middle = 0;

   while(first <= last){
     middle = (first + last) / 2;
     if(target == ary[middle]) printf("%d\n", ary[middle]);
     else {
       if(target > ary[middle]) first = middle + 1;
       else last = middle - 1;
     }
   }
 }
