// selling price > cost price-----> profit
// cost price > selling price-----> loss
// selling price == cost price----> no profit no loss

#include<stdio.h>
#include<conio.h>

int main()
{
    int cp,sp,profit,loss;

    printf("enter the cost ammount=");
    scanf("%d",&cp);

    printf("enter the selling ammount=");
    scanf("%d",&sp);
profit=sp-cp;
loss=cp-sp;

if(sp>cp){
    printf("your profit is %d",profit);
}
else if(cp>sp){
    printf("your loss is %d",loss);

}
else{
    printf("no profit and no loss");
}
return 0;
}