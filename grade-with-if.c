//grade with if
#include<stdio.h>
 
 int main(){
    int grade; char letter_grade;
    
    printf( "Enter the grade: " ); scanf( "%d", &grade );
    
    if( 90 <= grade ) letter_grade = 'A';
    else if( 80 <= grade ) 
    letter_grade = 'B';
    else if( 70 <= grade ) 
    letter_grade = 'C';
    else letter_grade = 'F';
    
    printf( "\n\nLetter grade is: %c.\n\n", letter_grade );
    
     

 
----------------------------------------------------------------------


#include <stdio.h>

void printLetter(int grade )
{
  if(grade > 90)
    printf("AA\n");
  else if(grade > 85)
    printf("BA\n");
  else if (grade > 80)
    printf("BB\n");
  else if (grade > 70)
    printf("CB\n");
  else if (grade > 60)
    printf("CC\n");
  else if (grade > 50)
      printf("DC\n");
  else if (grade > 40)
    printf("DD\n");
  else
    printf("FF\n");
}



int main(int argc, char const *argv[]) {

  int grade;
  printf("what is your grade: ");
  scanf("%d",&grade);
  printf("testing printLetter:\n");
  printLetter(grade);

  return 0;
}

