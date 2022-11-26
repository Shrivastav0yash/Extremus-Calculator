#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>


void meanvarianceSD()
{
    float x[50];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);	
}

void median()
{
     int array_1[30] = {0};
    int i=0 ,n=0;
    float median=0;

    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
   
    printf("\nEnter the elements for array_1..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("array_1[%d] : ",i);
        scanf("%d",&array_1[i]);
    }
    
     int q=0,j=0 , temp=0,array[30];

    for(q=0 ; q<n ; q++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

    printf("\nThe array after sorting is..\n");
    for(q=0 ; q<n ; q++)
    {
        printf("\narray_1[%d] : %d",q,array[q]);
    }
    
    
    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];
    
    printf("\n\nThe median is : %f\n",median);
}

void mode()
{
	  int i, j, a[20] = {0}, sum = 0, n, t, b[20] = {0}, k = 0, c = 1, max = 0, mode;
    float x = 0.0, y = 0.0;
    printf("\nEnter the limit\n");
    scanf("%d", &n);
    printf("Enter the set of numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j]) {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0)) {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i]) 
            c++;
        }
        if (c == n)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode\t= ");
            for (i = 0; i < k; i++)
                printf("%d ",b[i]);
        }
        printf("\n");
}

void SumAP()
{
	 int a, d, n, i, tn;
     int sum = 0;
 
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &a);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
}

void SumGP()
{
	float a, r, i, last_term, sum = 0;
    int n;
 
    printf("Enter the first term of the G.P. series: ");
    scanf("%f", &a);
    printf("Enter the total numbers in the G.P. series: ");
    scanf("%d", &n);
    printf("Enter the common ratio of G.P. series: ");
    scanf("%f", &r);
    sum = (a *(1 - pow(r, n + 1))) / (1 - r);
    last_term = a * pow(r, n - 1);
    printf("last_term term of G.P.: %f", last_term);
    printf("\n Sum of the G.P.: %f", sum);
}

void log()
{
 double value, result;
 
    printf("User, enter +ve value to compute its natural "
           "logarithm to base \"e\"...\n");
    printf("Logarithm for -ve values \"NOT DEFINED\"!\n");
    scanf("%lf", &value);
 
    /* calling exp() function */
    result = log(value);
 
    printf("Logarithm of \"%lf\": %lf\n", value, result);
 	
}

void addBinary()
{
 long binary1, binary2;
    int i = 0, remainder = 0, sum[20];
 
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);	
}

void addcomplex()
{
	 
struct complex
{
   int realpart, imaginary;
};

struct complex a, b, c;
 
    printf("Enter value of a and b complex number a + ib.\n");
    printf("value of complex number a is = ");
    scanf("%d", &a.realpart);
    printf("value of complex number b is = ");
    scanf("%d", &a.imaginary);
    printf("Enter value of c and d complex number c + id.\n");
    printf("value of complex number c is = ");
    scanf("%d", &b.realpart);
    printf("value of complex number d is = ");
    scanf("%d", &b.imaginary);
    c.realpart = a.realpart + b.realpart;
    c.imaginary = a.imaginary + b.imaginary;
    if (c.imaginary >= 0)
        printf("complex numbers sum is = %d + %di\n", c.realpart, c.imaginary);
    else
        printf("complex numbers sum = %d %di\n", c.realpart, c.imaginary);
}

void sumHP()
{
	 int n;
    float i, sum, term;
 
    printf("1 + 1 / 2 + 1 / 3 +......+1 / n \n");
    printf("Enter the value of n \n");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        term = 1 / i;
        sum = sum + term;
    }
    printf("the Sum of H.P Series is = %f", sum);
}

void fibbonaci()
{
	 int  fib1 = 0, fib2 = 1, fib3, limit, count = 0;
 
    printf("Enter the limit to generate the Fibonacci Series \n");
    scanf("%d", &limit);
    printf("Fibonacci Series is ...\n");
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 2;
    while (count < limit)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
}

int main()
{
	int i,t ;
	printf("\tWELCOME TO EXTREMUS CALCULATOR\n");
	 t :
	printf("\nChoose Any One Options For Calculation\n");
	printf("\n1.Mean,Variance & S.D\t2.Median\n");
	printf("3.Mode                 \t4.Sum of A.P\n");
	printf("5.Sum of G.P           \t6.Sum of H.P\n");
	printf("7.Find LOG             \t8.Add Binary Num\n");
	printf("9.Add Complex Num      \t10.Fibbonaci Series\n");
	printf("11.Exit\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			meanvarianceSD();
			goto t;
		case 2:
			median();
			goto t;
		case 3:
			mode();
			goto t;
		case 4:
			SumAP();
			goto t;
		case 5:
			SumGP();
			goto t;
		case 6:
			sumHP();
			goto t;
		case 7:
			log();
			goto t;
		case 8:
			addBinary();
			goto t;
		case 9:
			addcomplex();
			goto t;
		case 10:
			fibbonaci();
			goto t;
		case 11:
			printf("Bye Bye\n");
			break;
		default:
			printf("You Choose Wrong Choice\n");
			goto t;
			
	}
return 0;
}
