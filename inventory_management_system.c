// Roll Number:- 2502900100134 
// Inventory Management system :- TRENDS
#include <stdio.h>
#include <string.h>
int main()
{
int Product_ID[]={1001 ,1002 ,1003 ,1004 ,1005 ,1006 ,1007 ,1008 ,1009 ,1010};
char *Products[]={"T_Shirts" ,"Shirts" ,"Jeans" ,"Pants" ,"Socks" ,"Troushers" ,"Bags" ,"Shoes" ,"Perfumes" ,"Caps"};
char *Brands[]={"Peter_England" ,"Nike" ,"US_Polo" ,"Zara" ,"Armani" ,"Arrow" ,"H&M" ,"Colors" ,"Gucci" ,"LV"};
int Product_Quantity[]={89 ,90 ,108 ,123 ,34 ,56 ,89 ,78 ,156 ,45};
int Product_MRP[]={500 ,600 ,699 ,799 ,899 ,999 ,2999 ,1999 ,1200, 699};
//int Discount[]={25 ,35, 50};
char *Product_Size[]={"S" ,"M" ,"L" ,"XL" ,"XXL" ,"XXXL"};
int   bill_ids[100];
int   bill_quantity[100];
int   bill_count = 0;
float total_bill = 0;
int choice;


do{
    printf("\t\t\tTRENDS INVOICE\t\t\t\n");
    printf("\t\t\t1.Stock Availability:\n");
    printf("\t\t\t2.Purchase Item:\n");
    printf("\t\t\t3.Checkout & Exit:\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    
    while(choice<1||choice>3)
    {
        printf("You Have Entered Invalid Choice!!!!!!\n");
        printf("\t\t\t1.Stock Availability:\n");
        printf("\t\t\t1.Purchase Item:\n");
        printf("\t\t\t1.Checkout & Exit:\n");
        printf("Enter Your Correct Choice: ");
        scanf("%d", &choice);
    }


    // display stock availibilty
    if(choice==1)
    {
        // display stock availibilty
        printf("\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t%s\n",
               "ID", "Product", "Brand", "Stock", "MRP(Rs)");
        printf("=============================================================\n");       
        for(int i=0;i<sizeof(Product_ID)/sizeof(Product_ID[0]);i++)
        {
            printf("\t\t\t%d\t\t\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",Product_ID[i],Brands[i],Products[i],Product_Quantity[i],Product_MRP[i]);
        }
    }

     // purchase functionality
    else if(choice==2)
    {
        int PID,found=0,quantity,size_choice;

        printf("\t\t\tProduct_ID to purchase: ");
        scanf("%d",&PID);
        for(int i=0; i<sizeof(Product_ID)/sizeof(Product_ID[0]); i++)
        {
            if(Product_ID[i]==PID)
            {
                found=1;
            if (Product_Quantity[i]==0)
            {
                printf("Sorry, '%s' is out of order!!\n",Products[i]);
                break;
            }

            printf("Product : %s (%s)\n", Products[i], Brands[i]);
            printf("MRP     : Rs. %d\n", Product_MRP[i]);
            printf("Stock   : %d units\n", Product_Quantity[i]);

            printf("Select the Size:\n");
            for (int size=0;size<6;size++)
                printf("  %d. %s\n", size+1,Product_Size[size]);
            
            printf("Enter size option {1-6}: ");
            scanf("%d",&size_choice);
            while (size_choice<1||size_choice>6)
            {
                printf("You Have Entered Invalid Size Choice!!!!!!");
                scanf("%d", &size_choice);
            }
        }


        //Quality
        printf("Enter Quantity:");
        scanf("%d",&quantity);
        
        while(quantity<=0||quantity>Product_Quantity[i])
        {
            printf("Invalid Quantity!! Available: %d, Enter Again:",Product_Quantity[i]);
            scanf("%d", &quantity);
        }
        float item_total =Product_MRP[i]*quantity;

        printf("\n=========Item Summary=========\n");
        printf("Product : %s | Size : %s | Quantity : %d\n",Products[i],Product_Size[size_choice-1],quantity);
        printf("MRP     : Rs. %d\n",Product_MRP[i]);
        printf("Item Total: Rs. %f\n",item_total);

        //Update stock and bills
        Product_Quantity[i] -= quantity;
        bill_ids[bill_count] = i;
        bill_quantity[bill_count] = quantity;
        bill_count++;
        total_bill += item_total;

        break;
    }

    if(!found)
    printf("Product ID %d not found!!\n",PID);
    }
    
    //checkout
    else if(choice==3)
    {
        printf("\n\t\t\t====== CHECKOUT RECEIPT =======\n");
        if(bill_count==0)
        {
            printf("NO ITEM PURCHASED:\n");
        }
        else{
            printf("%s  %s  %s  %s\n","Product", "Brand", "Qty", "Total(Rs)");
                printf("--------------------------------------------------\n");
                for (int b = 0; b < bill_count; b++) {
                    int i = bill_ids[b];
                    printf("%s  %s  %d\n",
                           Products[i], Brands[i], bill_quantity[b]);
                }
                printf("--------------------------------------------------\n");
                printf("GRAND TOTAL: Rs. %f\n", total_bill);
        }
        
        printf("Thank you for shopping!\n");
    }
    
    

}while(choice!=3);

return 0;
}






