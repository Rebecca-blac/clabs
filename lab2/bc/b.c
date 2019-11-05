#include<stdio.h>
   int main(){
long long input;
   int lb = 0;
   input=getchar();
   while(input %2!= 1){
        putchar(input);
        input=getchar();
    }
printf("%d\n",lb);
return 0;
}
