//1 SUM of odd and even
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//function prototype
void sum_of_even_odd(int n);

int main()
{
   int n;
   scanf("%d",&n);
   if(n>0)
   {
       //function call
       sum_of_even_odd(n);
   }
    else
        printf("Invalid input\n");
    return 0;
}

//function definition
void sum_of_even_odd(int n)
{
    int i=1, esum=0, osum=0, num;
    while(i<=n)
    {
        scanf("%d",&num);
        if (num%2 ==0)
            esum = esum+num;
        else
            osum = osum+num;
        i++;
    }
    printf("Sum of even numbers=%d\n",esum);
    printf("Sum of odd numbers=%d\n",osum);
}

////////////////////
// 2 average of numbers
#include<stdio.h>
  int main()
  {
      int m1,m2,m3,m4;
      float average_marks;
      printf("enter marks for 4 test \n");
      scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
      average_marks=(m1+m2+m3+m4)/4.0;
      if(average_marks>=80 && average_marks<=100)
         {
          printf("average_marks is %f ",average_marks);
          printf("grade is distinction");
          }

          else if (average_marks>=60 && average_marks<80)
          {
              printf("average_marks is %f ",average_marks);
              printf("grade is first class ");
          }
           else if(average_marks>=50 && average_marks<60)
           {
               printf("average_marks is %f ",average_marks);
               printf("grade is second class ");
           }
           else if(average_marks>=40 && average_marks<50)
           {
               printf("average_marks is %f ",average_marks);
               printf("grade is pass ");
           }
           else
           {
               printf("average marks is %f ",average_marks);
               printf("grade is fail ");
               return 0;
           }

  }
/////////////////////////////////////
// 3 leap year
#include <stdio.h>
int main()
{
     int year;
     printf("enter the year\n");
     scanf("%d",&year);
     if (year%400==0||year%4==0&&year%100!=0)
        printf("%d is leap year\n",year);
     else
        printf("%d is not a leap year\n",year);
        return 0;

}
//////////////////////////////////////
//4 magic numbres
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 //function prototype
int magic_num(int num);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,sum;
    scanf("%d",&num);
    if (num>9)
    {
        //function call
        sum=magic_num(num);
        if(sum%9 == 0)
        {
            printf("%d is magic number for 9\n",num);
        }
        else
        {
            printf("%d is not a magic number for 9\n",num);
        }

    }
    else
        printf("Number should be greater than 9\n");
    return 0;
}
//function definition
int magic_num(int num)
{
 int sum;
 sum=num%9;
  return sum;
}
////////////////////////////////
// 05 Develop a modular C program to read an array and display an array of size N.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

void read_array(int array[MAX],int N);
void display_array(int array[MAX],int N);

int main() {
      int N,array[MAX];
     scanf("%d",&N);
    if (N>0)
    {
         read_array(array,N);
         display_array(array,N);
    }
    else
        printf("Elements should be more than 0.");
    return 0;
}
void read_array(int array[MAX],int N)

{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
}
    void display_array(int array[MAX],int N)
    {
        int i;
    for(i=0;i<N;i++)
    {
        printf("%d " ,array[i]);
    }
    }
////////////////
//06 Develop a modular program in c to read an array and find out highest number in an array.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
void read_array(int array[MAX],int N);
void display_array(int array[MAX],int N);
int highest_number_array(int array[MAX],int N);

int main() {
         int N,array[MAX],max;
          scanf("%d",&N);
         if (N>0)
         {
             read_array(array,N);
             display_array(array,N);
            max= highest_number_array(array,N);
             printf("\nHighest number in array is %d.",max);
         }
    else
    {
        printf("Array cannot be less than 0.");
    }

    return 0;

}
void read_array(int array[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
}
void display_array(int array[MAX],int N)
 {
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ", array[i]);
    }
}
int highest_number_array(int array[MAX],int N)
{
    int i;
    int  max=0;

    for(i=0;i<N;i++)
    {
        if(max<array[i])
        {
            max = array[i];

        }
    }
    return max;

}
////////////////////////////////
//07 Develop a modular proram in c to find out the lowest element in an array.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MIN 100
void read_array(int array[MIN],int N);
void display_array(int array[MIN],int N);
int lowest_number_array(int array[MIN],int N);
int main() {
          int N,min;
          int array[MIN];
         scanf("%d",&N);
        if (N>0)
        {
            read_array(array,N);
            display_array(array,N);
            min=lowest_number_array(array,N);
             printf("\nLowest number in array is %d.\n",min);
        }
        else
            printf("Array should not be less than 0.");
    return 0;
}
void read_array(int array[MIN],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d ",&array[i]);
    }
}
void display_array(int array[MIN],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
       printf("%d ",array[i]);
    }
}
int lowest_number_array(int array[MIN],int N)
{
    int i;
    int min=99999;
    for(i=0;i<N;i++)
    {
     if (min>array[i])
        min=array[i];

    }
    return min;
}
///////////////////////////
//08 Develop a modular program in c to search an number in an array of size n.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

