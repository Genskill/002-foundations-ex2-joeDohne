#include<stdio.h>
#include<cs50.h>

int main(void){
    int type = get_int("Enter type of pattern (1 or 2) ");
    int rows = get_int("Number of rows");
    

    for (int i = rows; i > 0; i--){
        for (int j = 0; j < rows; j++){
            if (type == 1){
                if (j < i)
                    printf("#");
            }
            else
                if (j >= i-1)
                    printf("#");
                else
                    printf(" ");
        }
        printf("\n");
    }
    
    
    
}