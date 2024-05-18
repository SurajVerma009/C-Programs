#include<stdio.h>
#include<conio.h>

int main()
{
    int ammount;
    printf("enter the ammount=");
    scanf("%d",&ammount);
    int notes;
    printf("enter the notes no=");
    scanf("%d",&notes);

     int total_notes=ammount/notes;

    if(notes==10){
       
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
   else if(notes==20){
        
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
    else if(notes==50){
        
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
    else if(notes==100){
        
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
    else if(notes==200){
        
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
    else if(notes==500){
        
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
    else if(notes==2000){
        
        printf("total no of notes in this ammount is =%d\n",total_notes);
    }
    return 0;

}