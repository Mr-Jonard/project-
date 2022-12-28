#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void gotoxy(int,int);
int main()
{
 int choice_int;
 clrscr();
 textcolor(4);
 gotoxy(37,5);
 printf("Main menu\n\n");
 gotoxy(30,8);
 printf("[1] Display hello world\n");
 gotoxy(30,9);
 printf("[2] Arithmetic operators\n");
 gotoxy(30,10);
 printf("[3] Decision making statements\n");
 gotoxy(30,11);
 printf("[4] Loops\n");
 gotoxy(30,12);
 printf("[5] Arrays\n");
 gotoxy(30,13);
 printf("[0] Exit\n\n");

 gotoxy(30,15);
 printf("Input: ");
 scanf("%d",&choice_int);

 while(choice_int != 1 && choice_int != 2 && choice_int != 3 && choice_int != 4 && choice_int != 5 && choice_int != 0)
 {
  textcolor(10);
  gotoxy(30,16);
  printf("Invalid input! Try again: ");
  fflush(stdin);
  gotoxy(30,17);
  printf("Input: ");
  scanf("%d",&choice_int);
 }

 switch (choice_int)
 {
  case 1:
  submenu1();
  break;

  case 2:
  submenu2();
  break;

  case 3:
  submenu3();
  break;

  case 4:
  submenu4();
  break;

  case 5:
  submenu5();
  break;

  case 0:
  return 0;
 }

 return 0;
}

submenu1()
{
 char choice_char;
 clrscr();
 textcolor(14);
 gotoxy(17,10);
 printf("This code prints hello world using printf statement.\n\n");
 gotoxy(37,13);
 printf("Hello world!");
 gotoxy(17,16);
 printf("Press any key to return to main menu: ");
 getch();
 main();
 return 0;
}

submenu2()
{
int con,mod;
char choice_char;
float n1,n2;
clrscr();
textcolor(1);
gotoxy(37,5);
printf("OPERATOR\n");
gotoxy(33,8);
printf("[1] Addition\n");
gotoxy(33,9);
printf("[2] Subtraction\n");
gotoxy(33,10);
printf("[3] Multiplication\n");
gotoxy(33,11);
printf("[4] Division\n");
gotoxy(33,12);
printf("[5] Modulos\n");
gotoxy(33,13);
printf("[0] Return\n");
gotoxy(33,15);
printf("Input: ");
scanf("%d",&con);


 while(con != 1 && con !=2 && con != 3 && con !=4 && con != 5 && con != 0)
 {
  gotoxy(33,16);
  printf("Invalid input!try again: ");
  fflush(stdin);
  gotoxy(33,17);
  printf("Input: ");
  scanf("%d",&con);
 }


 if(con == 0)
 {
  main();
  return 0;
 }


 clrscr();
 textcolor(3);
if(con == 1){
 gotoxy(37,5);
 printf("Addition");
}
else if(con == 2){
 gotoxy(35,5);
 printf("Subtraction");
}
else if(con == 3){
 gotoxy(35,5);
 printf("Multiplication");
}
else if(con == 4){
 gotoxy(37,5);
 printf("Division");
}
else if(con == 5){
 gotoxy(37,5);
 printf("Modulos");
}

gotoxy(30,8);
printf("Enter first number: ");
scanf("%f",&n1);
gotoxy(30,9);
printf("Enter second number: ");
scanf("%f",&n2);

 if(con == 1){
   gotoxy(37,12);
   printf("Sum = %.2f",n1 + n2);
  }
  else if(con == 2){
   gotoxy(32,12);
   printf("Difference = %.2f",n1 - n2);
  }
  else if(con == 3){
   gotoxy(32,12);
   printf("Product = %.2f",n1 * n2);
  }
 else if(con == 4){
   float quot = n1 / n2;
   gotoxy(32,12);
   printf("Quotient = %.2f", quot);
  }
  else if(con == 5){
   mod = (int) n1 % (int) n2;
   gotoxy(37,12);
   printf("Modulo = %d",mod);
  }


gotoxy(25,14);
printf("Return to main menu? Yes[y], No[n]: ");
scanf("%s",&choice_char);

while(choice_char != 'y' && choice_char != 'n'&&choice_char!='Y'&&choice_char!='N'){

   gotoxy(30,15);
   printf("Invalid input! Try again: ");
   scanf("%s",&choice_char);
}

if(choice_char == 'y' || choice_char == 'Y'){
  main();
  return 0;
}
 else if(choice_char == 'n' || choice_char == 'N'){
  submenu2();
  return 0;
 }

return 0;
}


