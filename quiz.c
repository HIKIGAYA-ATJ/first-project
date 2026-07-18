#include <stdio.h>
#include <unistd.h> //for the sleep function
#include <ctype.h>  //for the toupper function

int main(){
    char questions[][100] = {"what is the largest country by area?\n",
                             "\nwhat is the most populated cuntry?\n",
                            "\nwhat is smallest country by area?\n",
                            "\nwich country has the most cities?\n"};
   
   char options[][100] = {"A. India\nB. Canada\nC. Russia\nD. China",
                          "A. USA\nB. India\nC. Indonesia\nD. China",
                          "A. Tuvalu\nB. Vtikan city\nC. Nauru\nD. monaco",
                          "A. China\nB. Brazil\nC. India\nD. Russia"};

   char answers[] = {'C', 'B', 'B', 'A'};

   int qsize = sizeof(questions) / sizeof(questions[0]);
   
   char guess;
   int score = 0;
   
   printf("### QUIZ GAME ###\n");

   for(int i = 0; i < qsize; i++){
       printf("\n%s\n", questions[i]);
       printf("%s\n", options[i]);
       printf("\nchoose an option to be your answer : ");
       scanf(" %c", &guess);
       guess = toupper(guess);
       if(guess == answers[i]){
           printf("\nCORRECT ANSWER!");
           score++;
       }
       else{
           printf("\nWRONG ANSWER!");
       }
       sleep(1);
       
   }
   sleep(1);
   printf("\nyour score is %d out of %d\n", score, qsize);
  
}