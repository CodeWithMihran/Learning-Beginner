// // #include<stdio.h>
// // int main() {
// //     int x;
// //     printf("Enter the Number : ");
// //     scanf("%d", &x);
// //     printf("%d", x>9 && x<100);
// //     return 0;
// // }
// // #include <stdio.h>
// // int main(){
// //     int x;
// //     printf("Enter the Number : ");
// //     scanf("%d",&x);
// //     x>99 && x<1000 ?  printf("Your Number is three digit number."):  printf("Your Number is not a three digit number.");
// //     return 0;
// // }
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter Your Marks : ");
//     scanf("%d",&x);
//     if (x>=90)
//     {
//         printf("Your grade is A++\n");
//         printf("Congratulations!!\n");
//         if (x==95)
//         {
//             printf("Superb!!");
//         }   
//     }
//     else if (x<90 && x>=80){
//         printf("Your grade is A+\n");
//         printf("Congratulations!!\n");
//     }
//     else if (x<80 && x>=60){
//         printf("Your grade is B\n");
//         printf("Congratulations!!\n");
//     }
//     else if (x<60 && x>=33){
//         printf("Your grade is C\n");
//         printf("Congratulations!!\n");
//     }
    

//     if (x<33) {
//         printf("You have failed the examination.\n");
//         printf("Better Luck Next Time.\n");
//     }
    
//     return 0;
// }

// WRONGGG
// #include <stdio.h>
// int main() {
//     int x;
//     printf("Enter your salary : ");
//     scanf("%d", &x);
//     switch (x){
//         case 'x>=35000 && x<60000' : printf("Middle Class");
//                 break;
//         case 'x>=60000 && x<90000' : printf("Upper Middle Class");
//                 break;
//         case 'x>90000' : printf("Rich Class");
//                 break;
//         default : printf("Poor Class");                      
//     }
//     return 0;
// }#
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter Your Marks : ");
//     scanf("%d",&x);
//     if (x>30){
//         printf("You have been Passed.");
//     }
//     else {
//         printf("You have been failed.");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter the character : ");
//     scanf("%s", &ch);
//     if (ch >='A' && ch<= 'Z'){
//         printf("Your character is Uppercase.");
//     }
//     else if (ch >= 'a' && ch <= 'z') {
//         printf("Your character is Lowercase.");
//     }
//     else {
//         printf("Wrong Input !!");
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int x,y,z;
//     printf("Enter The First Digit of The Number : ");
//     scanf("%d", &x);
//     printf("Enter The Second Digit of The Number : ");
//     scanf("%d", &y);
//     printf("Enter The Third Digit of The Number : ");
//     scanf("%d", &z);
//     if ((pow(x,3)+pow(y,3)+pow(z,3))==(x*100+y*10+z)){
//         printf("The given number is Armstrong Number.");
//     }
//     else {
//         printf("The given number is not Armstrong Number.");
//     }
//         return 0;
// }
// #include <stdio.h>
// int main(){
//     double x;
//     printf("Enter the Number : ");
//     scanf("%lf", &x);
//     if (x>=1)
//     {
//         printf("The Number is a Natural Number.");
//     }
//     else {
//         printf("The Number is not a Natural Number.");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     for(char i='A'; i<='Z'; ++i){
//         printf("%c\n", i);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int i=0,n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//    for(i=0;i<=n;i++){
//     printf("%d\n",i);
//    }
//     return 0;
// }