submenu3()
{
int con;
char choice_char;
clrscr();
 textcolor(2);
gotoxy(30,5);
printf("Decision Making Statements");
gotoxy(33,8);
printf("[1] If ");
gotoxy(33,9);
printf("[2] if-else");
gotoxy(33,10);
printf("[3] if-else if-else");
gotoxy(33,11);
printf("[4] Nested if");
gotoxy(33,12);
printf("[5] Switch-case");
gotoxy(33,13);
printf("[0] Return");

gotoxy(33,15);
printf("Input: ");
scanf("%d",&con);

 while(con!=1&&con!=2&&con!=3&&con!=4&&con!=5&&con!=0)
 {
  gotoxy(33,16);
  printf("Invalid input! Try again: ");
  fflush(stdin);
  scanf("%d",&con);
 }


if(con == 0)
{
 main();
 return 0;
}

if(con == 1)
{
 int number;
 clrscr();
 gotoxy(35,5);
 printf("If Statement");

 gotoxy(30,8);
 printf("Enter number: ");
 scanf("%d",&number);

 if(number > 0)
 {
  gotoxy(30,11);
  printf("you entered: %d",number);
 }
 gotoxy(30,14);
 printf("The if statement is easy");
}


else if(con == 2)
{
int number;

clrscr();
gotoxy(34,5);
printf("If-else Statement");
 gotoxy(30,8);
printf("Enter number: ");
scanf("%d",&number);

 gotoxy(30,11);
 if(number % 2 == 0)
 {
  printf("%d is an Even integer.",number);
 }
 else
 {
  printf("%d is an Odd integer.",number);
 }

}
else if(con == 3)
{
 int var1,var2;
 clrscr();
 gotoxy(32,5);
 printf("if-else-if Statement");

 gotoxy(32,8);
 printf("Enter first number: ");
 scanf("%d",&var1);
 gotoxy(32,9);
 printf("Enter second number: ");
 scanf("%d",&var2);

 gotoxy(32,11);
 if(var1 != var2)
 {
  printf("%d is not equal to %d",var1,var2);
 }
 else if(var1 > var2)
 {
  printf("%d is greater than %d",var1,var2);
 }
 else if(var1 < var2)
 {
  printf("%d is less than %d",var1,var2);
 }
 else if(var1 == var2)
 {
  printf("%d is equal to %d",var1,var2);
 }

}

else if(con == 4)
{
 int var1,var2;
 clrscr();
 gotoxy(31,5);
 printf("nested if Statements");

 gotoxy(30,8);
 printf("Enter first number: ");
 scanf("%d",&var1);
 gotoxy(30,9);
 printf("Enter second number: ");
 scanf("%d",&var2);

 gotoxy(30,11);
 if(var1 >= var2)
 {
   if(var1 == var2)
   {
   printf("%d is equal to %d",var1,var2);
   }
   else
   {
    printf("%d is greater than %d",var1,var2);
   }
 }
 else
 {
  printf("%d is less than %d",var1,var2);
 }
}
else if(con == 5)
{
 int week;
 clrscr();
 gotoxy(30,5);
 printf("Switch-case statement");

 gotoxy(30,8);
 printf("Enter day number(1-7): ");
 scanf("%d",&week);


 while(week!=1&&week!=2&&week!=3&&week!=4&&week!=5&&week!=6&&week!=7)
 {
  gotoxy(30,16);
  printf("Invalid input! try again.");
  fflush(stdin);
  gotoxy(28,17);
  printf("Input: ");
  scanf("%d",&week);
 }

 switch(week)
 {
  case 1:
  gotoxy(35,13);
  printf("Monday");
  break;

  case 2:
  gotoxy(35,13);
  printf("Tuesday");
  break;

  case 3:
  gotoxy(35,13);
  printf("Wednesday");
  break;

  case 4:
  gotoxy(35,13);
  printf("Thursday");
  break;

  case 5:
  gotoxy(35,13);
  printf("Friday");
  break;

  case 6:
  gotoxy(35,13);
  printf("Saturday");
  break;

  case 7:
  gotoxy(35,13);
  printf("Sunday");
  break;
 }

}

 gotoxy(30,20);
 printf("Return to main menu? Yes[y] No[n] ");
 scanf("%s",&choice_char);

 while(choice_char!='y'&&choice_char!='Y'&&choice_char!='n'&&choice_char!='N')
 {
 gotoxy(30,21);
 printf("Invalid input! try again: ");
 fflush(stdin);
 scanf("%s",&choice_char);
 }

 if(choice_char == 'y' || choice_char == 'Y')
 {
  main();
  return 0;
 }
 else if(choice_char == 'n' || choice_char == 'N')
 {
  submenu3();
  return 0;
 }


return 0;
}

