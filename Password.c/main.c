#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define CR 0x0d
#define ESC 0x1b
#define TAB 0x09
#define LF 0x0a
#define BACKSPACE 0x08
#define NILL 0
#define TRUE 1
#define FALSE 0
#define LENGTH 15

void input(char *string, int length);

int main(int argc, char *argv[])
{
  char string[LENGTH];
  char password[] = "please";
  int result;
  
  printf("Enter your secret password:");
  input(string,LENGTH);
  
  result = strcmp(string,password);
  
  if(result==0)
               printf("\nEntry granted!\n");
  else
      {
               printf("\nSorry, Wrong password.\n");
               printf("Security has been notified.\n");
               printf("We will find you...\n");
               
}
  system("PAUSE");	
  return 0;
}

void input(char *string, int length)
{
     int done = FALSE;
     int index = 0;
     char ch;
     
     string[0] = NILL; //init the buffer
     
     do
     {
               ch = getch();
               
               //check to see whether the buffer is in full
               
               if (index == length)
               {
                         switch(ch)
                         {
                                   case CR:
                                        break;
                                   default:
                                           ch = NILL;
                                           break;
                                           }
                                           }
                                           
               //process the keyboard input
               
               switch(ch)
               {
                         case CR:    //enter key
                              string[index] = NILL;
                              done = TRUE;
                              break;
                         case NILL:
                              break;
                         default:
                                 putchar('*');
                                 string[index] = ch;
                                 index++;
                                 break;
                                 }
                                 }
                                 while(!done);
  
  
  
}
