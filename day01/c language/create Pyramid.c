#include <stdio.h>
 2
 3 // 공백을 출력하는 함수
 4 void printSpaces(int numSpaces) {
 5     for (int i = 0; i < numSpaces; i++) { // numSpaces만큼 반>
 6         printf(" "); // 공백 출력
 7     }
 8 }
 9
10 // 별표를 출력하는 함수
11 void printStars(int numStars) {
12     for (int i = 0; i < numStars; i++) { // numStars만큼 반복
13         printf("*"); // 별표 출력
14     }
15     printf("\n"); // 별표 출력 후 줄바꿈
16 }
17
18 // 피라미드를 출력하는 함수
19 void printPyramid(int height) {
20     for (int i = 1; i <= height; i++) { // 피라미드의 높이만[>
21         printSpaces(height - i); // 공백 출력
22         printStars(2 * i - 1); // 별표 출력
23     }
24 }
