 #include <stdio.h>

  void findMaxAndMin(int num1, int num2) {
      int max = (num1 > num2) ? num1 : num2;
      int min = (num1 < num2) ? num1 : num2;
 
      printf("최대값: %d\n", max);
      printf("최소값: %d\n", min);
 }
 void main() {
     int num1, num2;

     printf("두 개의 숫자를 입력하세요: ");
     scanf("%d %d", &num1, &num2);

     findMaxAndMin(num1, num2);
 }
