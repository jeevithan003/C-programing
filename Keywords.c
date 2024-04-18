// C program to demonstrate 
// auto keyword
#include <stdio.h>

int printvalue()
{
  auto int a = 10;
  printf("%d", a);
}

// Driver code
int main() 
{
  printvalue();
  return 0;
}





// C program to show use 
// of break and continue
#include <stdio.h>

// Driver code
int main()
{
  for (int i = 1; i <= 10; i++) 
  {
    if (i == 2) 
    {
      continue;
    }
    if (i == 6) 
    {
      break;
    }
    printf("%d ", i);
  }
  return 0;
}





// C program to demonstrate 
// switch case statement
#include <stdio.h>

// Driver code
int main() {
  int i = 4;
  switch (i) {
    case 1: 
      printf("Case 1\n");break;
    case 2:
      printf("Case 2\n");break;
    case 3:
      printf("Case 3\n");break;
    case 4:
      printf("Case 4\n");break;
    default:
      printf("Default\n");break;
  }
}



// C program to demonstrate 
// char keyword
#include <stdio.h>

// Driver code
int main() {
  char c = 'a';
  printf("%c", c);
  return 0;
}

// C program to demonstrate 
// char keyword
#include <stdio.h>

// Driver code
int main() {
  char c = 'a';
  printf("%c", c);
  return 0;
}


// C program to demonstrate 
// const keyword
#include <stdio.h>

// Driver code
int main() {
  const int a = 11;
  a = a + 2;
  printf("%d", a);
  return 0;
}


// C program to demonstrate
// do-while keyword
#include <stdio.h>

// Driver code
int main() 
{
  int i = 1;
  do {
    printf("%d ", i);
    i++;
  } while(i <= 5);
  
  return 0;
}

// C program to demonstrate 
// double float keyword
#include <stdio.h>

// Driver code
int main() {
  float f = 0.3;
  double d = 10.67;
  printf("Float value: %f\n", f);
  printf("Double value: %f\n", d);
  return 0;
}

// C program to demonstrate 
// if-else keyword
#include <stdio.h>

// Driver code
int main() 
{
  int a = 10;
  if(a < 11)
  {
    printf("A is less than 11");
  }
  else
  {
    printf("A is equal to or "
           "greater than 11");
  }  
  return 0;
}




// An example program to 
// demonstrate working of 
// enum in C
#include<stdio.h>

// enum declaration:
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

// Driver code
int main()
{
//object of the enum (week), called day
  enum week day;
  day = Wed;
  printf("%d", day);
  return 0;
}


// C program to demonstrate 
// for keyword
#include <stdio.h>

// Driver code
int main()
{
  for (int i = 0; i < 5; i++) 
  {
    printf("%d ", i);
  }
  return 0;
}
// C program to demonstrate
// int keyword
#include <stdio.h>

void sum() {
    int a = 10, b = 20;
    int sum;
    sum = a + b;
    printf("%d", sum);
}

// Driver code
int main() {
    sum();
    return 0;
}

// C program to demonstrate
// short, long, signed, 
// and unsigned keyword
#include <stdio.h>

// Driver code
int main() {
  // short integer
  short int a = 12345;
  
  // signed integer
  signed int b = -34;
  
  // unsigned integer
  unsigned int c = 12;
  
  // L or l is used for 
  // long int in C.
  long int d = 99998L;
  
  printf("Integer value with a short int data: %hd", a);
  printf("\nInteger value with a signed int data: %d", b);
  printf("\nInteger value with an unsigned int data: %u", c);
  printf("\nInteger value with a long int data: %ld", d);
  return 0;
}




// C program to demonstrate
// return keyword
#include <stdio.h>
int sum(int x, int y) {
  int sum;
  sum = x + y;
  return sum;
}

// Driver code
int main() {
  int num1 = 10;
  int num2 = 20;
  printf("Sum: %d", 
          sum(num1, num2));
  return 0;
}






// C program to demonsstrate 
// sizeof keyword
#include <stdio.h>

// Driver code
int main() { 
  int x = 10;
  printf("%d", sizeof(x));
  return 0;
}











// C program to demonstrate 
// struct keyword
#include <stdio.h>
#include <string.h>

struct Books {
  char  title[50];
  char  author[50];
};

// Driver code
int main( ) {
  // Declare Book1 of type Book
  struct Books book1;        
   
 // book 1 specification 
 strcpy(book1.title, "C++ Programming");
 strcpy(book1.author, "Bjarne Stroustrup"); 
 
 // Print book details
 printf("Book 1 title : %s\n", book1.title);
 printf("Book 1 author : %s\n", book1.author);
 return 0;
}

