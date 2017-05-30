#include <stdio.h>

int main(){

int input = -1;
int count = 0;

while (input != 0){
    scanf("%d",&input);
    if (input < 0){
        count++;
    }
}
printf("%d",count);
return 0;
}
