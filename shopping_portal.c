


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define getch() _getch()

void mode();
void userlogin(void);
void mainpage ();
void categories ();
void e ();
void ad(); 
void my_cart();
void mycart (int);
void logout();
void myaccount();
void myorders();
void b();
void helpcenter ();
void sports();
void f();
char str[100],adds[100];
int a[100];
int w=0;
int j=0;
int amount;

char uName[10], pwd[10];
struct user{
    char username[10];
    char password[10];
    char ads[20];
}*pUser;


int main()
{
	
    
	amount=0;
	mode();
    userlogin ( );
    getch();
    return 0;
}
void mode()
{  
	    FILE *file;FILE *file1;
		file=fopen("itemnames.txt","w");file1=fopen("prices.txt","w");
		fseek ( file , 0 , SEEK_SET );fseek ( file1 , 0 , SEEK_SET );
	//	fprintf(file,"%s\t\t","\n");fprintf(file1,"%d\n",0); 
		fprintf(file,"\t\t%s\t\t","Lenovo_idea_310\n");fprintf(file1,"%d\n",50000);
		fprintf(file,"%s\t\t","DELL_thinkpad\n");fprintf(file1,"%d\n",65000);
		fprintf(file,"%s\t\t","Lenovo_Ideapad_330\n");fprintf(file1,"%d\n",26890);
		fprintf(file,"%s\t\t","asus_tuf\n");	fprintf(file1,"%d\n",74990);
		fprintf(file,"%s\t\t","acer_predator\n");fprintf(file1,"%d\n",93000);
		fprintf(file,"%s\t\t","Redmi_Note_5_PRO\n");fprintf(file1,"%d\n",14999);
		fprintf(file,"%s\t\t","Asus_Zenfone_Maxpro\n");	fprintf(file1,"%d\n",12999);
		fprintf(file,"%s\t\t","POCO_F1\n");	fprintf(file1,"%d\n",23999);
		fprintf(file,"%s\t\t","ONE_Plus_6T\n");	fprintf(file1,"%d\n",41999);
		fprintf(file,"%s\t\t","ONE_Plus_6\n");	fprintf(file1,"%d\n",29999);
		fprintf(file,"%s\t\t","BOAT_HEADPHONE\n");	fprintf(file1,"%d\n",3500);	
		fprintf(file,"%s\t\t","NIKON_DSLR\n");	fprintf(file1,"%d\n",42990);
		fprintf(file,"%s\t\t","LG_SMART_TV\n");	fprintf(file1,"%d\n",68990);	
		fprintf(file,"%s\t\t","PUMA_M_JACKET\n");	fprintf(file1,"%d\n",8000);
		fprintf(file,"%s\t\t","NIKE_M_TSHIRT\n");	fprintf(file1,"%d\n",5400);
		fprintf(file,"%s\t\t","ADIDAS_M_SHIRT\n");	fprintf(file1,"%d\n",5200);
		fprintf(file,"%s\t\t","PUMA_SHOES\n");	fprintf(file1,"%d\n",3500);
		fprintf(file,"%s\t\t","NIKE_SHOES\n");	fprintf(file1,"%d\n",3400);
		fprintf(file,"%s\t\t","ADIDAS_SHOES\n");	fprintf(file1,"%d\n",3200);
		fprintf(file,"%s\t\t","ROLEX_WATCH\n");	fprintf(file1,"%d\n",22000);
		fprintf(file,"%s\t\t","SKYBAGS_BACKPACK\n");	fprintf(file1,"%d\n",1800);	
		fprintf(file,"%s\t\t","FASTRACK_SUNGLASSES\n");	fprintf(file1,"%d\n",999);
		fprintf(file,"%s\t\t","PUMA_W_JACKET\n");	fprintf(file1,"%d\n",7200);
		fprintf(file,"%s\t\t","NIKE_W_TSHIRTS\n");	fprintf(file1,"%d\n",4200);
		fprintf(file,"%s\t\t","ADIDAS_W_SHIRTS\n");	fprintf(file1,"%d\n",4500);
		fprintf(file,"%s\t\t","PUMA_SANDALS\n");	fprintf(file1,"%d\n",2600);
		fprintf(file,"%s\t\t","NIKE_SANDALS\n");	fprintf(file1,"%d\n",2400);
		fprintf(file,"%s\t\t","ADIDAS_SANDALS\n");	fprintf(file1,"%d\n",2200);
		fprintf(file,"%s\t\t","FOSSIL_WATCH\n");	fprintf(file1,"%d\n",15000);
		fprintf(file,"%s\t\t","PUMA_HANDBAG\n");	fprintf(file1,"%d\n",2500);
		fprintf(file,"%s\t\t","TANISHQ_BRACELET\n");	fprintf(file1,"%d\n",1500);
		fprintf(file,"%s\t\t","UNIX_S_PROGRAM\n");	fprintf(file1,"%d\n",500);
		fprintf(file,"%s\t\t","ENGG.MATHEMATICS\n");	fprintf(file1,"%d\n",400);
		fprintf(file,"%s\t\t","DATA STRUCTURES\n");	fprintf(file1,"%d\n",660);
		fprintf(file,"%s\t\t","DISCRETE_MATHEMATICS\n");	fprintf(file1,"%d\n",350);
		fprintf(file,"%s\t\t","WINGS_OF_FIRE\n");	fprintf(file1,"%d\n",395);
		fprintf(file,"%s\t\t","RICH_DAD_POOR_DAD\n");	fprintf(file1,"%d\n",250);
		fprintf(file,"%s\t\t","ELON_MUSK\n");	fprintf(file1,"%d\n",699);
		fprintf(file,"%s\t\t","THE_ALCHEMIST\n");	fprintf(file1,"%d\n",350);
		fprintf(file,"%s\t\t","MRF_BAT\n");	fprintf(file1,"%d\n",2899);
		fprintf(file,"%s\t\t","WOODEN_WICKETS\n");	fprintf(file1,"%d\n",700);
		fprintf(file,"%s\t\t","LEATHER_BALL\n");	fprintf(file1,"%d\n",150);
		fprintf(file,"%s\t\t","REEBOK_KIT\n");	fprintf(file1,"%d\n",11000);
	//	fprintf(file,"%s\t\t","\n");	fprintf(file1,"%d\n",);
		fclose(file);
		fclose(file1);
}


