#include <stdio.h>
#include <conio.h>
typedef struct Product
{
    int id;
    char product[20];
    char brand[20];
    int quantity;
    int mrp;
} Kushagra;

int main()
{
    Kushagra products[10] =
    {
        {1001, "T_Shirts", "Peter_England", 89, 500},
        {1002, "Shirts", "Nike", 90, 600},
        {1003, "Jeans", "US_Polo", 108, 699},
        {1004, "Pants", "Zara", 123, 799},
        {1005, "Socks", "Armani", 34, 899},
        {1006, "Troushers", "Arrow", 56, 999},
        {1007, "Bags", "H&M", 89, 2999},
        {1008, "Shoes", "Colors", 78, 1999},
        {1009, "Perfumes", "Gucci", 156, 1200},
        {1010, "Caps", "LV", 45, 699}
    };

    char size[6][10] = {"S", "M", "L", "XL", "XXL", "XXXL"};

    int bill_ids[100];
    int bill_quantity[100];
    int bill_count = 0;
    float total_bill = 0;
    int choice;

    do
    {
        printf("\n====== TRENDS INVOICE ======\n");
        printf("1. Stock Availability\n");
        printf("2. Purchase Item\n");
        printf("3. Checkout & Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nID\t\tProduct\t\t\t\tBrand\t\t\t\tStock\t\tMRP\n");

            for (int i = 0; i < 10; i++)
            {
                printf("%-10d\t%-20s\t\t%-20s\t\t%-10d\t%-10d\n",
                       products[i].id,
                       products[i].product,
                       products[i].brand,
                       products[i].quantity,
                       products[i].mrp);
            }
        }

        else if (choice == 2)
        {
            int pid, qty, size_choice;
            int found = 0;

            printf("Enter Product ID : ");
            scanf("%d", &pid);

            for (int i = 0; i < 10; i++)
            {
                if (products[i].id == pid)
                {
                    found = 1;

                    if (products[i].quantity == 0)
                    {
                        printf("Out of Stock!\n");
                        break;
                    }

                    printf("\nProduct : %s\n",
                           products[i].product);
                    printf("Brand   : %s\n",
                           products[i].brand);
                    printf("MRP     : Rs.%d\n",
                           products[i].mrp);
                    printf("Stock   : %d\n",
                           products[i].quantity);

                    printf("\nSelect Size\n");
                    for (int j = 0; j < 6; j++)
                    {
                        printf("%d. %s\n", j + 1, size[j]);
                    }

                    printf("Enter Choice : ");
                    scanf("%d", &size_choice);

                    printf("Enter Quantity : ");
                    scanf("%d", &qty);

                    while (qty <= 0 ||
                           qty > products[i].quantity)
                    {
                        printf("Invalid Quantity!\n");
                        printf("Enter Again : ");
                        scanf("%d", &qty);
                    }

                    float item_total =
                        products[i].mrp * qty;

                    printf("\n===== Item Summary =====\n");
                    printf("Product : %s\n",
                           products[i].product);
                    printf("Brand   : %s\n",
                           products[i].brand);
                    printf("Size    : %s\n",
                           size[size_choice - 1]);
                    printf("Quantity: %d\n", qty);
                    printf("Total   : Rs. %.2f\n",
                           item_total);

                    products[i].quantity -= qty;

                    bill_ids[bill_count] = i;
                    bill_quantity[bill_count] = qty;
                    bill_count++;

                    total_bill += item_total;
                    break;
                }
            }

            if (!found)
            {
                printf("Invalid Product ID!\n");
            }
        }

        else if (choice == 3)
        {
            printf("\n====== CHECKOUT ======\n");

            if (bill_count == 0)
            {
                printf("No Item Purchased.\n");
            }
            else
            {
                printf("Product\tQty\tTotal\n");

                for (int i = 0; i < bill_count; i++)
                {
                    int index = bill_ids[i];
                    float amount =
                        bill_quantity[i] *
                        products[index].mrp;

                    printf("%s\t%d\t%.2f\n",
                           products[index].product,
                           bill_quantity[i],
                           amount);
                }

                printf("-----------------------\n");
                printf("Grand Total = Rs. %.2f\n",
                       total_bill);
            }

            printf("Thank You For Shopping!\n");
        }

    } while (choice != 3);
    getch();
    return 0;
}
