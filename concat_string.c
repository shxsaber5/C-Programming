#include<stdio.h>
#include<string.h>

int main(){

    char a[20] = "Hello ";
    char b[20] = "World?";
    
    // Using For Loop:

    // int len_a = strlen(a);
    // int len_b = strlen(b);

    // int result = len_a - len_b

    // for (int i = len_a,j = 0; i < result; i++, j++)
    // {
    //     a[i] = b[j];
    // }
    // a[result] = '\0';
    
    // printf("%d ",result);
    
    
    // Using Libary Fn:
    // concat libary function = strcat(destination,source);g
    strcat(a, b);           //              b   -->  a
    strcat(b, a);           //              a   -->  b

    printf("%s",b);
    return 0;
}