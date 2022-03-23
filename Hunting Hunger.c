#include<stdio.h>
int main()
{
     int total=0,q=0;
      int n;
      
    printf("\n\n=======================================================================================================\n");

	printf("  \n\n\t\t\t\t\tPIZZA DELIVERY PROGRAM");
	printf("\n\n==========================================================================================
	       ==============\n");
	printf("\n\nPlease login here:");
	printf("\n\n\n\n1.Admin \t\t\t\t 2.User\t\t\t\t 3.Close App");
		int pizza=60,gbread=50,cdrink=100;
	program:
	printf("\n\nPress 1 for Admin");
	printf("\nPress 2 for User");
	printf("\nPress 3 for Close App\n\n");
	int choice;
	printf("\n =>  ");
	scanf("%d",&choice);
	

	
	switch(choice)
	{
	    case 1:
	    {
	        printf("\n\n=======================================================================================================\n");

	        printf("\n\t\t\t\tWelcome Admin!");
	        printf("\n\n=======================================================================================================\n");
	        printf("\n\n\nOPTIONS: \n 1.View Stock \n 2.Update stock\n");
	        printf("\n =>  ");
	        scanf("%d",&choice);
	        if(choice==1)
	        {
	            printf("\n\n STOCK: \n 1.Pizza: %d \n 2.Garlic Bread= %d \n 3.Cold Drink= %d\n",pizza,gbread,cdrink);
	        }else
	        if(choice==2)
	        {
	            printf("\n\nEnter Updated Value:");
	            printf("\n\nPizza Stock: ");
	            scanf("%d",&pizza);
	            printf("\n\nGarlic Bread Stock: ");
	            scanf("%d",&gbread);
	            printf("\n\nCold Drink Stock: ");
	            scanf("%d",&cdrink);
	            printf("\n\n\n\t\t\t\t STOCK UPDATED\n");
	        }else
	        printf("Wrong INPUT!!");
	        
	        break;
	    }
	    case 2:
	    {
	        printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	        printf("\t\t\t\t\tWELCOME TO HUNTING HUNGER");
	        printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	        printf("\n\n MENU:\n 1. Pizza   (â‚¹100/-) \n 2. Garlic Bread   (â‚¹80/-). \n 3. Cold Drink   (â‚¹40/-)\n");
	        again:
	        printf("\n Place an Order- ");
	        scanf("%d",&choice);
	       
	        
	        if(choice==1){
	              

	              printf("\t\t\t\t\t\t\t Pizza Quantity: ");
	              scanf("%d",&q);
	              if(q<pizza){
	              total=total+100*q;
	              pizza=pizza-q;
	              }else
	              printf("PIZZA OUT OF STOCK!!");
	              printf("\n Press 1 for more ");
	              scanf("%d",&n);
	              if(n==1)
	              goto again;
	             
	              
	        }else if(choice==2)
	        {
	            printf("\t\t\t\t\t\t\t Garlic Bread Quantity: ");
	              scanf("%d",&q);
	              if(q<gbread){
	              total=total+80*q;
	              gbread=gbread-q;
	              }else
	              printf("GARLIC BREAD OUT OF STOCK!!");
	               printf("\n Press 1 for more ");
	              scanf("%d",&n);
	              if(n==1)
	              goto again;
	             
	        }
	        else if(choice==3)
	        {
	            printf("\t\t\t\t\t\t\t Cold drink Quantity: ");
	              scanf("%d",&q);
	              if(q<cdrink){
	              total=total+40*q;
	              cdrink=cdrink-q;
	              }else
	              printf("COLD DRINK OUT OF STOCK!!");
	               printf("\n Press 1 for more ");
	              scanf("%d",&n);
	              if(n==1)
	              goto again;
	              
	        }
	  	    printf("\n\n=======================================================================================================\n");

	        printf("\n\n\t\t\t\t\t\t\tTOTAL AMOUNT= â‚¹%d \n",total);
	        
	        printf("\n\n=======================================================================================================\n\n");
	      
	          break;
	    }
	    case 3:
	    {
	        printf("\t\t\t\tApp Closed!\n\n");
	          break;
	    }
	   
	}
	
	    printf("Press 1 to comtinue- \n Press 0 to Exit-");
	    scanf("%d",&n);
	    if(n==1)
	    goto program;
	
	
	
	return 0;
}
