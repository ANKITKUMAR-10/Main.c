 //#include<stdio.h>

 /*void wrong_swap( int a , int b);
 void swap( int *a , int *b);*/
   
 //void sumAndavg( int a , int b , int *sum , float *avg){
 //*sum =  a + b;
 //*avg = (float)*sum/2;
 //}
   // void main(){

      // printf("The value of i is %d" , **ptr_ptr);
   
   /*int a = 4 , b =  5;
   printf("the value of a and b is %d %d\n" , a , b);  
    swap(&a , &b);
    printf(" the value of a and b after swap is % d %d\n" , a ,b );

}
 void wrong_swap( int a , int b){
     int temp;
     temp = a;
     a = b;
     b = temp;
 }
 void swap( int *a , int *b){
         int temp;
         temp = *a;
         *a = *b;
         *b = temp;*/
   
   //- averge and sum....
  // int i , j , sum;
 //  float avg;
  // i = 4;
  // j = 5;

  // sumAndavg(i , j , &sum , &avg);
  // printf("the vlaur of sum is %d\n" , sum);
  // printf("the value of avg is %.1f\n" , avg );
//
// }
#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,a[10][10],count = 0;
   printf("Enter row\n");
   scanf("%d",&row);
   printf("Enter Column\n");
   scanf("%d",&col);
   printf("Enter Element of Matrix1\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   /*checking sparse of matrix*/
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * col)/2))
      printf("Matrix is a sparse matrix \n");
   else
      printf("Matrix is not sparse matrix\n");
}

