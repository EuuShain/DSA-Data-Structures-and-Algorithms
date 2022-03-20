//insert data to the array scanf function
/*
*/
#include<stdio.h>
#define SIZE 10
int main(void){
    int data[SIZE];
    for(int i=0;i<SIZE;i++){
        if(i==0){
        printf("Please enter data of %dst:",i+1);//user input data //5 //10
        }
        else if(i==1){
             printf("Please enter data of %dnd:",i+1);
        }
        else if(i==2){
             printf("Please enter data of %drd:",i+1);
        }
        else{
             printf("Please enter data of %dth:",i+1);
        }
        scanf("%d",&data[i]);//if i=0 i=1,data[SIZE]={5,10,2,3,4,5,6,7,8,9}
    }
    printf("%s%13s\n","Element","Value");
    for(int j=0;j<SIZE;j++){
        printf("%d%15d\n",j,data[j]);
    }
    return 0;
}