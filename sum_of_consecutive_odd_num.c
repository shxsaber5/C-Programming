// S. Sum of Consecutive Odd Numbers

/*Given two numbers X and Y.
 Print the sum of all odd numbers between them, excluding X and Y.
>>Input

First line contains a number T (1 ≤ T ≤ 10) number of test cases.
Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).
>>Output

Print the sum of all odd numbers between X and Y (excluding X and Y).*/


#include<stdio.h>

int main(){
    

    int t;
    scanf("%d",&t);

    for(int cs = 0; cs < t; cs++){
        // x,y
        int x,y;
        scanf("%d %d",&x,&y);

        if(x>y){
            // If X Bigger Than Y
            int temp = x;
            x = y;
            y = temp;
        }
        
        int sum = 0;

        for(int i = x + 1; i < y; i++){
            
            if(i % 2 != 0){
                // ODD
                sum += i;
            }
        } 
        printf("%d\n",sum);   
    }
    return 0;
}
 