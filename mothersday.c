
#include<stdio.h>
int i,j;
 
 void delay(){
     for(i = 0; i < 10000; i++){
         for (j = 0; j < 100; j++)
         {}
         
     }
     
 }
 int main (){
      FILE *ptr;
      char c;
      ptr =fopen("Maa.txt","r");
      c=fgetc(ptr);
      printf("\n");

    while (c!=EOF){
        delay();
        printf("%c",c);
        c=fgetc(ptr);
    }
    int i=0;
    while (i<100){
        system("COLOR E");
        system("COLOR 5");
        system("COLOR C");
        system("COLOR 9");
    }
    return 0;
}
	
