/*. A bank accepts deposits for one year or more and the policy it adopts on interest rate is as
follows:
a) If a deposit is less than Rs. 1,000 and for 2 or more years the interest rate is 5 percent
compounded annually.
b) If a deposit is Rs. 1,000 or more but less than Rs. 5,000 and for 2 or more years the
interest rate is 7 percent compounded annually.
c) If a deposit is more than Rs. 5,000 and is for 1 year or more the interest rate is 8 percent
compounded annually.
d) On all deposits for 5 years or more interest is 10 percent compounded annually
e) On all other deposits not covered by the above conditions the interest is 3 percent
compounded annually.
At the time of withdrawal a customer data is given with the amount deposited and the
number of years the money has been with the bank. Write a program to obtain the money in
the customer’s account and the interest credited at the time on withdrawal.*/

#include <stdio.h>
#include<math.h>

void main()
{
    int years;
    float deposit, rate, amount, interest;
    printf("Enter the deposit amount: ");
    scanf("%f", &deposit);
    printf("Enter the years you want to deposit: ");
    scanf("%d", &years);
    if (deposit<1000 && years>=2)
    {
        rate = 0.05;
    }
    else if (deposit>=1000 && deposit<=5000 && years>=2)
    {
        rate = 0.07;
    }
    else if (deposit>5000 && years>=1)
    {
        rate = 0.08;
    }
    else if (years>=5)
    {
        rate = 0.1;
    }
    else
    {
        rate = 0.3;
    }
    amount = deposit * pow(1+rate,years);
    interest = amount - deposit;
    printf("You have Rs%f in your account.\n",amount);
    printf("Your calculate interest is Rs%f",interest);
    

    
    
}