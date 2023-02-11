#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch, cc = 0, ht = 0, Tea = 0, cost = 0, cost1 = 0, cost2 = 0, cost3 = 0, cost4 = 0,
            cost5 = 0, cost6 = 0, fries = 0, sandwich = 0, soup = 0, colddrink = 0, total = 0;
    printf("\n\nWelcome to Sweet Aroma Cafe \n\n");
    do
    {
        printf("What do you want to order\n");
 printf(" 1.Cold coffee - 60\n 2.Hot coffee - 40\n 3.Tea☕- 25\n 4.Fries🍟- 150 \n 5.Sandwich🥪- 120\n 6.Soup🍲- 120\n 7.Cold Drink🍾- 40 \n 8.Bill💸\n"); 
 printf("Enter your choice - ");
 scanf("%d", &ch);
 switch (ch)
 {
        case 1:
            printf("How many cold coffee do you want to order\n");
            scanf("%d", &cc);
            cost = cc * 60;
            printf("cold coffee - %d\n\n", cost);
            break;
        case 2:
            printf("How many hot coffee do you want to order\n");
            scanf("%d", &ht);
            cost1 += ht * 40;
            printf("hot coffee - %d\n\n", cost1);
            break;
        case 3:
            printf("How many Tea do you want to order\n");
            scanf("%d", &Tea);
            cost2 = Tea * 25;
            printf("tea☕- %d\n\n", cost2);
            break;
        case 4:
            printf("How many fries do you want to order\n");
            scanf("%d", &fries);
            cost3 = fries * 150;
            printf("fries🍟- %d\n\n", cost3);
            break;
        case 5:
            printf("How many sandwich do you want to order\n");
            scanf("%d", &sandwich);
            cost4 = sandwich * 120;
            printf("sandwich🥪- %d\n\n", cost4);
            break;
        case 6:
            printf("How many soup do you want to order\n");
            scanf("%d", &soup);
            cost5 = soup * 120;
            printf("soup🍲- %d\n\n", cost5);
            break;
        case 7:
            printf("How many cold drink do you want to order\n");
            scanf("%d", &colddrink);
            cost6 = colddrink * 40;
            printf("cold drink🍾- %d\n\n", cost6);
            break;
        case 8:
            total = cost + cost1 + cost2 + cost3 + cost4 + cost5 + cost6;

            printf("Item quantity price \n");
            printf("Cold coffee %d %d \n", cc, cost);
            printf("Hot coffee %d %d \n", ht, cost1);
            printf("Tea %d %d \n", Tea, cost2);
            printf("Fries %d %d \n", fries, cost3);
            printf("Sandwich %d %d \n", sandwich, cost4);
            printf("Soup %d %d \n", soup, cost5);
            printf("Cold drink %d %d \n", colddrink, cost6);

            printf("Your total bill is %d Rs\n\n", total);
            exit(0);
            break;
        default:
            printf("You have entered wrong choice\n\n\n");
            break;
 }
    } while (1);
    return 0;
}