// #include <stdio.h>
//  int main(){
//      int n;
//      printf("Enter The Number : ");
//      scanf("%d",&n);
//      for(int i=1; i<=10; i++){
//      printf("%d\n",n*i);
//      }
//      return 0;
//  }
// #include <stdio.h>
// int main(){
//     int i;
//     do
//     {
//         printf("Enter the number : ");
//         scanf("%d",&i);
//         if (i%7==0){
//             break;
//         }
//     } while (1);

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     for (int i=5; i<=50; i++){
//         if(i%2==0){
//             continue;
//         }
//         printf("%d\n",i);
//     }
// return 0;
// }
// #include <stdio.h>
// int main(){
//     int x, fac=1;
//     printf("Enter The number : ");
//     scanf("%d",&x);
//     for(int i=1; i<=x; i++ ){
//         fac=fac*i;
//     }
//     printf("Factorial of this number is %d",fac);
//     return 0;
// }
// #include <stdio.h>
// int main (){
//     int x;
//     printf("Enter The Number : ");
//     scanf("%d",&x);
//     for(int i=10; i>=1; i--){
//         printf("%d\n", x*i);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int sum=0;
//     for(int i=5; i<=50; i++){
//     sum = sum + i;
//     }
//     printf("Sum is %d", sum);
//     return 0;
// }
// #include <stdio.h>
// void namaste();
// void bonjour();
// int main(){
//     char ch;
// printf("Enter I for India.\n");
// printf("Enter F for French.\n");
// printf("Enter your nationality : ");
// scanf("%c", &ch);
// if (ch == 'I'){
//     namaste();
// }
// else if(ch == 'F'){
//     bonjour();
// } else {
//     printf("Wrong Input");
// }
//     return 0;
// }
// void namaste()  {
//    printf("Namaste!!");
// }
// void bonjour()  {
//     printf("Bonjour!!");
// }
// #include <stdio.h>

// int sum(int x,int y);

// int main(){
//     int a,b,s;
//     printf("Enter the first number : ");
//     scanf("%d",&a);
//     printf("Enter the second number : ");
//     scanf("%d",&b);
//      s = sum(a,b);
//     printf("Your sum = %d", s);
// }
// int sum(int d,int f){
//     return d +f;
// }

// #include <stdio.h>

// void table(int n); 

// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     table(n);
//     return 0;
// }

// void table(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d\n",i*n);
//     }
// }

// #include <stdio.h>
// #include <math.h>

// int square(int a);
// int circle(int r);
// int rectangle(int l,int b);

// int main(){
//     int a,y,l,b,r;
//     printf("Enter the lenght of the side of the square : ");
//     scanf("%d", &a);
//     y = square(a);
//     printf("Area of the sqaure is : %d\n", y);
//     printf("Enter the radius of the circle : ");
//     scanf("%d", &r);
//     int f = circle(r);
//     printf("Area of the circle is : %d\n", f);
//     printf("Enter the lenght of the rectangle : ");
//     scanf("%d", &l);
//     printf("Enter the breadth of the rectangle : ");
//     scanf("%d", &b);
//     y = rectangle(l,b);
//     printf("Area of the rectangle is : %d\n", y);
//     return 0;
// }

// int square(int a){
//     return pow(a,2);
// }
// int circle(int r){
//     return 3.14*pow(r,2);
// }
// int rectangle(int l,int b){
//     return l*b;
// }
// #include <stdio.h>

// int fact(int n);

// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     printf("Factorial is equals to : %d",fact(n));

// return 0;
// }

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int a = fact(n-1);
//     int fact = a*n;
//     return fact;
// }

// #include <stdio.h>

// int Per(int x, int y, int z);

// int main(){
//     int x,y,z;
//     printf("Enter the Marks of Science : ");
//     scanf("%d",&x);
//     printf("Enter the Marks of Maths : ");
//     scanf("%d",&y);
//     printf("Enter the Marks of Urdu : ");
//     scanf("%d",&z);
//     printf("Your Percentage : %d", Per(x,y,z));
//     return 0;
// }

// int Per(int x, int y, int z){
//     return (x+y+z)/3;
// }

// #include <stdio.h>
// int fibonacci(int n){
//     if (n==0) return 0;
//     if (n==1) return 1;
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     printf("Fibonacci series of 6 is %d",fibonacci(6));
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     printf("Enter the number of terms :");
//     scanf("%d",&n);
//     printf("%d\n%d\n",a,b);
//     for(int i=2;i<n;i++){
//         c=a+b;
//         printf("%d\n",c);
//         a=b;
//         b=c;
       
//     }
//      return 0;
// }

// #include <stdio.h>

// int fib(int n);

// int main(){
//     int n;
//     printf("Enter the number of terms : ");
//     scanf("%d", &n);
//     fib(n);
//     return 0;
// }

// int fib(int n){
//     if (n == 0){
//         return 0;
//     }
//     if (n == 1){
//         return 1;
//     }
//     int a = fib(n-2);
//     int b = fib(n-1);
//     int fib = a + b;
//     printf("%d\n",fib);
//     return fib;
// }

// #include <stdio.h>
// int main(){
//     int a=0,b=1,c,n;
//     printf("Enter the number of terms : ");
//     scanf("%d",&n);
//     printf("%d",a,b);
//     for (int i=2; i<=n; i++){
//         c = a+b ;
//         a = b;
//         b = c;
//         printf("%d",c);
//     }
//     return 0;
// }

// #include <stdio.h>
// int sum(int x, int y, int z);

// int main(){
//     int x,y,z;
//     printf("Enter the First Digit of the Number : ");
//     scanf("%d", &x);
//      printf("Enter the Second Digit of the Number : ");
//     scanf("%d", &y);
//      printf("Enter the Third Digit of the Number : ");
//     scanf("%d", &z);
//     printf("Sum of all the Digits : %d", sum(x,y,z));
//     return 0;
// }

// int sum(int x, int y, int z){
//     return x+y+z;

// }

// #include <stdio.h>
// #include <math.h>
// float root(float n);

// int main(){
//     float n;
//     printf("Enter the Number : ");
//     scanf("%f", &n);
//     printf("Square root of the Number : %f", root(n));
//     return 0;
// }

// float root(float n){
//     return pow(n,0.5);
// }


// #include <stdio.h>
// int main(){
//     int x = 5;
//     int *y = &x;
//     int **z = &y;

    
//     printf("%d\n", x);
//     printf("%d\n", *y);
//     printf("%d\n", **z);
//         return 0;
// }

// #include<stdio.h>

// void exchange(int *a, int *b);

// int main(){
//     int a,b ;
//     printf("Enter the value of 'a' : ");
//     scanf("%d",&a);
//     printf("Enter the value of 'b' : ");
//     scanf("%d",&b);
//     exchange(&a,&b);

//     printf("Your Exchanged Value of 'a': %d\n", a);
//     printf("Your Exchanged Value of 'b': %d\n", b);

//     return 0;
// }

// void exchange(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf("Your Exchanged Value of 'a': %d\n", *a);
//     printf("Your Exchanged Value of 'b': %d\n", *b);
// }

// #include<stdio.h>

// void x(int *n);

// int main(){
//     int n = 4;
//     x(&n);
//      printf("Address of n is : %d\n",&n);
//     return 0;
// }

// void x(int *n){
//     printf("Address of n is : %d\n",n);
// }

// #include<stdio.h>

// void dowork(float a, float b, float *sum, float *pro, float *avg);

// int main(){
//     float a = 5,b = 4;
//     float sum, pro, avg;
//     dowork(a,b, &sum, &pro, &avg);
//     printf("Sum = %d, Product = %d, Average = %f", sum,pro,avg);
//     return 0;
// }

// void dowork(float a, float b, float *sum, float *pro, float *avg){
//     *sum = a+b;
//     *pro = a * b;
//     *avg = (a+b)/2;
// }

// #include<stdio.h>
// int main(){
//     float price[3];
//     printf("Enter the price of first item : ");
//     scanf("%f",&price[0]);
//     printf("Enter the price of second item : ");
//     scanf("%f",&price[1]);
//     printf("Enter the price of third item : ");
//     scanf("%f",&price[2]);
//     printf("Final price of the first item : %f\n", (price[0])+(price[0]*0.18));
//     printf("Final price of the second item : %f\n", (price[1])+(price[1]*0.18));
//     printf("Final price of the third item : %f\n", (price[2])+(price[2]*0.18));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a = '*';
//     char *ptr = &a;
//     printf("Address of a : %u\n", ptr);
//     ptr++;
//     printf("New Address of a : %u\n", ptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x = 3;
//     int *ptr = &x;
//     int y = 5 , *y_ptr = &y;
//     printf("Difference = %d",ptr - (y_ptr));
//     y_ptr = &x+1;
//     printf(" Compare : %d", ptr == (y_ptr));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int Marks[4];
//     int m;
//    for (int x = 1; x<=4; x++){
//     for (int i=0; i<4; i++){
//         printf("Enter the marks of %dst student : ", x );
//         scanf("%d", &Marks[i]);
//     }
//     for(int i=0; i<4; i++){
//         printf("Marks of the %dst student : %d\n", x, Marks[i]);
//     }
// }
//     return 0;
// }

// #include<stdio.h>

// void work(int arr[], int n );

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     work(arr, 6);
//     return 0;
// }

// void work(int arr[], int n ){
//     for (int i=0; i<6; i++){
//         printf("%d\t", arr[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int Marks[2][3];
//     Marks[0][0] = 96;
//     Marks[0][1] = 86;
//     Marks[0][2] = 87;
//     Marks[1][0] = 54;
//     Marks[1][1] = 79;
//     Marks[1][2] = 63;
//     printf("%d", Marks[0][1] );
//     return 0;
// }

// #include<stdio.h>

// int count(int arr[], int n);

// int main(){
//     int odd[5];
//     for(int i=0; i<5; i++){
//     printf("Enter the Numbers : ");
//     scanf("%d", &odd[i]);
//     count(odd, 5);
//     }
//     printf("Count of Odd Numbers : %d\n", count(odd, 5));
//     return 0;
// }

// int count(int arr[], int n){
//     int count=0;
//     for(int i = 0; i<n; i++){
//         if(arr[i]%2 != 0) {
//             count++;
//         }
//     }
//         return count;
// }

// #include<stdio.h>

// void reverse(int arr[], int n);
// void print(int arr[], int n);

// int main(){
//     int arr[5] = {51,23,47,94,61};
//      reverse(arr,5);
//     print(arr,5);
//     return 0;
// }

// void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n){
//     for(int i=0; i<(n/2); i++){
//        int x = arr[i];
//        int y = arr[n-i-1];
//        arr[i] = y;
//        arr[n-i-1] = x;
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of terms of Fibonacci series : ");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     printf("%d\t%d\t", fib[0], fib[1]);
//     for(int i=2; i<n; i++){
//         fib[i] = fib[i-1]+fib[i-2];
//         printf("%d\t", fib[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// void tables(int arr[][10], int n, int m, int number);


// int main(){
//     int table[2][10];
//     tables(table ,0 , 10, 2);
//     tables(table ,1 , 10, 3);
//     for(int i=0; i<10; i++){
//     printf("%d\t",table[0][i]);
//     }
//     printf("\n");
//      for(int i=0; i<10; i++){
//     printf("%d\t",table[1][i]);
//     }
//     printf("\n");
//     return 0;
// }

// void tables(int arr[][10], int n, int m, int number){
//     for (int i=0; i<10; i++){
//         arr[n][i] = number*(i+1);
//     }
// }

// #include<stdio.h>

// void printname(char arr[]);

// int main(){
//     int x,y;
//     char firstname[40];
//     char lastname[40];
//     printf("Enter Your First Name : ");
//     scanf("%s",firstname );
//     printf("Enter Your Last Name : ");
//     scanf("%s",lastname );
//     printname(firstname);
//     printname(lastname);
//     return 0;
// }
// void printname(char arr[]){
//     for(int i=0; arr[i] != '\0'; i++){
//         printf("%c", arr[i]);
//     }
// }

// #include<stdio.h>
// int main(){
//     int x,y;
//     char firstname[10];
//     char middlename[10];
//     char lastname[10];
//     printf("Enter Your First Name : ");
//     scanf("%s",firstname );
//     printf("Enter Your Middle Name : ");
//     scanf("%s",middlename );
//     printf("Enter Your Last Name : ");
//     scanf("%s",lastname );
//     printf("Your Full Name : %s %s %s",firstname, middlename, lastname);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char *name = "Hellooo";
//     puts(name);
//     name = "Hell";
//     puts(name);
//     return 0;
// }

// #include<stdio.h>

// int lenght(char arr[]);

// int main(){
//     char name[100];
//     printf("Enter Your Name : ");
//     fgets(name, 100, stdin);
//     printf("Lenght of Your Name is : %d", lenght(name));
//     return 0;
// }

// int lenght(char arr[]){
//     int lenght = 0;
//     for(int i=0; arr[i] != '\0'; i++){
//        lenght++;
//     }
//     return lenght-1;
// }

// #include<stdio.h>
// int main(){
//     char name[100];
//     char ch;
//     int i=0;
//     while (ch != '\n'){
//         scanf("%c",&ch);
//         name[i]=ch;
//         i++;
//     }
//     name[i]='\0';
//     puts(name);
//         return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char Password[100];
//     char salt[] = "645";
//     printf("Enter Your Password : ");
//     scanf("%s",Password);
//     strcat(Password,salt);
//     printf("Your New Password is : %s", Password);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// char salting(char arr[]);

// int main(){
//     char Password[100];
//     printf("Enter Your Password : ");
//     scanf("%s",Password);
//     salting(Password);
//     return 0;
// }

// char salting(char Pass[]){
//     char salt[] = "645";
//     char NewPass[100];
//     strcpy(NewPass,Pass);
//     strcat(NewPass,salt);
//     puts(NewPass);
// }

// #include<stdio.h>

// void slice(char arr[], int n, int m);
// int main(){
//     char input[100];
//     int n,m;
//     printf("Enter the word : ");
//     fgets(input, 100, stdin);
//     printf("Enter the first index : ");
//     scanf("%d",&n);
//     printf("Enter the second index : ");
//     scanf("%d",&m);
//     slice(input, n, m);
//     return 0;
// }

// void slice(char arr[], int n, int m){
//     char sliced[100];
//     int j = 0;
//     for(int i=n; i<=m; i++, j++){
//     sliced[j] = arr[i];
//     }
//     sliced[j]='\0';
//     puts(sliced);
// }

// #include<stdio.h>

// int vowel(char arr[]);

// int main(){
//     char Input[100];
//     printf("Enter the Word : ");
//     fgets(Input, 100, stdin);
//     printf("Occourence of vowel is : %d", vowel(Input));
//     return 0;
// }

// int vowel(char arr[]){
//     int count = 0;
//     for(int i=0; arr[i] != '\0'; i++){
//         if (arr[i] == 'a' || arr[i] == 'e' ||arr[i] == 'i' ||arr[i] == 'o' ||arr[i] == 'u' ||
//             arr[i] == 'A' ||arr[i] == 'E' ||arr[i] == 'I' ||arr[i] == 'O' ||arr[i] == 'U')
//         count++;
//     }
//     return count;
// }

// #include<stdio.h>

// void check(char arr[], char n);
// int main(){
//     char word[100];
//     char n;
//     printf("Enter the word : ");
//     fgets(word, 100, stdin);
//     printf("Enter the Required Character : ");
//     scanf("%c", &n);
//     check(word, n);
//     return 0;
// }

// void check(char arr[],char n){
//     int count = 0;
//    for (int i=0; arr[i] != '\0'; i++){
//     if (arr[i] == n){
//         count++;
//     }
// }
//     if (count>0){
//         printf("Yes!! Required Character is present.");
//     }
//     else{printf("No!! Required Character is not present.");}    

// }

// #include<stdio.h>
// #include<string.h>
// struct Student
// {
// char Name[100];
// float CGPA;
// int Roll;
// };

// int main(){
//     struct Student AIML[100];
//     struct Student Cse_plus[100];
//     struct Student Core[100];
//     AIML[0].Roll = 8245;
//     strcpy(AIML[0].Name, "Mihran");
//     printf("Name : %s\n", AIML[0].Name);
//     printf("Roll : %d\n", AIML[0].Roll);
//     return 0;
// }

// #include<stdio.h>

// struct student{
//     char name[100];
//     int roll;
//     float cgpa;
// };

// int main(){
//     struct student s1 = {"Mainish", 7664, 8.2};
//     printf("Roll : %d\n", s1.roll);
//     struct student *ptr = &s1;
//     printf("roll : %d\n", ptr->roll);
//     return 0;
// }

// #include<stdio.h>

// typedef struct employee
// {
// char name[100];
// char dob[100];
// char job[100];
// }emp;
// void info(struct employee e1);
// int main(){
//     emp e1 = {"Mihran", "01/02/2008", "C.E.O"};
//     info(e1);
//     return 0;
// }

// void info(emp e1){
//  printf("Information about Employee :\n");
//  printf("Employee Name : %s\n", e1.name);
//  printf("Employee Date of Birth : %s\n", e1.dob);
//  printf("Employee Job : %s\n", e1.job);
// }

// #include<stdio.h>

// typedef struct Address
// {
// int House_No;
// int block;
// char city[100];
// char state[100];
// } add ;

// int main(){
//     add p[5];
//     int j = 1;
//     for (int i=0; i<5, j<=5; i++, j++){
//         printf("Person %d, Please Enter Your Address Details :\n", j);
//         printf("Enter Your House Number : ");
//         scanf("%d", &p[i].House_No);
//          printf("Enter Your Block Number : ");
//         scanf("%d", &p[i].block);
//          printf("Enter Your City : ");
//         scanf("%s", &p[i].city);
//          printf("Enter Your State : ");
//         scanf("%s", &p[i].state);
//     }
//     for (int i=0, j =1; i<5, j<=5; i++, j++){
//         printf("Address of Person %d : %d, %d, %s, %s\n", j, p[i].House_No,p[i].block,p[i].city,p[i].state);
//     }
//     return 0;
// }


// #include<stdio.h>

// typedef struct vector
// {
// int x;
// int y;
// }vec;

// void add(vec a1, vec a2, vec sum);

// int main(){
//     vec a1 = {2,4};
//     vec a2 ={3,5};
//     vec sum = {0}; 
//     add(a1,a2,sum);
//     return 0;
// }

// void add(vec a1, vec a2, vec sum){
//     sum.x = a1.x + a2.x;
//     sum.y = a1.y + a2.y;
//     printf("Sum of the two vectors are : %d i^ + %d j^ ", sum.x, sum.y);
// }


// #include<stdio.h>

// int main(){
//     int x;
//     FILE *fptr;
//     fptr = fopen("Hello.txt","r");
//     fscanf(fptr, "%d",&x);
//     printf("%d\n",x);
//     fscanf(fptr, "%d",&x);
//     printf("%d\n",x);
//     fscanf(fptr, "%d",&x);
//     printf("%d\n",x);
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *fptr;
//     fptr = fopen("Hello.txt", "r");
    
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));