void userlogin(void){
    FILE *fp;
    int i;char c;

   T: pUser=(struct user *)malloc(sizeof(struct user));

    printf("1. SIGN IN\n\n2. SIGN UP\n");
    scanf("%d",& i);
    system("cls");
    switch(i){
        case 1:
          /*  if ( ( fp=fopen("x.txt", "r+")) == NULL) {
                if ( ( fp=fopen("x.txt", "w+")) == NULL) {
                    printf ("Could not open file\n");
                    exit ( 1);
                }
            }*/
            fp=fopen("x.txt","r+");
            printf("Username: ");
            scanf("%9s",uName);
            printf("Password: ");
            scanf("%9s",pwd);
            while ( fread (pUser, sizeof(struct user), 1, fp) == 1) 
            {   
			 if( strcmp ( pUser->username, uName) == 0)
                    {
                    if( strcmp ( pUser->password, pwd) == 0)
                       {
                       	strcpy(uName,str);
                       	system("cls");
                        mainpage();
                       }
                    }
              goto T;      
            }
            break;

        case 2:
           
              /*  if ( ( fp=fopen("x.txt", "a+")) == NULL) {
                    if ( ( fp=fopen("x.txt", "w+")) == NULL) {
                        printf ("Could not open file\n");
                        exit ( 1);
                    }
                }*/
                fp=fopen("x.txt","w");
                printf("Choose A Username: ");
                scanf("%9s",pUser->username);
                printf("Choose A Password: ");
                scanf("%9s",pUser->password);
               // printf("Address :\n");
               // scanf("%s",pUser->ads);
                fwrite (pUser, sizeof(struct user), 1000, fp);
            goto T;
          //  break;
    }
    free ( pUser);//free allocated memory
    fclose(fp);
}


	void mainpage ()
{
	//system("cls");
	int ch;
	printf("\n1.CATEGORIES\n2.MY CART\n3.MY ORDERS\n4.MY ACCOUNT\n5.HELP CENTRE\n6.LOGOUT\n");
	printf (" ENTER YOUR CHOICE\n");
	
		scanf("%d",&ch);	
	
	switch (ch)
	{
		case 1:	//system("cls");
			
			categories ();
		break;
    	case 2:  my_cart();
		break;
		case 3:  myorders();
		break;

	    case 4: myaccount();
		break;
		case 5: helpcenter();
		break;
		
		case 6: logout();
		break;
		default: printf("PLEASE ENTER CORRECT CHOICE\n");
	}
}

	void categories ()
{
		int ch1;

	//system("cls");
	
	printf ("\n");
	printf ("1.ELECTRONICS\n2.FASHION\n3.BOOKS\n4.SPORTS\n");
	printf("PRESS  5 TO GO BACK");
	scanf ("%d",&ch1);
	switch (ch1)
	{
	case 1:printf("\n\n");
			e();
			break;
	case 2: system("cls"); f();
		    break;
	case 3:system("cls");
	        b();
	        break;
	case 4:sports ();
	       break;
	default: mainpage();
	
	}
}
	void e ()
	{
		FILE *file;
		FILE *file1;
		int chh;
		int pr;
		char b[100];
		char str[100];
		system("cls");
		int ch;
		loop1:
		 file = fopen("itemnames.txt", "r");
		 file1= fopen("prices.txt","r");
		printf ("1-laptop\n2-mobile phones\n3-others\n");
		printf("PRESS  5 TO GO BACK");
		scanf("%d",&ch);
		//goto loop1;
		switch (ch)
		{
		case 1:system("cls");
			printf("\n");
			printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
			printf ("\t\t0\tLenovo ideapad-310\tRs 50,000\n");
			printf ("\t\t1\tDELL thinkpad     \tRs 65,000\n");
			printf ("\t\t2\tLenovo Ideapad 330\tRs 26,890\n");
			printf ("\t\t3\tASUS TUF\t\tRs 74990\n");
			printf ("\t\t4\tACER PREDATOR\t\tRs 93000\n");
			printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
	

			scanf("%d",&chh);
			if (chh==88)
			{
				e ();
			}
			else
			{
			
			
				mycart (chh);
				 a[w]=chh;
				 w++;
			printf("\n");
				categories();
			
			}break;
	case 2: system("cls");
		printf("\n");
			printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
			printf ("\t\t5\tRedmi Note 5 PRO\tRs 14,999 \t\t\n");
			printf ("\t\t6\tAsus Zenfone Maxpro\tRs 12999\t\t\n");
			printf ("\t\t7\tPOCO F1\t\t\tRs 23999\t\t\n");
			printf ("\t\t8\tONE Plus 6T\t\tRs 41999\t\t\n");
			printf ("\t\t9\tONE Plus 6\t\tRs 29999\t\t\n");
	        printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
			
			scanf("%d",&chh);
			if (chh==88)
			{
				e ();
			}
			else
			{
					mycart (chh);
				 a[w]=chh;
				 w++;
			printf("\n");
				categories();
			
			}break;
		case 3:  system("cls");
			printf("\n");
			printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
			printf ("\t\t10\tBOAT HEADPHONE\t\tRs 3500 \t\t\n");	
			printf ("\t\t11\tNIKON DSLR\t\tRs 42990 \t\t\n");	
			printf ("\t\t12\tLG SMART TV\t\tRs 68990 \t\t\n");
			printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
			
			scanf("%d",&chh);
			if (chh==88)
			{
				e ();
			}
			else
			{
					mycart (chh);
				 a[w]=chh;
				 w++;
			printf("\n");
				categories();
			
			}break;		
			default: categories();
		}}}}}
	void mycart (int x )
	{
		int line1;
		int index;
		char c[100];
		printf ("-----------my cart--------------\n");
		printf (" WE HAVE REGISTERED YOUR WISH :\n");
		index = x;
		time_t t = time(NULL);
struct tm tm = *localtime(&t);
static const char filename[] = "itemnames.txt";
FILE *file = fopen(filename, "r");fseek ( file , index , SEEK_SET );
int count = 1;
if ( file != NULL )
{
    char line[100]; 
    while (fgets(c, sizeof line, file) != NULL) 
    {
        if (count == index)
        {
			fgets(c,sizeof line,file);
			printf ("%s\t",c);
			count++;
        }
        else
        {
            count++;
        }
    }
    fclose(file);
}

FILE *file1 = fopen("prices.txt", "r");fseek ( file1 , index , SEEK_SET );
int count1 = 1;
if ( !feof(file1) ) 
{
   
   // while (fgets(line1, sizeof line1, file) != NULL) /* read a line */
   while( fscanf(file1, "%d,", &line1) > 0 )
    {
        if (count1 == index)
        {
        	fscanf(file1, "%d,", &line1);
			//fgets(c,sizeof line1,file);
			printf ("\t%d",line1);
			count1++;
			amount+=line1;
        }
        else
        {
            count1++;
        }
    }
    fclose(file1);
   //categories();
}
else
{

    //file doesn't exist
}

	}

