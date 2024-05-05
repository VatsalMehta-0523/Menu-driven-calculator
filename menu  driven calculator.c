#include <stdio.h>

int main(){
    int n1 , n2 , ch;
    printf("enter number1 (integer value) : ");
    scanf("%d",&n1);
    printf("enter number2 (integer value ) : ");
    scanf("%d",&n2);


    printf("\n1 : for addition \n");
    printf("2 : for subtraction \n");
    printf("3 : for multiplication \n");
    printf("4 : for division \n");
    printf("\n\nenter your choice : ");
    scanf("%d",&ch);


    if(ch == 1){
        printf("%d + %d = %d",n1 , n2 , n1+n2);
    }
    else if( ch == 2 ){
        printf("%d - %d = %d",n1 , n2 , n1-n2);
    }
    else if (ch == 3 ){
        printf("%d * %d = %d",n1 , n2 , n1*n2);
    }
    else if ( ch == 4 ){
        printf("%d / %d = %d",n1 , n2 , n1/n2);
    }
    else{
        printf("invalid choice made");
    }
}
