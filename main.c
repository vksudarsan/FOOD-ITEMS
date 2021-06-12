#include <stdio.h>
 int main()
  { int x ;
    printf("enter any number from 1 to 5\t");
    scanf("%d",&x);
   switch (x)
    {
        case 1: printf("FOOD ITEM- Pizza\n PRICE- Rs 239\n");break;
        case 2: printf("FOOD ITEM-Burger\nPRICE- Rs 129\n"); break;
        case 3: printf("FOOD ITEM-Pasta\n PRICE-Rs 179\n"); break;
        case 4: printf("FOOD ITEM-French Fries\nPRICE- Rs 99\n"); break;
        case 5: printf("FOOD ITEM-Sandwich\n PRICE-Rs 149\n"); break;

        default: printf("Choice other than 1,2,3,4,5");
    }
         return 0;
   }
