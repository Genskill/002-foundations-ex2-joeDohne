#include<stdio.h>
#include<cs50.h>

int main(void){
    int s1 = get_int("side 1 ");
    int s2 = get_int("side 2 ");
    int s3 = get_int("side 3 ");
    
    int max = s1;
    if(s2 > max) {
        max = s2;
    }
    if(s3 > max) {
        max = s3;
    }
    
    if (s2 == max){
        int temp = s1;
        s1 = s2;
        s2 = temp;
    }
    else if (s3 == max){
        int temp = s1;
        s1 = s3;
        s3 = temp;
    }
    
    if (s1 * s1 == s2 * s2 + s3 * s3)
        printf("Yes");
    else
        printf("No");
    printf("\n");
}