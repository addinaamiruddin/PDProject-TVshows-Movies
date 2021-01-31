#include<stdio.h>
#include<string.h>

/*
NUR ADDINA BINTI AMIRUDDIN
1201201473
TT5
QUESTION 3
*/

void main ()
{
	char name[40];
	char menu[40];
	char phone[20];
	char extra[20];
	int choice;
	char delivery, ans_extra;
	float price, price_extra, price_delivery, total_bill; 
	
	printf ("Enter your name\t\t : ");
	scanf("%[^\n]s",&name);

	printf ("Enter your mobile number : ");
	scanf ("%s", &phone);
	
	printf ("\n--------------------------------------------------");
	printf ("\n 1. Chicken Barbeque Pizza");
	printf ("\n 2. Spring Roll");
	printf ("\n--------------------------------------------------");

	printf ("\nEnter your choice\t: ");
	scanf ("%d", &choice);
	
	fflush(stdin);
	
	switch (choice)
	{
		case 1 :
			printf ("Extra cheese? [Y/N]\t: ");
			scanf ("%c", &ans_extra);
				
					fflush(stdin);
					
			strcpy (menu, "Chicken Barbeque Pizza");
			price = 15.50;	
			
					fflush(stdin);	
		
			if (ans_extra=='Y'){
				price_extra = 3.50;
				strcpy (extra, "Cheese");
			} else {
				price_extra = 0;
				strcpy (extra, "None");
			}				
			break;
			
		case 2 :
			printf ("Spicy sauce? [Y/N]\t: ");
			scanf ("%c", &ans_extra);			
			
				fflush(stdin);
				
			strcpy (menu, "Spring Roll");
			price = 6.90;
			
			
			if (ans_extra=='Y'){
				price_extra = 1.50;
				strcpy (extra, "Spicy sauce");
			} else {
				price_extra = 0;
				strcpy (extra, "None");
			}				
			break;			
			
		default :
		break;
	}
	
	fflush(stdin);
	
	printf ("Need delivery? [Y/N]\t: ");
	scanf ("%c", &delivery);
	
		if (delivery=='Y'){
			price_delivery = 10.00;
		} else {
			price_delivery = 0;
		}				
			
	//calculation of bill
	total_bill = price+price_extra+price_delivery;
	
	printf ("\n--------------------------------------------------");
	printf ("\n\t\t   RECEIPT");
	printf ("\n--------------------------------------------------");
	
	printf ("\nName\t\t: %s", name);
	printf ("\nMobile No.\t: %s", phone);
	
	printf ("\n\nMenu\t\t: %s", menu);
	printf ("\nMenu Price\t: RM %.2f", price);
	printf ("\nExtra\t\t: %s", extra);
	printf ("\nExtra Price\t: RM %.2f", price_extra);
	printf ("\nDelivery\t: %c", delivery);
	printf ("\nDelivery Price\t: RM %.2f", price_delivery);
	
	printf ("\n\nBill\t\t: RM %.2f", total_bill);
} 