void logout ()
{
	int x;
	printf("\tPRESS 1 TO EXIT THIS APPLICATION\nPRESS 2 FOR SIGN IN / SIGN UP\n");
	scanf("%d",&x);
	printf ("--------------------THANKS FOR SHOPPING-------------------\n");
	printf("\t----------------------VISIT US AGAIN-----------------------\n ");
	if (x==1)
	   exit(1);
	else
	userlogin();
}
void myaccount()
{
	int p;
	printf("\n");
	printf("\t-----------------MY ACCOUNT--------------------\n");
	printf("\n");
	printf("\tUSERNAME:\t%s\n",uName);
	printf("\tPASSWORD:\t%s\n",pwd);
//	printf("\tADDRESS:\t%s\n",adds);
printf("Press 88 to go back\n");

scanf("%d",&p);
if(p==88)
	mainpage();
	
}

void my_cart ()
{
	int y,z,k;
	char c1[100];
	int count111=0;int ct=0;
	int pay;
	char linee[100];z=0;	
char un[1],pa[1],card[20],cpas[20];
	int linee1;int count11 = 0;char line[100]; 
	
	printf("---------------YOUR ORDERS--------------------\n");
	static const char filename[] = "itemnames.txt";
FILE *file = fopen(filename, "r");FILE *file1 = fopen("prices.txt", "r");fseek ( file1 , 0 , SEEK_SET );
for (k=0;k<=2;k++)
{

    fseek ( file , 0 , SEEK_SET );
    count11=0;
	while (fgets(c1, 1000, file) != NULL) 
    {
        if (count11 == y)
        {
			fgets(c1,1000,file);
			printf ("%s\t",c1);
			
			count11++;
			break;
        }
        else
        {
            count11++;
        }
    }
    	count111=0;
	printf("%d\t",a[k]);   
	fseek ( file1 , 0 , SEEK_SET );
	y=a[k];
	while( fscanf(file1, "%d", &linee1) > 0 )
    {
        if (count111 == y)
        {
        	fscanf(file1, "%d", &linee1);
			
			printf ("\t%d\n",linee1);
			count111++;
			break;
        }
        else
        {
            count111++;
        }
    }
	
}
fclose(file);fclose(file1);	printf("\nTOTAL AMOUNT PAYABLE:\tRs\t%d\n",amount);
printf ("\n\n");
printf ("\t\tSELECT MODE OF PAYMENT--\n");
printf ("1-CASH ON DEMAND\n2-ONLINE PAYMENT\n");
printf ("Please select using index or press 88 to go back\n");

scanf("%d",&pay);
if(pay==88)
	mainpage();
else
{

switch (pay)
{ 
	case 1: printf("\n\t\tORDER PLACED \n\t\tTHANK YOU FOR SHOPPING\n\t\tVISIT US AGAIN\n");
			exit(0) ;
PAYM:			
	case 2: printf("\n\t\tENTER USERNAME :\t");
			scanf("%s",un);
			printf("\n\t\tENTER PASSWORD :\t");
			scanf ("%s",pa);
			ct++;
			if (strcmp(uName,un)==0 && strcmp(pwd,pa)==0)
			{
				printf("\n\t\tENTER CARD NUMBER:\t");
				scanf("%s",card);
				printf ("\n\t\tENTER PASSWORD:\t");
				scanf("%s",cpas);
				printf("\n\t\tORDER PLACED \n\t\tTHANK YOU FOR SHOPPING\n\t\tVISIT US AGAIN\n");
			}
			else if (ct<3)
			{
				
				goto PAYM;
			}
			else
			{
				exit(0);
			}
		
}
 mainpage();	}}
