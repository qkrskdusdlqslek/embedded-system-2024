#include <stdio.h>
 2 #include <stdlib.h>
 3
 4 typedef struct node{
 5   int data;
 6   struct node *next;   // 자기자신을 가리키는 구조체변수(자기참조 구조체)
 7 }Node;
 8
 9 void main()
10 {
11   Node *node1 = malloc(sizeof(Node));
12   node1->data = 10;
13   node1->next = NULL;
14
15   printf("node-1data: %d, next:%d\n",node1->data, node1->next);
16
17   Node *node2 = malloc(sizeof(Node));
18   node2->data = 11;
19   node2->next = NULL;
20
21   printf("node2-data: %d, next: %d\n", node2->data, node2->next);
22
23   node1->next = node2;
24
25   printf("node2-data: %d\n", node1-> data );
26   free(node1);
27   free(node2);
