#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess , Nguess=1;
    srand(time(0));
    number= rand()%100 + 1; // Generates the number between 1 to 100 
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");
        }
        else if (guess< number){
            printf("Higher number please\n");
        }
        else{
            printf("You guess it in %d attempts",Nguess);
            
        }
        Nguess++;
    }while(guess!=number);

    return 0;
    
}