//         fclose(fptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("Hello.txt","r");
//     char ch;
//     while (ch != EOF)
//     {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
    
// fclose(fptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("Hello.txt","r");
//     int n;
//     fscanf(fptr, "%d", &n);
//     printf("Number : %d\n", n);
//     fscanf(fptr, "%d", &n);
//     printf("Number : %d\n", n);
//     fscanf(fptr, "%d", &n);
//     printf("Number : %d\n", n);
//     fscanf(fptr, "%d", &n);
//     printf("Number : %d\n", n);
//     fscanf(fptr, "%d", &n);
//     printf("Number : %d\n", n);
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>

// typedef struct student{
//     char name[100];
//     int age;
//     float cgpa;
// }stu;
// int main(){
//     FILE *fptr;
//     stu s1;
//     fptr = fopen("Hello.txt", "w");
//     printf("Enter Your Name : ");
//     fgets(s1.name, 100, stdin);
//     fprintf(fptr, "Student's Name : %s\n", s1.name);
//     printf("Enter Your Age : ");
//     scanf("%d", &s1.age);
//     fprintf(fptr, "Student's Age : %d\n", s1.age);
//     printf("Enter Your CGPA : ");
//     scanf("%f", &s1.cgpa);
//     fprintf(fptr, "Student's CGPA : %f\n", s1.cgpa);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("Hello.txt","w");
//     int n;
//     printf("Enter the number upto which Odd no. are required : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         if (i %2 != 0){
//             fprintf(fptr,"%d\t",i);
//         }
//     }
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fptr;
//     int x,y;
//     fptr = fopen("new.txt", "r");
//     fscanf(fptr, "%d", &x);
//     fscanf(fptr, "%d", &y);
//     fclose(fptr);
//     fptr = fopen("new.txt", "w");
//     int sum = x+y;
//     fprintf(fptr,"%d", sum);
//     fclose(fptr);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr = (int *)malloc(5* sizeof(int));
//     ptr[0] = 5;
//     ptr[1] = 7;
//     ptr[2] = 6;
//     ptr[3] = 4;
//     ptr[4] = 1;
//     for(int i=0; i<5; i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));
//     for(int i=0; i<5; i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);

