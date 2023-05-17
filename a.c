#include <stdio.h>
int main(){
    int hyst[17];
    for (int i = 0; i<17; i++) 
        hyst[i] = 0;
    int leng = 0, c;
    while ( ( c = getchar() ) != EOF ){
        if (c == ' ' || c == '\n' || c == '\t'){
            hyst[leng]++;
            leng = 0;
        }
        else{
            leng++;
        }
    }
    
    for (int i = 1; i<=16; i++){
        putchar('0'+i/10);
        putchar('0'+i%10);
        putchar('\t');
        for (int j = 0; j<hyst[i]; j++){
            putchar('=');
        }
        // printf("%3d ", hyst[i]);
        putchar('\n');
    }
}