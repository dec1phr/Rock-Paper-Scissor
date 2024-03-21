#include<stdio.h>
#include<stdlib.h>

int main(){
   // 0, 1, 2 ,, 0 == Rock, 1 = Paper, 2 == Scissors.

   int usermove, compmove;

   while(1){
    printf("\n Enter your move: \t 0 For Rock \t 1 For Paper \t 2 for Scissor \t 9 to Exit : ");
    scanf("%d", &usermove);

    compmove = rand() % 3; //0,1,2

    if(usermove == 9){
        exit(1);
    }
   else if(usermove == 0 && compmove == 1){
       printf("\n The Might computer has bested you! \t Paper beats rock" );
   }
   else if(usermove == 0 && compmove == 2){
       printf("\n The have defeated the computer! \t Rock beats scissor");
   }
   else if(usermove == 1 && compmove == 0){
       printf("\n The have defeated the computer! \t Paper Beats Rock");
   }
   else if(usermove == 1 && compmove == 2){
       printf("\n The Might computer has bested you! \t Scissor Beats Paper");
   }
   else if(usermove == 2 && compmove == 0){
       printf("\n The Might computer has bested you! \t Rock beats Scissor");
   }
   else if(usermove == 2 && compmove == 1){
       printf("\n You have defeated the computer! \t Scissor beas paper");
   }
   else {
    printf("SHOOT! It's a draw :) \n");
   }
   
   }


}