//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.1a
 * Complete the following for loop in C to print all numbers divisible by 7 below 100.
 */
     // complete your code here
    int i,n=7,a=100;
    printf("Numbers divisible by 7 are:\n");
    for(i=1;i<=a;i++)
    {
        if(i%7==0)
        {
        printf("%d\n",i);
        }
    }
    return 0;
}