submenu4(){
char choice_char;
int con;
clrscr();
 textcolor(3);
 gotoxy(37,5);
 printf("Loops");
 gotoxy(33,8);
 printf("[1] For loop");
 gotoxy(33,9);
 printf("[2] While loop");
 gotoxy(33,10);
 printf("[3] do...while loop");
 gotoxy(33,11);
 printf("[0] Return");

 gotoxy(33,13);
 printf("Input: ");
 scanf("%d",&con);

 while(con!=1&&con!=2&&con!=3&&con!=0)
 {
  gotoxy(30,14);
  printf("Invalid input! Try again: ");
  fflush(stdin);
  scanf("%d",&con);
 }


 if(con == 1)
 {
  int num,i,z=10;
  clrscr();
  gotoxy(36,6);
  printf("For loop");
  gotoxy(22,8);
  printf("This loop displays a multiplication table.");
  gotoxy(32,9);
  printf("Enter a number: ");
  scanf("%d", &num);

  for (i = 1; i <= 10; i++) {
    gotoxy(35,z);
    printf("%d x %-2d = %-4d\n", num, i, num * i);
    z=z+1;
  }
 }

 else if(con == 2)
 {
  int sum=0,num,i=0;
  clrscr();
  gotoxy(37,5);
  printf("while loop");
  gotoxy(7,8);
  printf("C program that determines the sum of n natural numbers using while loop");

  gotoxy(30,11);
  printf("Enter the natural number: ");
  scanf("%d",&num);

  while(i<=num)
  {
  sum = sum + i;
  i++;
  }
  gotoxy(25 ,14);
  printf("Sum of first %d natural number is : %d", num, sum);
 }
 else if(con == 3)
 {
  long i=1,f=1,n;
  clrscr();
  gotoxy(35,8);
  printf("Do...while loop");
  gotoxy(15,12);
  printf("This code gives you the factorial of your inputted number.");

  gotoxy(35,15);
  printf("Enter value: ");
  scanf("%ld",&n);

  do
  {
  f = f * i;
  i++;
  }while(i<=n);

  gotoxy(38,17);
  printf("%ld! = %ld",n,f);

 }
 else if(con == 0)
 {
  main();
  return 0;
 }



gotoxy(25,20);
printf("Return to main menu? Yes[y] No[n] ");
scanf("%s",&choice_char);

while(choice_char!='y'&&choice_char!='Y'&&choice_char!='n'&&choice_char!='N')
 {
  gotoxy(30,21);
  printf("Invalid input! Try again: ");
  fflush(stdin);
  scanf("%s",&choice_char);
 }

 if(choice_char == 'y' || choice_char == 'Y'){
  main();
  return 0;
 }
 else if(choice_char == 'n' || choice_char == 'N'){
  submenu4();
  return 0;
 }

 return 0;
}


submenu5()
{
 char choice_char;
 int con;
 clrscr();

 textcolor(13);
 gotoxy(37,5);
 printf("Arrays");
 gotoxy(30,8);
 printf("[1] Inputted array");
 gotoxy(30,10);
 printf("[2] Not inputted array");
 gotoxy(30,12);
 printf("[0] Return");

 gotoxy(30,14);
 printf("Input: ");
 scanf("%d",&con);

 while(con!=0&&con!=1&&con!=2)
 {
  gotoxy(30,18);
  printf("Invalid input! Try again: ");
  fflush(stdin);
  scanf("%d",&con);
 }

 if(con == 0)
 {
  main();
  return 0;
 }
 else if(con == 1){
   int arr[100],i,n,max,min;
   int q=7;
   clrscr();

   gotoxy(33,3);
   printf("Inputted array size.\n");
   gotoxy(0,5);
   printf("finds max and min values in an array by asking for size and inputting values");

   gotoxy(34,6);
   printf("Enter array size: ");
   scanf("%d",&n);

   for(i = 0;i<n;i++)
   {
    gotoxy(35,q);
    printf("Enter array %d: ",i+1);
    scanf("%d",&arr[i]);
    q=q+1;
   }
 max = arr[0];
 min = arr[0];

  for(i=0;i<n;i++)
  {
   if(max < arr[i])
   {
    max = arr[i];
   }
   else
   {
    min = arr[i];
   }
  }
  q=q+1;
  gotoxy(35,q);
  printf("Max number: %d",max);
  q=q+1;
  gotoxy(35,q);
  printf("Min number: %d",min);
 }

 else if(con == 2)
 {
  int i,change,replace,arr[5] = {10,20,30,40,50},q=6,c=15;
  clrscr();
  gotoxy(30,4);
  printf("Not inputted array size.)");
  gotoxy(34,5);
  printf("Array values: ");
  for(i=0;i<5;i++)
  {
   gotoxy(40,q);
   printf("%d",arr[i]);
   q=q+1;
  }

  gotoxy(30,12);
  printf("Input value to change: ");
  scanf("%d",&change);
  gotoxy(30,13);
  printf("Input number to replace: ");
  scanf("%d",&replace);

  for(i=0;i<5;i++)
  {
   if(change == arr[i])
   {
    arr[i] = replace;
   }
  }
  gotoxy(33,14);
  printf("Updated values: ");
  for(i=0;i<5;i++)
  {
   gotoxy(40,c);
   printf("%d",arr[i]);
   c=c+1;
  }
 }
gotoxy(25,22);
printf("Return to main menu? Yes[y] No[n] ");
scanf("%s",&con);

while(con!='y'&&con!='Y'&&con!='n'&&con!='N')
{
 gotoxy(27,23);
 printf("Invalid input! Try again: ");
 fflush(stdin);
 scanf("%s",&con);
}

if(con == 'y' || con == 'Y')
{
 main();
 return 0;
}
else if(con == 'n' || con == 'N')
{
 submenu5();
 return 0;
}


return 0;
}
