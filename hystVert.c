#include <stdio.h>
int main(){
    int hyst[17];
    for (int i = 0; i<17; i++) 
        hyst[i] = 0;
    int leng = 0, c, maximum = 0;
    while ( ( c = getchar() ) != EOF ){
        if (c == ' ' || c == '\n' || c == '\t'){
            hyst[leng]++;
            if (hyst[leng] > maximum)maximum = hyst[leng];
            leng = 0;
        }
        else{
            leng++;
        }
    }
    for (int i = 1; i<=16; i++){
        printf("%2d \t", i);
    }
    putchar('\n');
    for (int i = 1; i<=maximum; i++){
        for (int j = 1; j<=16; j++){
            if (hyst[j] >= i){
                putchar('=');
                putchar('=');
            }
            putchar('\t');
        }
        putchar('\n');
    }
}