#include<stdio.h>
#include<stdlib.h>
#include<time.h>


    void main(){

      int number , guess , nguess=1;
      srand(time(0));
      number = rand()%50 + 1;

      do{
          printf("Guess the number between 1 to 50\n");
          scanf("%d", &guess);
          if(guess>number){
              printf("Lower your number\n");
          }
          else if (guess<number){
              printf("Higher your number\n");
          }
          else {
              printf("You guessed it in %d attempt", nguess);
        
          }
        nguess++;
      }while(guess!=number);


}