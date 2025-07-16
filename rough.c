// #include <stdio.h>
// int main() {
//     int First_Number, Second_Number;
//     printf("Enter FIrst Number : ");
//     scanf("%d", &First_Number);
//     printf("Enter Second Number : ");
//     scanf("%d", &Second_Number);
//     int Sum = First_Number + Second_Number;
//     printf("Your Number is : %d", Sum);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int x,y,z;
//     printf("Enter the first number : ");
//     scanf("%d", &x);
//     printf("Enter the second number : ");
//     scanf("%d", &y);
//     printf("Enter the third number : ");
//     scanf("%d", &z);
//     printf("%d", (x+y+z)/3);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter your age : ");
//     scanf("%d",&x);
//     if(x>18){
//         printf("You are an Adult");
//     }
//     return 0;
// }



// Selction sort
// #include <stdio.h>

// void selectionSort(int arr[] , int n){
//     for(int i=0;i<n;i++){
//         int min_idx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx=j;

//             }
//         }
//         int temp=arr[i];
//         arr[i]=arr[min_idx];
//         arr[min_idx]=temp;
         
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[]={21,54,36,98,51,74};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr,n);
//     printArray(arr,n);
//     return 0;

// }



// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("new.txt","r");
//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);
//         fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);    fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);    fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);    fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);    fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);    fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int First_Number, Second_Number;
//     printf("Enter FIrst Number : ");
//     scanf("%d", &First_Number);
//     printf("Enter Second Number : ");
//     scanf("%d", &Second_Number);
//     int Sum = First_Number+Second_Number;
//     printf("Your Number is : %d", Sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter the number : ");
//     scanf("%d",&x);
//     if(x%2==0){printf("Number is even.");}
//     else {printf("Number is odd.");}
//     return 0;
// }
//  #include <stdio.h>
//  #include <math.h>
//  int main(){
//      int n,x=0;
//      printf("Enter the number : ");
//      scanf("%d",&n);
//      for (int i=1; i<=n; i++){
//          printf("Sum is %d\n", x+i);      
//      }
//      for (int y=n; y>=1; --y){
//          printf("%d\n",y);
//      }
//      return 0;
//  }

// #include <stdio.h>
//  int power(int x, int y);

//  int main(){
//     int x,y;
//     printf("Enter the value of base : ");
//     scanf("%d", &x);
//      printf("Enter the value of exponent : ");
//     scanf("%d", &y);
//     printf("Your Resulted value : %d", power(x,y));
//     return 0;
//  }

//  int power(int x, int y){
//    int result =1;
//    for (int i=0; i<y; i++){
//        result = result* x;
//    }
//    return result;
//  }

// #include<stdio.h>

// void input(float a, float b);

// int main(){
//     float x = 5,y = 4;
//     input(x,y);
//      printf("Sum of the two numbers are : %f\n", x + y);
//     printf("Product of the two numbers are : %f\n", x * y);
//     printf("Average of the two numbers are : %f\n", (x + y)/2);    
//     return 0;
// }

// void input(float a, float b){
//     printf("Sum of the two numbers are : %f\n", a + b);
//     printf("Product of the two numbers are : %f\n", a * b);
//     printf("Average of the two numbers are : %f\n", (a + b)/2);
// }

// #include<stdio.h>

// void printname(char arr[]);
// int main(){
//     char firstname[] = "Md Mihran";
//     char lastname[] = "Sohail";
//    printname(firstname);
//    printname(lastname);
// }

// void printname(char arr[]){
//     for(int i=0; arr[i] != '\0'; i++){
//         printf("%c", arr[i]);
//     }
// }


// #include <stdio.h>
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if (arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                     arr[j]=arr[j+1];
//                     arr[j+1]=temp;
//             }

//         }
//     }
// }

// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int arr[]={5,2,3,1,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     print(arr,n);
//     bubblesort(arr,n);
//     print(arr,n);
//     return 0; 
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float *ptr;
//     ptr = (float *) calloc(5, sizeof(float));
//     // ptr[0] = 5;
//     // ptr[1] = 7;
//     // ptr[2] = 6;
//     // ptr[3] = 4;
//     // ptr[4] = 1;
//     for(int i=0; i>5; i++){
//         printf("%f\n", ptr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     float a;
//     printf("Enter the radius of the circle : ");
//     scanf("%f", &a);
//     printf("Area of the square is : %f", 3.14*a*a);
//     return 0;
// }
// #include <stdio.h>

// int fib(int n);

// int main(){
//     int n;
//     printf("Enter the number of terms : ");
//     scanf("%d", &n);
//     printf("Your term of Fibonacci Series : %d",fib(n));
//     return 0;
// }

// int fib(int n){
//     if (n == 0){
//        return 0;
//     }
//     if (n ==  1){
//         return 1;
//     }

//     int a = fib(n-2);
//     int b = fib(n-1);
//     int fib = b + a;
//     return fib;
// }

// #include <stdio.h>

// void temp(int x);

// int main(){
//     int x;
//     printf("Enter the Temprature in Degree Celsius : ");
//     scanf("%d", x);
//     temp(x);
//     return 0;
// }

// void temp(int x){
//     if (x > 25){
//         printf("Temprature is Hot.");
//     }
//     else{
//         printf("Temprature is Cold.");
//     }
// }

void printTemperature(int temperature) {
    if (temperature > 25) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }
}

int main() {
    int temperature;
    printf("Enter the temperature: ");
    scanf("%d", &temperature);
    printTemperature(temperature);
 return 0;
}