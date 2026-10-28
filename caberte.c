#include <stdio.h>
int main() {
    int stock = 200;
    int households;
    int requested;
    int distributed = 0;
    int remaining = 200;
    int unfulfilled = 0;
    int i;


    printf("Baranggay relief pack distribution \n");
    printf("available relief packs: %d\n" , stock);

    printf("Enter number of households requesting assistance: ");
    scanf("%d", &households);

    while(households <0) {
        printf("invalid input! Enter a non-negative number: ");
        scanf("%d", &households);
    }

    for(i=1;i<=households;i++){
         printf("Enter number of relief packs requested: ");
         scanf("%d", &requested);

    }

         while(requested<=0) {
            printf("invalid input! Enter a number greater than 0:");
            scanf("%d" , &requested);

         }

         if(requested <= remaining) {
            remaining = remaining - requested;
            distributed = distributed + requested;

         }else{
            unfulfilled ++;

            printf("request not fulfilled. Not enough stock \n");
         }

         printf("\n================FINAL SUMMARY=================\n");
         printf("total packs distributed:%d\n" , distributed);
         printf("remaining packs:%d\n" , remaining);
         printf("Number of unfulfilled request: %d\n", unfulfilled);

        return 0;

        }