void read_array(int num[MAX], int n);
//void display_array(int num[MAX], int n);
int linear_search(int num[MAX], int n, int key);

int main()
{
    int n,key,num[MAX];
    int status;
    scanf("%d ",&n);
    if(n>0)
    {
        read_array(num,n);
        scanf("%d ",&key);
        //display_array(num,n);
        status = linear_search(num,n,key);
        if (status==1)
        {
            printf("\nSearch successfull. %d found in list.\n",key);
        }
        else
        {
            printf("\nSearch unsuccessfull. %d not found in list.\n",key);

        }
    }
    else
        printf("array should be greater than 0.");
    return 0;
}
void read_array(int num[MAX], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&num[i]);
    }
}
 int linear_search(int num[MAX],int n, int key)
 {
     int i,status=0;
     for(i=0;i<n;i++)
     {
         if (key == num[i])
         {
             status = 1;
             break;
         }
     }
    return status;
 }
 /////////////////
 // 09 SELECTION OF PLAYERS OF TOP 11 OUT OF 20 PLAYERS.
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
void read(float arr[MAX],int N);
void display(float arr[MAX],int N);
int main() {
    float arr[MAX];
    int N;
    scanf("%d",&N);
    if(N>=11)
    {
        read(arr,N);
        display(arr,N);

    }
    else
        printf("Number of players should be atleast 11.\n");


    return 0;
}
void read(float arr[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
        scanf("%f",&arr[i]);
}
void display(float arr[MAX],int N)
{
    int i,j;
    float temp;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Top 11 batting average players:\n");
    for(i=0;i<11;i++)
        printf("%0.2f ",arr[i]);
}
///////////////////////////
//10 Write a modular C program to determine the largest number from a group of N contestants.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

void read_votes(int num[MAX],int n);
int compare_votes(int num[MAX],int n);

int main() {
       int n,num[MAX];
    int high;
    scanf("%d ",&n);
    if (n>0&&n<100)
    {
        read_votes(num,n);
        high=compare_votes(num,n);
        printf("Winner among contestants with maximum votes = %d\n",high);
    }
    else
        printf("Cannnot determine winner.");
     return 0;
}
void read_votes(int num[MAX],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&num[i]);
    }
}
int compare_votes(int num[MAX],int n)
{
    int i;
    int high=0;
    for(i=0;i<n;i++)
    {
        if (high<num[i])
            high = num [i];
    }
    return high;
}
////////////////////////////
//11 PERCENTAGE OF STUDENT
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
void marks_of_student(int array[MAX],int N);
void display_percentage(int array[MAX],int N);


int main() {
        int N;
        int array[MAX],i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d ",&N);
    if (N>=6&&N<=10)
    {
        marks_of_student(array,N);
        for(i=0;i<N;i++)
        printf("%d ",array[i]);
        display_percentage(array,N);
    }
    else
        printf("Subjects cannot be less than 6 and more than 10.");

    return 0;
}
void marks_of_student(int array[MAX],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d ",&array[i]);
    }
}
void display_percentage(int array[MAX],int N)
{
    int sum=0,i;
    int high=0,total;
    float percentage;
    for(i=0;i<N;i++)
    {
        sum=sum+array[i];
    }
    total=N*100;
    percentage=((float)sum/total*100);
    for(i=0;i<N;i++)
    {
        if (high<array[i])
            high=array[i];
    }
    printf("\nPercentage: %.2f ",percentage);
    printf("\nHighest marks: %d ",high);

}
///////////////////
//12 READ AND DISPLAY IN 2D ARRAY
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW 10
#define col 10

void read_2d_array(int num[ROW][col],int m,int n);
void display_2d_array(int num[ROW][col],int m,int n);