void f()
{
	int chh,chh1,chh2;
	printf(" 1.MEN\n2.WOMEN\n");
	printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
	scanf("%d",&chh);
			
	if(chh==88)
	{
		
	}
	switch(chh)
	{
		case 1: printf("1.CLOTHING\n2.FOOTWEAR\n3.ACCESORIES\n");
		scanf("%d",&chh2);
		printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
		switch(chh2)
		{
			case 1: printf("\t\t13\tPUMA M JACKET\t\t8000\n\t\t14\tNIKE M T-SHIRT\t\t5400\n\t\t15\tADIDAS M SHIRT\t\t5200\n");
						
							printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
						if (chh==88)
			{
				f ();
			}
			else
			{
					scanf("%d",&chh1);
						mycart (chh1);
				 a[w]=chh1;
				 w++;
			printf("\n");
				categories();}
			break;
			case 2: printf("\t\t16\tPUMA  SHOES\t\t3500\n\t\t17\tNIKE SHOES\t\t3400\n\t\t18\tADIDAS SHOES\t\t3200\n");
						printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
					if (chh==88)
			{
				f ();
			}
			else
			{
					scanf("%d",&chh1);
						mycart (chh1);
				 a[w]=chh1;
				 w++;
			printf("\n");
				categories();}
			break;
			case 3: printf("\t\t19\tROLEX WATCH\t\t22000\n\t\t20\tSKYBAGS BACKPACK\t\t1800\n\t\t21\tFASTRACK SUNGLASSES\t\t999\n");
						printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
					if (chh==88)
			{
				f();
			}
			else
			{
					scanf("%d",&chh1);
						mycart (chh1);
				 a[w]=chh1;
				 w++;
			printf("\n");
				categories();}
			break;
		
		}
		break;
		case 2:printf("1.CLOTHING\n2.FOOTWEAR\n3.ACCESORIES\n");
		scanf("%d",&chh1);
		printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
		switch(chh1)
		{
			case 1: printf("\t\t22\tPUMA W JACKET\t\t7200\n\t\t23\tNIKE W T-SHIRTS\t\t4200\n\t\t24\tADIDAS W SHIRTS\t\t4500\n");
						printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
					if (chh==88)
			{
				f ();
			} 
			else 
			{
					scanf("%d",&chh1);
						mycart (chh1);
				 a[w]=chh1;
				 w++;
			printf("\n");
				categories();}
			break;
			case 2: printf("\t\t25\tPUMA SANDALS\t\t2600\n\t\t26\tNIKE SANDALS\t\t2400\n\t\t27\tADIDAS SANDALS\t\t2200\n");
						printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
					scanf("%d",&chh1);
					if (chh==88)
			{
				f ();
			}
			else
			{
						mycart (chh1);
				 a[w]=chh1;
				 w++;
			printf("\n");
				categories();}
			break;
			case 3: printf("\t\t28\tFOSSIL WATCH\t\t15000\n\t\t27\tPUMA HANDBAG\t\t2500\n\t\t28\tTANISQ BRACELET\t\t1500\n");
					printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
					if (chh==88)
			{
				f ();
			}
			else
			{
					scanf("%d",&chh1);
						mycart (chh1);
				 a[w]=chh1;
				 w++;
			printf("\n");
				categories();}
			break;
		}
		default: categories();
			break;		
			
	}
}
void b()
{
	int chh,chh3,chh4;
	printf("\n1\tACADEMIC\n2\tFICTION AND NON-FICTION \n");
	scanf("%d",&chh);
		printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
	switch(chh)
	{
		case 1:printf("\n\t\t29\tUNIX AND SHELL PROGRAMMING\t\t500\n\t\t30\tENGG.MATHEMATICS\t\t\t400\n\t\t31\tDATA STRUCTURES\t\t\t\t660\n\t\t32\tDISCRETE MATHEMATICS\t\t\t350\n");
		   	   	printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");    
			   scanf("%d",&chh3);
			   chh4=chh3;
			   	if (chh4==88)
			{
				b();
			}
			else
			{
				
					mycart (chh4);
				 a[w]=chh4;
				 w++;
			printf("\n");
				categories();}
			break;
		case 2:printf ("\n\t\t33\tWINGS OF FIRE\t\t395\n\t\t34\tRICH DAD POOR DAD\t250\n\t\t35\tELON MUSK\t\t699\n\t\t36\tTHE ALCHEMIST\t\t350\n");
		        	printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");    
			   scanf("%d",&chh3);
			   chh4=chh3;
			   	if (chh4==88)
			{
				b();
			}
			else
			{
				
						mycart (chh4);
				 a[w]=chh4;
				 w++;
			printf("\n");
				categories();
			}
			break;
		default:categories();
	}
}
void helpcenter ()
 {
 	int zx;
 	do
 	{
	
 	printf ("----------------USER GUIDELINES------------------\n");
 	printf ("\t1--USERID MUST HAVE MAXIMUM 10 CHARACTERS\n");
 	printf("\t2--PASSWORD MUST BE MAXIMUM 10 CHARACTERS\n");
 	printf("\t3--YOU WILL BE LOGGING IN USING YOUR USER ID ONLY\n");
 	printf("\t4--PLEASE KEEP YOUR USERID AND PASSWORD CONFIDENTIAL\n");
 	printf("\t\n\nPRESS 88 TO GO BACK\n");
 	scanf ("%d",&zx);
 	system ("cls");
 }while (zx!=88);
 	mainpage(); 
	
 }
 void sports ()
 {
 	int chh;
 		printf ("\t\tINDEX\t\tITEM\t\tORIGINAL PRICE\n");
 	printf("\n\t\t37\tMRF BAT\t\t\t2899\n\t\t38\tWOODEN WICKETS\t\t700\n\t\t39\tLEATHER BALL\t\t150\n\t\t40\tREEBOK KIT\t\t11000\n");
 		printf ("Please select using index or press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
	 scanf("%d",&chh);
 	
			   	if (chh==88)
			{
					categories();
			}
			else
			{
				
					mycart (chh);
				 a[w]=chh;
				 w++;
			printf("\n");
				categories();}
		
 	
 }
 void myorders()
 {
 	int chh,c,n;
 	system("cls");
 	 for (c = 1; c <= 10000; c++) {
    n = rand() % 100 + 1;
   // printf("%d\n", n);
  }
  
 	printf("\t\tYOUR ORDER WITH ORDER NO \t%d\tIS BEING PROCESSED\nYOU WILL RECIEVE YOUR ORDER WITHIN 7 WORKING DAYS FROM DATE OF ORDER\n",n);
 		printf ("Please  press 88 to go back\n");
			printf("------------------------------------------------------------------------------\n");
	 scanf("%d",&chh);
 	
			   	if (chh==88)
			{
				mainpage();
			}
			else
			myorders();
 }
			
		
	







