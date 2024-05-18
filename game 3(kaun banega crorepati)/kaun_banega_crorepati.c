#include<stdio.h>
#include<conio.h>

int main()
{
   int n,user_input,count=0;
   printf("---------kaun Banega Crorepati---------\n");
   printf("*****************************************\n");
   printf("Rules of this game--\n");
   printf("1-->In this game,There are 5 Questions\n");
   printf("2-->Every Question have four options\n");
   printf("3-->Each question own 5 Rupees!\n");
   printf("*****************************************\n");
   printf("Do you want play this Game!\n");
   printf("Press 1 for play and 0 for not play=");
   scanf("%d",&n);
   if(n==1){
    printf("Question 1.\n");
    printf("capital of India?\n");
    printf("option(1)=Kolkata\n");
    printf("option(2)=New Delhi\n");
    printf("option(3)=Lucknow\n");
    printf("option(4)=Punjab\n");
    printf("Which Option is Correct?\n");
    printf("Ans=");
    scanf("%d",&user_input);
    if(user_input==2){
    printf("You Give Right Answer You Earn 5 Rupees\n");
     count++;
    }
    else{
    printf("Oops Wrong Answer\n");
    }
     printf("Question 2.\n");
    printf("National Bird of India?\n");
    printf("option(1)=Parrot\n");
    printf("option(2)=Owl\n");
    printf("option(3)=Eagle\n");
    printf("option(4)=Peacock\n");
    printf("Which Option is Correct?\n");
    printf("Ans=");
    scanf("%d",&user_input);
    if(user_input==4){
    printf("You Give Right Answer You Earn 5 Rupees\n");
    count++;
    }
    else{
    printf("Oops Wrong Answer\n");
    }
    printf("Question 3.\n");
    printf("National Animal of India?\n");
    printf("option(1)=cow\n");
    printf("option(2)=Dog\n");
    printf("option(3)=Tiger\n");
    printf("option(4)=Lion\n");
    printf("Which Option is Correct?\n");
    printf("Ans=");
    scanf("%d",&user_input);
    if(user_input==3){
    printf("You Give Right Answer You Earn 5 Rupees\n");
    count++;
    }
    else{
    printf("Oops Wrong Answer\n");
    }
     printf("Question 4.\n");
    printf("National Fruit of India?\n");
    printf("option(1)=Mango\n");
    printf("option(2)=Grapes\n");
    printf("option(3)=Banana\n");
    printf("option(4)=Orange\n");
    printf("Which Option is Correct?\n");
    printf("Ans=");
    scanf("%d",&user_input);
    if(user_input==1){
    printf("You Give Right Answer You Earn 5 Rupees\n");
    count++;
    }
    else{
    printf("Oops Wrong Answer\n");
    }
     printf("Question 5.\n");
    printf("National Flower of India?\n");
    printf("option(1)=Lavender\n");
    printf("option(2)=Dahila\n");
    printf("option(3)=Rose\n");
    printf("option(4)=Lotus\n");
    printf("Which Option is Correct?\n");
    printf("Ans=");
    scanf("%d",&user_input);
    if(user_input==4){
    printf("You Give Right Answer You Earn 5 Rupees\n");
    count++;
    }
    else{
    printf("Oops Wrong Answer\n");
    }
    printf("At the end you earn total money=%d",5*count);
   }
else{
    printf("ok!");
}
  return 0;
}