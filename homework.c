// Write a program to calculate perimeter of rectangle.
// Take sides, a & b, from the user

// #include<stdio.h>
// int main(){
//     int l,b;
//     printf("Enter the lenght of the Rectangle : ");
//     scanf("%d",&l);
//     printf("Enter the breadth of the Rectangle : ");
//     scanf("%d",&b);
//     printf("Perimeter of the Rectangle is : %d", 2*(l+b));
//     return 0;
// }

//Take a number(n) from user & output its cube(n*n*n). 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d",&n);
//     printf("The Cube of The Number is : %d", n*n*n);
//     return 0;
// }

// Write a program to print the average of 3 numbers

// #include<stdio.h>
// int main(){
//     int x,y,z;
//     printf("Enter the first number :");
//     scanf("%d",&x);
//     printf("Enter the second number :");
//     scanf("%d",&y);
//     printf("Enter the third number :");
//     scanf("%d",&z);
//     printf("Average of these three numbers are : %d", (x+y+z)/3);
//     return 0;
// }

// Write a program to check if given character is digit or not.

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter the character : ");
//     scanf("%c", &ch);
//     if (ch >='a' && ch<='z' || ch >='A' && ch<='Z'){
//         printf("The given character is not a digit");
//     }
//     else{
//         printf("The given character is a digit.");
//     }
//     return 0;
// }

//Write a program to print the smallest number of two.

// #include<stdio.h>
// int main(){
//     int x,y;
//     printf("Enter the first number : ");
//     scanf("%d",&x);
//     printf("Enter the second number : ");
//     scanf("%d",&y);
//     if(x>y){
//         printf("%d is the smallest number of two.", y);
//     }
//     else{
//         printf("%d is the smallest number of two.", x);
//     }
//     return 0;
// }

//Write a program to check if a given number is Armstrong number or not.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x,y,z;
//     printf("Enter the first digit of the number : ");
//     scanf("%d",&x);
//     printf("Enter the second digit of the number : ");
//     scanf("%d",&y);
//     printf("Enter the third digit of the number : ");
//     scanf("%d",&z);
//     int n = pow(x,3)+pow(y,3)+pow(z,3);
//         if(n == x*100+y*10+z){
//             printf("Your number is an Armstrong Number.");
//         }
//         else{
//             printf("Your number is not an Armstrong Number.");
//         }
//     return 0;
// }

//  Write a program to check if the given number is a natural number.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     if(n>0){
//         printf("%d is a natural number.", n);
//     }
//     else{
//         printf("%d is not a natural number.", n);
//     }
//     return 0;
// }

//Search on what a "nested loop" is & print this pattern using it.
//  *****
//  *****
//  *****
//  *****

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=4; i++){
//         for(int j=1; j<=5; j++){
//             printf("*");   
//         }
//             printf("\n"); 
//     }
//     return 0;
// }

// Write a function to find sum of digits of a number.

// #include<stdio.h>

// int sum(int x, int y);

// int main(){
//     int x,y;
//     printf("Enter the first number : ");
//     scanf("%d",&x);
//     printf("Enter the second number : ");
//     scanf("%d",&y);
//     printf("Sum of the two numbers are : %d", sum(x,y));
//     return 0;
// }

// int sum(int x, int y){
//     int add = x+y;
//     return add;
// }

// Write a function to find square root of a number.

// #include<stdio.h>
// #include<math.h>
// int root(float x);

// int main(){
//     float x;
//     printf("Enter the number : ");
//     scanf("%f",&x);
//     printf("Suare root of the number is : %f", root(x));
//     return 0;
// }

// int root(float x){
//     float r= pow(x,(0.5));
//     return r;
// }

// Write a program in C to find the maximum number
// between two numbers using a pointer.

// #include<stdio.h>
// int main(){
//     int *ptr_x, *ptr_y, x,y;
//     ptr_x = &x;
//     ptr_y = &y;
//     printf("Enter the first number : ");
//     scanf("%d",ptr_x);
//     printf("Enter the second number : ");
//     scanf("%d",ptr_y);
//     if((*ptr_x) > (*ptr_y)){
//         printf("%d is the maximum numbet between the two.", *ptr_x);
//     }
//     else{
//         printf("%d is the maximum numbet between the two.", *ptr_y);
//     }
//     return 0;
// }

//Write a program in C to print the elements of an
// array in reverse order.

// #include<stdio.h>
// int main(){
//     int arr[5];
//     arr[0] = 5;
//     arr[1] = 4;
//     arr[2] = 3;
//     arr[3] = 2;
//     arr[4] = 1;
//     printf("Value of the Array in reverse order : ");
//     for(int i=4; i>=0; i--){
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// Write a program in C to print all the letters in english
// alphabet using a pointer.


// #include<stdio.h>
// int main(){
//     char letters[26];
//     char *ptr = letters;
//     for(int i=0 ; i<26; i++){
//         *(ptr+i) = 'A'+i; 
//     }
//     printf("All the letters in English alphabet are : \t");
//     for(int i=0; i<26; i++){
//         printf("%c\t", *(ptr+i));
//     }
//     return 0;
// }

//Write a program in C to check the number is prime or not.

// #include<stdio.h>
// int main(){
//     int x;
//     int count = 0;
//     printf("Enter the Number : ");
//     scanf("%d",&x);
//     if(x <= 1){
//         printf("%d is not a Prime Number.");
//     }
//     else{
//         for(int i=1; i<=x; i++){
//             if(x % i == 0){
//             count++ ;
//             }
//         }
//     if(count>2){
//         printf("%d is not a Prime Number.", x);
//     }
//     else{
//         printf("%d is a Prime Number.", x);
//     }
// }
//     return 0;
// }

#include<stdio.h>

int main(){
    char name[100];
    printf("Enter Your Name : ");
    fgets(name, 100, stdin);
    puts(name);
    return 0;
}