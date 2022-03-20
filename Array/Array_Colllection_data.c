/*
what is array?
collection of data or item

*/

#include<stdio.h>
#define VALUE 18 /*declaration*/
int main(void){
    float array_one[VALUE];
    for(int j=0;j<VALUE;j++){
        array_one[j]=(j/3);/*assigment operator*/
    }

    /*accessing data of the array
    printf("\n%d\n",array_one[4]);/*value is 15
    printf("\n%d\n",array_one[1]);/*value is 11*/
   printf("%s%13s\n","Element","Value");
    for(int i=0;i<VALUE;i++){
      printf("%4d%17f\n",i,array_one[i]);
    }
    return 0;

}