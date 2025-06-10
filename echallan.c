/*	BHAVYA R SHAH
	ECHALLAN WITH SWITCH CASE
	10-June-2025
*/
#include<stdio.h>
void main(){
    int count=0,tca=0;
    char choice,choice1,choice2,choice3,choice4;

    printf("Do you wear helmet?\nY.Yes\nN.No\n");
    scanf(" %c",&choice);
    switch(choice){
        case 'N' :
        case 'n': 
            tca=tca+500;
            printf("You didnt wear Helmet\n");
            count++;
        break;
    }
     printf("\nDo you jump signal?\nN.No\nY.Yes\n");
    scanf(" %c",&choice1);
    switch(choice1){
        case 'Y' :
        case 'y': 
            tca=tca+1000;
            printf("You jumped the signal..\n");
            count++;
        break;
    }
    printf("\nWere you speeding?\nN.No\nY.Yes\n");
    scanf(" %c",&choice2);
    switch(choice2){
        case 'y' :
        case 'Y': 
            tca=tca+1500;
            printf("You`re Speeding\n");
            count++;
        break;
    }
     printf("\nWere you druked while Driving?\n1.No\n2.Yes\n");
    scanf(" %c",&choice3);
    switch(choice3){
        case 'y' :
        case 'Y': 
            tca=tca+3000;
            printf("You`re Drunked\n");
            count++;
        break;
    }
    printf("\nDo you have licence?\nY.Yes\nN.No\n");
    scanf(" %c",&choice4);
    switch(choice4){
        case 'N' :
        case 'n': 
            tca=tca+5000;
            printf("You dont have licence\n");
            count++;
        break;
    }
printf("\t\t\tYOURE CHALLAN AMOUNT IS %d",tca);
}