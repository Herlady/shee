/*
County Library Management System
By Fidelis Mbugua
08 August 2022
MIT License
C89 Compiler
*/
#include <stdio.h>
#include <stdlib.h>
int menu()
{
  int action;
      printf("Select an action below/n");
      printf("1. Add new Patron/n");
      printf("2. View all Patrons/n");
      printf("3. View all books/n.");
      printf("4. Add new book/n");
      printf("Your Action/n");
      scanf("%d",&action);
      return action;


}

int main()
{
    printf("County Library System/n");
    printf("Welcome Miss Fidelis/n");
    printf("You selected action%d/",menu);
    return 0;
}
