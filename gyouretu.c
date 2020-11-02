/*4行3列の行列と3行4列の行列の積を求める*/
#include<stdio.h>
int main (void)
{
   int i, j, k;
   int a[4][3];
   int b[3][4];
   int c[4][4];

   printf("4行3列のaと3行4列のbの積をcを求めます。\n");
   
   puts("aの各要素の値を入力してください");
   for(i = 0; i < 4; i++)  {
      for(j = 0; j < 3; j++) {
          printf("a[%d][%d] :", i, j);
          scanf("%d", &a[i][j]);
        }
     }
   puts("bの各要素の値を入力してください");
   for(i = 0; i < 3; i++) {
      for(j = 0; j < 4; j++) {
           printf("b[%d][%d] :", i, j);
           scanf("%d", &b[i][j]);
         }
     }
    
   for(i = 0; i < 4; i++) {
      for(j = 0; j < 4; j++) {
        c[i][j] = 0;
        for(k = 0; k < 3; k++)
               c[i][j] += a[i][k] * b[k][j];
         }
     }
    
   puts("cの値は以下のとおりです");
   for(i = 0; i < 4; i++) {
      for(j = 0; j < 4; j++) 
           printf("c[%d][%d] = %d\n", i, j, c[i][j]);
   }
   return 0;
 }   