int main() {
          int m;
          int n;
           int num[ROW][col];
    scanf("%d%d",&m,&n);
        if (n>0 && m>0)
        {
            read_2d_array(num,m,n);
            display_2d_array(num,m,n);
        }
       else
       {
           printf("Rows and columns should be more than 0.\n");
       }
    return 0;
}
 void read_2d_array(int num[ROW][col],int m,int n)
 {
     int i,j;
     for (i=0;i<m;i++)
     {
         for (j=0;j<n;j++)
         {
             scanf("%d ",&num[i][j]);
         }
     }
 }

void display_2d_array(int num[ROW][col],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
}
////////////////
//13 EEVEN OR ODD
#include<stdio.h>
int main()
{
    int i;
    while(1)
    {


    printf("enter he value to check the value is odd or even\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("number entered is even\n");
    }
    else
    {
        printf("numder entered is odd \n");
    }
    }
}
/////////////
//14 SWAPING OF NUMBERS
#include<stdio.h>
int main ()
{
    int i,j;
    printf("enter the value of i and j to be swaped");
    scanf("%d%d",&i,&j);
    printf("vlaue of i =%d j=%d\n",i,j);
    int temp;
    temp=i;
    i=j;
    j=temp;
    printf("vlaue of i=%d,j=%d after the swap",i,j);
}
/////////////////////////
//15 CALCULATOR USING SWITCH
#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(1)
    printf("enter the value of numbers");
    scanf("%d%d",&a,&b);
    printf("enter the 1 for addiction ,2 for subtraction,3 for multiplication,4 for division ");
    scanf("%d",&c);
    switch(c)
    {
        case 1: d=a+b;
        printf("%d",d);
        break;
        case  2: d=a-b;
        printf("%d",d);
        break;
        case 3: d=a*b;
        printf("%d",d);
        break;
        case 4:d=a%b;
        printf("%d",(float)d);
        break;
        default:printf("not valid oprator ");
}
    }

////////////
//16 DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the value of the array numbers: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }free(a);

}
/////////
//17 CONVERSION OF TEMP TO FERNAITE;
   #include<stdio.h>
 void degree(int temp);
 int main()
 {
     int c;
     printf("enter the temperature in degree\n");
     scanf("%d",&c);
     degree(c);
     return 0;

 }
  void degree(int temp)
  {
switch(temp)
      {
      case 95 ... 105 :printf("water",temp);
                break;
        case 352 ... 362 : printf("mercury",temp);
               break;
       default : printf("no",temp);
                  break;
                        }
  }
  ///////////////
//18 ADDITION OF NUMBERS
 #include<stdio.h>
 //function prototype
   int addtion(int num1,int num2);
int main()
   {
       int num1,num2,num3,sum;
       scanf("%d%d",&num1,&num2);
       //function call for addition function
       sum =addition (num1,num2);
       printf("sum is %d \n",sum);
       return 0;
   }//end of main
   //function defenation
     int addition(int num1,int num2)
     {
         int sum;
         sum=num1+num2;
         return sum;
     }
///////////////////
////19 BOILING POINNT
#include<stdio.h>
void substance(float b_point);
int main()
{
 float b_point;
 printf("Enter the boiling point\n");
 scanf("%f",&b_point);
 substance(b_point);
 return 0;
}
void substance(float b_point)
{
 float percent;
 percent=b_point*0.05;
 printf("percentage=%f\n",percent);
 if(b_point>=100-percent && b_point<=100+percent)
 printf("Substance is Water \n");
 else if(b_point>=357-percent && b_point<=357+percent)
 printf("Substance is Mercury \n");
 else if(b_point>=1187-percent && b_point<=1187+percent)
 printf("Substance is Copper \n");
 else if(b_point>=2193-percent && b_point<=2193+percent)
 printf("Substance is Silver \n");
 else if(b_point>=2660-percent && b_point<=2660+percent)
 printf("Substance is Gold \n");
 else
printf("substance is unknown\n");
} 
////////////////////////////
//20 MAXIMUM OF 3 NUMBERS
#include<stdio.h>
int main()
  {
      int num1,num2,num3;
      printf("enter any 3 number\n");
      scanf("%d%d%d",&num1,&num2,&num3);
      if(num1==num2&& num2==num3)
      {
       printf("all 3 number are same\n");
      }
      else if  (num1 > num2)
      {
        if(num1>num3)
        printf("%d is maximum\n",num1);
        else
        printf("%d is maximum\n",num3);
      }
        else
        {
          if (num2>num3)
          printf("%d is maximum\n",num2);
          else
          printf("%d is maximum\n",num3);
        }
        return 0;
  }
