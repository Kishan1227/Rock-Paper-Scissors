#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int player, comp;
    srand(time(0));
    comp = rand()%3+1;

    printf("Enter your choice\n");
    printf("1. Rock\n 2.Paper\n 3.Scissor\n");
    scanf("%d",&player);

    if(player == comp){
        printf("It's a Draw");
    }else if((player==1 && comp==3) || (player==2 && comp==1) || (player==3 && comp==2)){
        printf("You Win..!\n");
    }else{
        printf("You Loose!, Better Luck Next Time\n");
    }
    printf("Computer choose %d\n",comp);

}