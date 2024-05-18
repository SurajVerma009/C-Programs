#include<stdio.h>
#include<conio.h>

void reverse_string(char *ptr,int n);

int main()
{
    char st[]="suraj.seth";
    char *ptr=st;

    reverse_string(st,10);

    while(*ptr!='\0'){
     printf("%c\t",*ptr);
     ptr++;
    }
    return 0;
}

void reverse_string(char *ptr,int n){
    char temp;
    for(int i=0;i<n/2;i++){
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
     ptr[n-i-1]=temp;
    }
}