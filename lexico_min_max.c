#include<stdio.h>
#include<string.h>

int main(){

    char s1[10001],s2[10001],s3[10001];

    scanf("%s %s %s",s1,s2,s3);

    char min[10001],max[10001];
    strcpy(min, s1);
    strcpy(max, s1);

    
    if(strcmp(s2, max) > 0){
        strcpy(max, s2);
    }
    else if(strcmp(s2, min) < 0){
        strcpy(min, s2);
    }
    
    
    if(strcmp(s3, max) > 0){
        strcpy(max,s3);
    }
    else if(strcmp(s3, min) < 0){
        strcpy(min, s3);
    }
    

    printf("%s\n%s", min, max);
    

    return 0;
}