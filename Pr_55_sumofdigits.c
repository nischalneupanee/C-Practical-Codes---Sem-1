/*A five digit positive integer is entered through the keyboard; write program using function to
calculate the sum of the digits of the number. The function should receive the integer from
main () and output also be printed through main ().*/

#include <stdio.h>
int sum(int n)
{
    int add = 0,rem;
    while(n>0)
    {
        rem = n % 10;
        add += rem;
        n /=10;
    }
    return add;
}
void main()
{
    int num,result; 
    printf("Enter the number: \n");
    scanf("%d",&num);
    result = sum(num);
    printf("Result = %d",result);
}