//     ptr = (int*)calloc(n, sizeof(int));
//     for (int i=0; i<n; i++){
//         printf("%d\n", ptr[i]);
//     }
//     free(ptr);
//      ptr = (int*)malloc(2* sizeof(int));
//     for (int i=0; i<2; i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     int n;
//     ptr = (int*)calloc(5, sizeof(int));
//     ptr[0]= 3;
//     ptr[1]= 7;
//     for(int i=0; i<5; i++){
//         printf("%d\n", ptr[i]);
//     }
//     ptr = realloc(ptr, 8);
//     for(int i=0; i<8; i++){
//         printf("%d\n", ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int *ptr;
//     int n;
//     ptr = (int*)calloc(5, sizeof(int));
//     for(int i=0; i<5; i++){
//         printf("Enter the value : ");
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0; i<5; i++){
//         printf("Your Numbers : %d\n", ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x;
//     int count = 0;
//     printf("Enter the Number : ");
//     scanf("%d", &x);
//     if(x<=1){
//         printf("%d is not a Prime Number.",x);
//     }
//     else{
//         for(int i=1; i<x; i++){
//             if(x%i == 0){
//             count++ ;
//             }
//     }
//     if(count>1){
//         printf("%d is not a Prime Number.", x);
//     }
//     else{
//      printf("%d is a Prime Number.", x);
//     }
// }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int isprime=1;
    for(int i=2; i<n;i++){
        if(n%i==0){
            isprime=0;
        }
    }
    if(isprime){
        printf("%d is a prime number", n);

    }
    else {printf("Not a prime number");}
    return 0;
}