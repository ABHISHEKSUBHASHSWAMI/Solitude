//By S ABHISHEK
// Program to calculate percent profit and loss
#include <stdio.h>
main()
{
float Cost,Sell,Profit,Loss,perProfit,perLoss;
printf("Enter Cost:");
scanf("%f",&Cost);
printf("Enter Sell:");
scanf("%f",&Sell);
//when cost is greater than selling price.
if (Cost>Sell)
{
Loss=Cost-Sell;
perLoss=Loss*100/Cost;
printf("Loss=%f and Percentage=%0.2f",Loss,perLoss);
}
//when selling price is same as that of cost.
if (Cost==Sell)
{
printf("NO LOSS, NO PROFIT");
}
//when selling price is greater than cost.
if (Cost<Sell)
{
Profit=Sell-Cost;
perProfit=Profit*100/Cost;
printf("Profit=%f and Percentage=%0.2f",Profit,perProfit);
}
return 0;
}