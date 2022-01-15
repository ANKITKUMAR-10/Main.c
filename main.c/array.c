 /*#include<stdio.h>

  void main(){

    int arr[10] ,n;
      printf(" Enter the number\n");
         scanf("%d" , &n);
    for(int i = 0; i<=10; i++){
     arr[i]= n*(i+1); 
    }
     for(int i = 0; i<10; i++){
      printf(" %d x %d  is: %d\n" , n , i+1 , arr[i] );
    }
   }*/
   #include <stdio.h>
   void reverse(int *arr , int  n ){
     int temp; 
    for(int i = 0;  i<(n/2); i++){
     temp = arr[i];
     arr[i] = arr[n-i-1];
     arr[n-i-1] = temp;
}
}
void main(){
    int arr[] = {1,2,4,6,7,8,9};
   reverse(arr , 7);
    for(int i = 0; i<7; i++){

      printf("\tThe value of the  element %d is %d\n :" , i , arr[i]);
    }

}
