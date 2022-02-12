 /*#include<stdio.h>
  void main() 
{ 
    int a,b,c,d; 
    printf("Enter the Four Numbers :\n"); 
    scanf("%d %d %d %d",&a,&b,&c,&d); 
    if(a>b) 
    { 
        if(a>c) 
        { 
            if(a>d) 
            {   
                printf("%d is big",a); 
            } 
            else 
            { 
                printf("%d is big",d); 
            } 
        } 
    } 
    else if(b>c) 
        { 
            if(b>d) 
                { 
                    printf("%d is big",b); 
                } 
            else 
                { 
                    printf("%d is big",d); 
                } 
        } 
        else if(c>d) 
            { 
               printf("%d is big",c); 
            } 
        else 
        { 
            printf("%d is big",d); 
        } 
} 
 */
 /*#include<stdio.h>

  void reverarray(int *arr , int n){
      int temp;
      for(int i=0; i<(n/2); i++){
          temp = arr[i];
          arr[i] = arr[n-i-1];
          arr[n-i-1]= temp;
      }
}

    void main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    reverarray(arr , 10);
     for(int i=0; i<10; i++){
         printf(" reverse array : %d\n" , arr[i]);
     }
}
*/
#include<stdio.h>

    void main(){
        int cout;
    void preorder(struct node *root)
    {
        if(root==NULL)
        return;
        cout<< root ->data<<"";
        preorder(root ->left);
        preorder(root ->right);
    }
    void inorder(struct node *root)
    {
        if(root==NULL)
        return;
        inorder(root ->left);
        cout<< root -> data<<"";
        inorder(root ->right);
    }
      void postorder(struct node *root)
    {
        if(root==NULL)
        return;
        postorder(root -> left);
        postorder(root -> right);
        cout<< root -> data<<"";
    }
}