////////////////
//21 EARTH QUAKEMAGNITUDE
#include<stdio.h>
void earth_quake(float n);
int main()
{
 float n;
 printf("Enter ritcher scale number \n");
 scanf("%f",&n);
 earth_quake(n);
 return 0;
}
void earth_quake(float n)
{
 if(n<5.0)
 printf("Little or no damage\n");
 else if(n<5.5)
 printf("Some damage\n");
 else if(n<6.5)
 printf("Serious damage: walls may crack or fall\n");
 else if(n<7.5)
 printf("Disaster: houses and buildings may collapse\n");
 else
 printf("Catastrophe: most buildings destroyed\n");
}
////////////////
// 22 FIND SUM USING POINTER
#include<stdio.h>
#include<stdlib.h>
void read_array(int *ptra,int *pn)
{
    int i;
    for(i=0;i<*pn;i++)
    {
        scanf("%d",&ptra);
        ptra++;
    }
}
void display_array(int *ptra,int *pn)
{
    int i;
    for(i=0;i<*pn;i++)
    {
        printf("%d\t",*ptra);
        ptra++;
    }
}
int sum_array(int*ptra,int *pn)
{
    int i,sum=0;
    for(i=0;i<*pn;i++)
    {
        sum+=*ptra;
        ptra++;
    }
    return sum;
}
int main()
{
int n,sum,*pm;
int *ptra=NULL,*pn=NULL;
pn=&n;
printf("ENTER N VALUES\n");
scanf("%d",pn);
ptra=(int*) malloc(n*sizeof(int));
if(ptra==NULL)
    printf("memory not allocated");
else
{
    read_array(ptra,pn);
    display_array(ptra,pn);
    sum=sum_array(ptra,pn);
    printf("sum is %d \n",sum);
    printf("enter array element \n",sum);
}
free(ptra);
return 0;
}
////////////
//23 FIND MAX WITH POINTER
#include<stdio.h>
#include<stdlib.h>
void read_array(int *ptra,int *pn)
{
    int i;
    for(i=0;i<*pn;i++)
    {
        scanf("%d",&ptra);
        ptra++;
    }
}
void display_array(int *ptra,int *pn)
{
    int i;
    for(i=0;i<*pn;i++)
    {
        printf("%d\t",*ptra);
        ptra++;
    }
}
int* find_max(int *ptra,int *pn)
{
    int i,max=0,*pmax=NULL;
    for(i=0;i<*pn;i++)
    {
        if (max<*ptra)

        {
            max=*ptra;
            pmax=ptra;
        }
    }
    return pmax;
}
int main()
{
int n,sum,*pm;
int *ptra=NULL,*pn=NULL;
pn=&n;
printf("ENTER N VALUES\n");
scanf("%d",pn);
ptra=(int*) malloc(n*sizeof(int));
if(ptra==NULL)
    printf("memory not allocated");
else
{
    read_array(ptra,pn);
    display_array(ptra,pn);
    pm=find_max(ptra,pn);
    printf("at addreess %x maximum element is %d\n",pm,*pm);

}

free(ptra);
return 0;
}
//////////
//24 Reverse an Integer
#include <stdio.h>
int main()
{
    int n, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", reverse);
return 0;
}
//////////
//25 Check Positive or Negative
#include <stdio.h>
int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0)
    {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
return 0;
    }
/////////////
//26 if a number is prime or not in C
#include <stdio.h>
int main() {
    int n = 17, i, isPrime = 1;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}
///////////////////
//27 find the Fibonacci series up to n terms in C
#include <stdio.h>
int main() {
    int n = 10, i, t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series up to %d terms: \n", n);
    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}
///////////////////////
//28 FACTORIAL IN C
#include<stdio.h>
void factorial (int n);
int main()
{
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
void factorial(int n)
{
    int i=1;
    int product=1;
    while(i<=n)
    {
        product=product*i;
        i++;
    }
    printf("Factorial of number is %d\n",product);
}
//////////////////
//29 PALINDROME SEQUENCE
#include<stdio.h>
int main(){
    int num,tem,rem,sum=0;
printf("Enter a Number : ");
scanf("%d",&num);
tem=num;
do{
  rem=num%10;
  sum=sum*10+rem;
  num=num/10;
}while(num!=0);
if(tem==sum)
printf("\n%d is palindrome",sum);
else
    printf("not palindrome");
}
////////////////
//30 pyramid pattern printing
#include <stdio.h>
int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
return 0;
}


