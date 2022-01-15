#include<stdio.h>

    void main(){

    int sparseMatrix[100][100];
    int size = 0, m , n , num=0;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of the column");
    scanf("%d", &n);
    for(int i = 0 ; i<m;i++)
    {for (int j =0; j<n; j++)
    {
        printf("Enter the element");
        scanf("%d", &sparseMatrix[i][j]);
    }}
    for (int i=0; i<m ; i++);
    {  for (int j=0; j<n; j++)
    {
        printf("%d", sparseMatrix[i][j]);
        printf(""); }
        printf("\n");
    }

     printf("\n The non zero element are :- \n");
     for (int i =0 ; i<m ;  i++);
     {
         for (int j =0; j<n; j++);

     {
  
      if (sparseMatrix[i][j]!=0)
      {
          size++;
          printf("%d", sparseMatrix[i][j]);
          printf("\n");

     }else 
       
       {   num++;

      }}}
      if(size>num)
      {
          printf("\n Its not sparse matrix");

      } else {
          printf("\n Its a sparse martix");
      }
}   



