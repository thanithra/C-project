#include<stdio.h>
#include<conio.h>

void main() {
int choice;
double num1,num2,result;
clrscr();
printf("______________________________Calculator Menu________________________________\n");
printf("1. Addition(+)\n");
printf("2. Subtraction(-)\n");
printf("3. Multiplication(*)\n");
printf("4. Division(/)\n");
printf("Enter your choice(1-4): ");
scanf("%d",&choice);

if(choice >=1 && choice <=4) {
printf("Number one: ");
scanf("%lf" , &num1);
printf("Number two: ");
scanf("%lf" , &num2);

if(choice == 1) {
result = num1+num2;
printf("Result: %.2lf+%.2lf=%.2lf\n", num1, num2, result);
}
else if (choice == 2) {
result = num1-num2;
printf("Result: %.2lf-%.2lf=%.2lf\n", num1, num2, result);
}
else if (choice == 3) {
result = num1*num2;
printf("Result: %.2lf*%.2lf=%.2lf\n", num1, num2, result);
}
else if (choice == 4) {
if (num2 !=0) {
result = num1/num2;
printf("Result: %.2lf/%.2lf=%.2lf\n", num1, num2, result);
}
else {
printf("Division by zero is impossible!");
}
}
}

else {
printf("Invalid operator! Please select the option between (1to4)");
}
getch();

}


