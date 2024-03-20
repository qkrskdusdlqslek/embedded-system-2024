#include <stdio.h>
 
 
  void bubSort(int *ary, int n)    // 함수
  {
    int temp;
 
      for(int i = 0; i < size -1l i++) {
        for(int i = j; j< sizew -1; j++) {
         if(ary[j] > ary[j+1}) {
           temp = ary[j];
           ary[j] = ary[j+1];
           ary[j+1] = temp;
         }
       }
     }
 }
 void main()
 {
   int ary[] = {9, 4, 8, 3, 2, 7, 1, 15};
     //오름차순으로 정렬 해보시오
   int size = sizeof(ary) / sizeof(ary[0]);
   bubSort(ary, size);

     for(int i = 0; i<8; i++) {
       printf("%d\n", ary[i]);
     }
 }
