 #include <stdio.h>
 
  void main()
  {
    int ary[] = {9, 4, 8, 3, 2, 7, 1, 15};
      //오름차순으로 정렬 해보시오
    int i, j, tmp;
    //  int n = sizeof(ary)
      for(int i = 0; i < 7; i++) {
       for(int j = 0; j < 7; j++) {
       //printf("%d\n", ary[i]);
         if(ary[j] > ary[j+1]){
           tmp = ary[j];
           ary[j] = ary[j+1];
           ary[j+1] = tmp;
         }
       }
     }

     for(int i = 0; i<8; i++) {
       printf("%d\n", ary[i]);
     }
 }
