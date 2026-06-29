#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n, i, choice;

    printf("Enter number of items: ");
    scanf("%d",&n);

    do
    {
        printf("\n===== INVENTORY MENU =====\n");
        printf("1. Add Items\n");
        printf("2. Display Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nItem %d\n",i+1);

                    printf("Enter ID: ");
                    scanf("%d",&item[i].id);

                    printf("Enter Name: ");
                    scanf("%s",item[i].name);

                    printf("Enter Quantity: ");
                    scanf("%d",&item[i].quantity);

                    printf("Enter Price: ");
                    scanf("%f",&item[i].price);
                }
                break;

            case 2:
                printf("\nInventory Details\n");

                printf("ID\tName\tQty\tPrice\n");

                for(i=0;i<n;i++)
                {
                    printf("%d\t%s\t%d\t%.2f\n",
                    item[i].id,
                    item[i].name,
                    item[i].quantity,
                    item[i].price);
                }
                break;

            case 3:
            {
                int searchId, found=0;

                printf("Enter Item ID to Search: ");
                scanf("%d",&searchId);

                for(i=0;i<n;i++)
                {
                    if(item[i].id==searchId)
                    {
                        printf("\nItem Found\n");
                        printf("ID : %d\n",item[i].id);
                        printf("Name : %s\n",item[i].name);
                        printf("Quantity : %d\n",item[i].quantity);
                        printf("Price : %.2f\n",item[i].price);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Item not found.\n");

                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=4);

    return 0;
}