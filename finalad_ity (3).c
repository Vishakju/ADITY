#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int i,j;
int main_exit;
void menu();
void bank();
void fordelay();

//_____________________

void pay()
{int p=100000,money,bal,m;
    printf("\n\t\t\t\t\tYOUR ACCOUNT BALANCE $%d",p);
    printf("\n\t\t\t\t\tENTER AMOUNT TO BE PAY:$");
    scanf("%d",&money);
    if(money<100000)
    {printf("\n\n\t\t\t\t\tAmount has been payed...:)");
     bal=100000-p;
    printf("\n\t\t\t\t\tYOUR BALANCE ACCOUNT IS $%d",bal);
    back:
    printf("\npress 1 to go main menu and 2 to quit");
    scanf("%d",&m);
    if(m==1)
    {loading();
     menu();
    }
    else if(m==2)
    {
        loading();
        go();
    }
    else{
        printf("INVALID KEY!!!!!");
        goto back;
    }}
    else{
        printf("\n\nACCOUNT BALANCED IS TOO LOW ");
        printf("\nPAYMENT FAILED");
        back1:
        printf("press 1 to go main menu and 2 to quit");
        scanf("%d",&m);
       if(m==1)
    {loading();
     menu();
    }
    else if(m==2)
    {


        loading();

        go();
    }
    else{
        printf("INVALID KEY!!!!!");
        goto back1;
    }
    }
    }
//________________________________________________________________________________________________________________

void loading()
{system("cls");
printf("\n\n\n\n\n\n\t\t\t\t\tLOADING  ");
for(i=0;i<9;i++)
{printf("\xB2");
fordelay(10000000);
}
system("cls");
printf("\n");
}
//________________________________________________________________________________________________________________
    struct {
    char loc_nam[30];
    double loc_id;
    char loc_aval[10];
    char loc_durcost[20],loc_size[40];
    double num;
    }ent,checkk,remmm;
//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________

struct date{
    int month,day,year;
    };

//________________________________________________________________________________________________________________

struct {

    char cname[60];
    int acc_no;

    char address[60],income[60];
    char ow_name[15];
    double phone,gl_id;

    char com_type[10];
    float li_num;
    struct date dos;
    struct date datece;

    }add,upd,check,rem;
//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________
/*void bank()
{int bkamount,mainno;
system("color 80");
FILE *po;
bank_invalid:
printf("\nENTER THE ACCOUNT NUMBER:");
scanf("%d",&checkkk.acc_bank);
po=fopen("bankproceedings.txt","a+");
for( ;fscanf(po,"%d %d %s",&addd.acc_bank,&addd.acc_cif,addd.acc_bkna)!=EOF; )
{if(checkkk.acc_bank!=addd.acc_bank)
   {printf("\nAccount is not valid!!!\nplz Enter the correct account number");
   system("cls");
   goto bank_invalid;
   }
}
printf("ENTER THE CIF NUMBER:");
scanf("%d",&addd.acc_cif);
printf("ENTER THE ACCOUNT NAME:");
scanf("%s",addd.acc_bkna);
fclose(po);
printf("PROCEED TO PAY:");
scanf("%d",&bkamount);
printf("\n\nPAYMENT PROCESSING\nLOADING");
        for(i=0;i<=9;i++)
        {  fordelay(100000000);
           printf(".");
        }
menu_invalid:
printf("\nPAYMENT SUCCESSFULL\nPRESS 1 to go to main menu,o to exit :");
scanf("%d",&mainno);
if(mainno==1)
    menu;
else if(mainno==0)
    go();
else
  goto menu_invalid;
}*/
//______________________________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________

void ad_tiy()

{time_t t;
time(&t);
printf("----------------------------------------------------------------------------------------------------------------------");
printf("\n\n\t\t\t\t\t\t\t AD-ITY                          %s",ctime(&t));
printf("\n\t\t\t\t\t:\xB2\xB2\xB2\xB2\xB2\xB2\xB2 The Tool To Start Business \xB2\xB2\xB2\xB2\xB2\xB2\xB2:");
}
//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________
void go()
{system("cls");
 system("color 3F");
 loading();
    ad_tiy();
    printf("\n\n\n\n\t\t\t\t\tClosing the AD_TIY_:) !");
    fordelay(400000000);
    printf("\n\n\t\t\t\t\t****THANK YOU FOR USING AD_TIY****");
     printf("\n\n\t\t\t\t\tPROCESSING...");
        for(i=0;i<=10;i++)
        {  fordelay(100000000);
           printf(".");
        }
      printf("\n\n\tTHIS PROJECT IS DEVELOPED BY ->Mrs.VandanA CP[GuideD,AssistanT ProfessoR].\n\t\t\t\t     ->VishaK JU\n\t\t\t\t     ->UsinG C# LanguagE.\n\n\t\t\t\t");
    for(i=0;i<=50;i++)
        {  fordelay(10000000);
           printf(".");
        }
    exit(0);
    }

//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________
    void new_loc()
{
    int choice;
    FILE *ptr;
    ptr=fopen("loca.dat","a+");
    account_no1:
    system("cls");
    loading();
    ad_tiy();
     printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\ ADD LOCATION  \xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\tPlease Refer The GOogle Maps For GOogle Location ID ");
    fordelay(10000000);
    printf("\n\n\nEnter the Google location Id number:gd");
    scanf("%lf",&checkk.loc_id);
    while(fscanf(ptr,"%lf %s %s %s %s %lf\n",&ent.loc_id,ent.loc_nam,ent.loc_aval,ent.loc_durcost,ent.loc_size,&ent.num)!=EOF)
     {      if (checkk.loc_id==ent.loc_id)
            {printf("\nlocation no. already in use!");
            fordelay(1000000000);
                goto account_no1;
            }
    }
    ent.loc_id=checkk.loc_id;
    printf("\nEnter the location name:");
    scanf("%s",ent.loc_nam);
    printf("\nEnter location availability(YES/NO):");
    scanf("%s",ent.loc_aval);
    printf("\nEnter the $cost/period:$");
    scanf("%s",ent.loc_durcost);
    printf("\nType of board:\n\t#4 sheet(40feet*60feet)\n\t#6 sheet(1200mm*1800mm)\n\t#12 sheet(120feet*60feet)\n\t#16 sheet(80feet*120feet)\n\t#32 sheet(160feet*120feet)\n\t48sheet(240feet*120feet)\n\t96 sheet(480feet*120feet)\n\n\tEnter your choice:");
    scanf("%s",ent.loc_size);
    printf("\nenter the Contact number:");
    scanf("%lf",&ent.num);
    fprintf(ptr,"%lf %s %s %s %s %lf\n",ent.loc_id,ent.loc_nam,ent.loc_aval,ent.loc_durcost,ent.loc_size,ent.num);
    fclose(ptr);
    printf("\nlocation created successfully!");
    add_invalid1:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
            menu();
    else if(main_exit==0)
            go();
    else
        {   printf("\nInvalid!\a");
            goto add_invalid1;
        }
}
//________________________________________________________________________________________________________________
void erase(void)
{
FILE *old,*newrec;
int test=0;
system("cls");
loading();
ad_tiy();
old=fopen("loca.dat","r");
newrec=fopen("loca13.dat","w");
printf("\n\n\t\t\t\t\tEnter the Location ID you Want To Delete:\n\t\t\t\t\t\t");
scanf("%d",&remmm.loc_id);
while(fscanf(old,"%lf %s %s %s %s %lf\n",&ent.loc_id,ent.loc_nam,ent.loc_aval,ent.loc_durcost,ent.loc_size,&ent.num)!=EOF)
{
if(ent.loc_id!=remmm.loc_id)
fprintf(newrec,"%lf %s %s %s %s %lf\n",ent.loc_id,ent.loc_nam,ent.loc_aval,ent.loc_durcost,ent.loc_size,ent.num);
else
{test++;
printf("\nLocation Deleted Successfully!\n");
}
}
fclose(old);
fclose(newrec);
remove("loca.dat");
rename("loca13.dat","loca.dat");
if(test==0)
{
printf("\nlocation not found!!\a\a\a");
erase_invalid:
printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
scanf("%d",&main_exit);
if (main_exit==1)
menu();
else if(main_exit==2)
go();
else if(main_exit==0)
erase();
else
{printf("\nInvalid!\a");
goto erase_invalid;}
}
else
{printf("\nEnter 1 to go to the main menu and 0 to exit:");
scanf("%d",&main_exit);
system("cls");
if (main_exit==1)
menu();
else
go();
}
}
//________________________________________________________________________________________________________________
void list()
{int select,bill_select,bus_select,again,pro,amount,no_bus;
static i;
int k=99;
 FILE *id,*ptr;
 invalid_bill:
 system("cls");
 loading();
 ad_tiy();
 printf("\n\t\t\t****ADVERTISEMENTS****");
 printf("\n\t\tLIST OF ADVERTISEMENTS");
 printf("\n\n1.BILL BOARDS ADVERTISEMENTS\n\n2.BUS ADVERTISEMENTS\n\n3.EXIT\n\n\t\t\t\t\tEnter Your Choice:");
 scanf("%d",&select);
 if(select==1)
{system("cls");
ad_tiy();
 printf("\n\t\t\t\t\t****ADVERTISEMENTS****");
 printf("\n\t\t\t\t****BILL BOARDS ADVERTISEMENTS****");
 printf("\n\tSELECT THE LOCATION WHICH YOU WANT TO ADVERTISE YOUR COMPANY OR PRODUCTS:");
 view_list();
 id=fopen("recordg.txt","a+");
 account_no2:
printf("\n\n\tENTER THE LOCATIONS Id To Book:\n ");
scanf("%d",&check.gl_id);
while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %lf\n",&add.acc_no,add.cname,&add.dos.month,&add.dos.day,&add.dos.year,&add.income,add.address,add.ow_name,&add.phone,add.com_type,&add.li_num,&add.datece.month,&add.datece.day,&add.datece.year,&add.gl_id)!=EOF)
    { if(check.gl_id==add.gl_id)
    {      printf("\nlocations no. Already in use!");
            fordelay(1000000000);
            printf("\nSelect another location");
            fordelay(1000000000);
            goto account_no2;
    }}/
add.gl_id==check.gl_id;
fprintf(id,"%lf",add.gl_id);
fclose(id);
printf("\n****Selected Successfully****");
printf("\n\tDo You Want To Advertise Once Again in Different location\n1.yes\n2.No\nEnter your choice:");
scanf("%d",&again);
if(again==1)
{list();
}
if(again==2)
{
go();
}
}
else if(select==2)
 system("cls");
ad_tiy();
printf("\n\n\t\t\t\t\t****BUS ADVERTISEMENTS****");
 printf("\n\n\tSELECT THE DEPOT WHICH YOU WANT TO ADVERTISE YOUR COMPANY OR PRODUCTS:");
 printf("\n\n\tDEPOTS LOCATIONS:\n\n\t1.BANGALORE\n\n\t2.MYSORE\n ");
scanf("%d",&bus_select);
if(bus_select==1)
{system("cls");
ad_tiy();
  printf("\n\t\t\t\t\t****Bangalore Depot****");
 printf("\n\tDepot number:342(sarjapur),500(silkboard)");
 printf("\n\tADDRESS     :varthur,Bangalore-01");
 printf("\n\tCost Per Bus:$100/Bus");
 printf("\n\tDuration    :28 days");
 printf("\n\tTHE NUMBER OF BUS Available(%d/100)\nEnter the number of buses you want:",k);
 scanf("%d",&no_bus);
 printf("\n\n\t\tProceed The booking:\n\t1.proceed.\n\t2.Cancel.\n\t\t\t\t\tEnter your choice:\n\t\t\t\t\t\t");
 scanf("%d",&pro);
 if(pro==1)
 {   system("cls");
 ad_tiy();
     printf("\n\n\t\t\t\t\t****PAYMENT PROCESS****");
     amount=100*no_bus;
     printf("\n\t Amount to be pay:%d",amount);
     fordelay(1000000000);
     pay();
     system("cls");
     //bank();
     go();
 }
else{
    printf("\n\n\t\t\t\t\treturn to main menu");
    for(i=0;i<=6;i++)
        {
           printf(".");
        }
        menu();
}}
if(bus_select==2)
{system("cls");
ad_tiy();
    printf("\n\t\t\t\t\t****MYSORE Depot****");
 printf("\n\tDepot number:333(kesare),555(marase)");
 printf("\n\tADDRESS     :Agrahara,mysuru-09");
 printf("\n\tCost Per Bus:$100/Bus");
 printf("\n\tDuration    :28 days");
 printf("\n\tTHE NUMBER OF BUS Available (%d/100)\nenter the number of buses you want:",k);
 scanf("%d",&no_bus);
printf("\n\n\t\tProceed The booking:\n\t1.proceed.\n\t2.Cancel.\n\t\t\t\t\tEnter your choice:\n\t\t\t\t\t\t");
 scanf("%d",&pro);
 if(pro==1)
 {   system("cls");
     ad_tiy();
     printf("\n\n\t\t\t\t\t****PAYMENT PROCESS****");
     amount=100*no_bus;
     printf("\n\t Amount to be pay:%d",amount);
     fordelay(1000000000);
     system("cls");

    // bank();
 go();
 }
else{
    printf("\n\n\t\t\treturn to main menu");
    for(i=0;i<=6;i++)
        {
           printf(".");
        }
        menu();
}
}
else if(select==3)
{go();
}
else
{
    printf("invalid!!!!");
    goto invalid_bill;
}
}


//________________________________________________________________________________________________________________
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________
void new_acc()

{
    int choice;
    FILE *ptr;
    ptr=fopen("recordg.dat","a+");
    account_no:
    system("cls");
    system("color 37");
    loading();
    ad_tiy();
    printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2 CREATE ACCOUNT  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy)       :");
    scanf("%d/%d/%d",&add.datece.month,&add.datece.day,&add.datece.year);
    printf("\nEnter the account number             :");
    scanf("%d",&check.acc_no);
    for(;fscanf(ptr,"%d %s %d/%d/%d %s %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.cname,&add.dos.month,&add.dos.day,&add.dos.year,add.income,add.address,add.ow_name,&add.phone,add.com_type,&add.li_num,&add.datece.month,&add.datece.day,&add.datece.year)!=EOF;)
    {
        if (check.acc_no==add.acc_no)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto account_no;

            }
    }
    add.acc_no=check.acc_no;
    printf("\nEnter the company name               :");
    scanf("%s",add.cname);
    printf("\nEnter the date of started(dd/mm/yyyy):");
    scanf("%d/%d/%d",&add.dos.month,&add.dos.day,&add.dos.year);
    system("color 73");
    printf("\nEnter the password:");
    scanf("%s",add.income);
    system("color 37");
    printf("\nEnter the company address            :");
    scanf("%s",add.address);
    printf("\nEnter the company OwnerName          :");
    scanf("%s",add.ow_name);
    printf("\nEnter the company phone number       :");
    scanf("%lf",&add.phone);
    printf("\nEnter the company lisense numder     :KA");
    scanf("%f",&add.li_num);
    printf("\nType of company :\n\t#commerial\n\t#software company\n\t#Restaurant or Hotel\n\t#Automobiles company\n\t#others(type the type of company)\n\n\tEnter your choice:");
    scanf("%s",add.com_type);
    fprintf(ptr,"%d %s %d/%d/%d %s %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.cname,add.dos.month,add.dos.day,add.dos.year,add.income,add.address,add.ow_name,add.phone,add.com_type,add.li_num,add.datece.month,add.datece.day,add.datece.year);
    fclose(ptr);
    printf("\nAccount created successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            go();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
//________________________________________________________________________________________________________________

void dest()
{system("cls");
system("color 3f");
printf("\n\n\n\n\t\t\t\t\t::\t           :   :                 ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t          ::: :::                ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t         :::::::::               ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t       :::   :   :::             ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t    :::::         :::::          ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t     :::           :::           ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t    :::             :::          ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t   :::               :::         ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t  :::                 :::        ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t :::::::::::::::::     :::       ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::::::::::::::::     :::       ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(100000000);
printf("\n\t\t\t\t\t::\t :::                   :::       ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::::                 :::::     ::");fordelay(10000000);
printf("\n\t\t\t\t\t::\t :::::                 :::::     ::");fordelay(100000000);
 }
//________________________________________________________________________________________________________________
void login(void)
{
    FILE *ptr;
    int test=0,sele,sele1,num,num1;
    int choice;
    loading();
    ad_tiy();
    ptr=fopen("recordg.dat","r");
    printf("\n\n\t\t\t\t\t\t   \xB2\xB2\xB2\xB2 LOGIN BY \xB2\xB2\xB2\xB2\n\n\t1.Account Number\t\t\t\t\t\t\t\t   CurrenT LocatioN:IndiA\n\t2.Owner Name\n\t\t\t\tEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {   printf("\n\n\n\t Account Number     :");
        scanf("%d",&check.acc_no);
        while (fscanf(ptr,"%d %s %d/%d/%d %s %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.cname,&add.dos.month,&add.dos.day,&add.dos.year,add.income,add.address,add.ow_name,&add.phone,add.com_type,&add.li_num,&add.datece.month,&add.datece.day,&add.datece.year)!=EOF)
            {
            if(add.acc_no==check.acc_no)

            {  printf("\n\t Password           :");
               scanf("%s",check.income);
               num = atoi(check.income);
               num1 = atoi(add.income);
               if(num==num1)
               {system("cls");
                test=1;
                 ad_tiy();
                printf("\nAccount NO.       :%d\nCOMPANY NAME      :%s\nDOS               :%d/%d/%d\nAddress           :%s\nOWNER NAME        :%s\nPhone Number      :%.0lf\nType Of COMPANY   :%s\nLICENSE NUMBER    :$ %.2f\nDATE OF CREATE ACCOUNT:%d/%d/%d\n\n",add.acc_no,add.cname,add.dos.month,add.dos.day,add.dos.year,add.address,add.ow_name,add.phone,
                add.com_type,add.li_num,add.datece.month,add.datece.day,add.datece.year);
                printf("\n\t\t\t\t1.Add Location\t\t\t\t2.Book Advisitment\t\t\t\t3.MAIN MENU\n\t\t\t\t\tENTER YOUR CHOICE:");
                scanf("%d",&sele);
      if(sele==1)
                {in_invalid:
                 system("cls");
                 ad_tiy();
                 printf("\n\n\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2 Create Location \xB2\xB2\xB2\xB2");
                 printf("\n\n\n\t\t\t\t1.Add Location\n\t\t\t\t2.Remove Location\n\n\t\t\t\t\t\tENTER YOUR CHOICE:");
                 scanf("%d",&sele1);
                 if(sele1==1)
                 {system("cls");
                 ad_tiy();
                 new_loc();
                 }
                 else if(sele1==2)
                 {system("cls");
                     ad_tiy();
                     printf("\n\n\t\t\t\t\t\t****REMOVE LOCATION****");
                     erase();
                 }
                 else{printf("invalid!!!");
                 fordelay(1000000);
                 goto in_invalid;
                 }
                }
    else if(sele==2)
            {
                 system("cls");
                 ad_tiy();
                 printf("\n\n\t\t\t\t\t\t\t****BOOK ADVISITMENT****");
                 list();
                 }
    else if(sele=3)
        menu();
               }
               else{
                printf("invalid password!!!!");
                fordelay(100000000);
                login();
               }

            }
        }
    }
    else if (choice==2)
    {   printf("\n\n\tEnter the name:");
        scanf("%s",check.ow_name);
        while (fscanf(ptr,"%d %s %d/%d/%d %s %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.cname,&add.dos.month,&add.dos.day,&add.dos.year,add.income,add.address,add.ow_name,&add.phone,add.com_type,&add.li_num,&add.datece.month,&add.datece.day,&add.datece.year)!=EOF)
        {
            if(strcmpi(add.ow_name,check.ow_name)==0)
            {  printf("\n\n\tEnter the  password     :");
               scanf("%s",check.income);
               num = atoi(check.income);
               num1 = atoi(add.income);
               if(num==num1)
               {system("cls");
                test=1;
                printf("\nAccount NO.       :%d\nCOMPANY NAME      :%s\nDOS               :%d/%d/%d\nAddress           :%s\nOWNER NAME        :%s\nPhone Number      :%.0lf\nType Of COMPANY   :%s\nLICENSE NUMBER    :$ %.2f\nDATE OF CREATE ACCOUNT:%d/%d/%d\n\n",add.acc_no,add.cname,add.dos.month,add.dos.day,add.dos.year,add.address,add.ow_name,add.phone,
                add.com_type,add.li_num,add.datece.month,add.datece.day,add.datece.year);
printf("\n\t\t\t\t1.Add Location\t\t\t\t2.Book Advisitment\n\t\t\t\t\tENTER YOUR CHOICE:");
                scanf("%d",&sele);
      if(sele==1)
                {in:
                 system("cls");
                 ad_tiy();
                 printf("\n\n\t\t\t\t\t\t****ADD LOCATION****");
                 printf("\n\n\n\t\t\t\t1.Add Location\n\t\t\t\t2.Remove Location\n\n\t\t\t\t\t\tENTER YOUR CHOICE:");
                 scanf("%d",&sele1);
                 if(sele1==1)
                 {system("cls");
                 ad_tiy();
                     printf("\n\n\t\t\t\t\t\t****ADD LOCATION****");
                     new_loc();
                 }
                 else if(sele1==2)
                 {system("cls");
                 ad_tiy();
                     printf("\n\n\t\t\t\t\t\t****REMOVE LOCATION****");
                     erase();
                 }
                 else{printf("invalid!!!");
                 goto in;}
                }
    else if(sele==2)
            {
                 system("cls");
                 ad_tiy();
                 printf("\n\n\t\t\t\t\t\t\t****BOOK ADVISITMENT****");
                 list();
                 }
else{
                printf("invalid password!!!!");
                fordelay(100000000);
                login();
            }
        }
    }}}


    fclose(ptr);
     if(test!=1)
        {   system("cls");
            printf("\nAccount number  not found!!\a\a\a");
            see_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    go();
                else if(main_exit==0)
                    login();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else
           {

             system("cls");
            go();
            }

}
//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________
void view_list()
{
    FILE *vie;
    vie=fopen("loca.dat","r");
    int test=0,kl;
    system("cls");
    loading();
    ad_tiy();
    printf("\n\n\n\tloc Google ID   |Location Name  |Location Availability  |Cost Per Period($/period)      |Bill Board Sheet       |contact number\n\n\n");
    while(fscanf(vie,"%lf %s %s %s %s %lf\n",&ent.loc_id,ent.loc_nam,ent.loc_aval,ent.loc_durcost,ent.loc_size,&ent.num)!=EOF)
       {
    printf("\t%0.lf\t\t|:%6s\t|:%6s\t\t|:$%4s\t\t\t|:%6s\t\t|:%0.lf\n",ent.loc_id,ent.loc_nam,ent.loc_aval,ent.loc_durcost,ent.loc_size,ent.num);
           test++;
       }
    fclose(vie);
    if(test==0)
{ system("cls");
loading();
ad_tiy();
  printf("\n\n\t\t\t\t\tLocations  Sever Empty!!\n");
  printf("\n\t\t\t\t\tPlease Come Back Afther Sometime.:)..");
   printf("\n\n\n\t\t\t\t\tlOCATION SEREVER WILL BE UPDATED\n");
  view_list_invalid:
  printf("\n\nEnter 1 to go to the ADVISITMENTS MENU and 0 to exit:");
  scanf("%d",&main_exit);
  system("cls");
  if (main_exit==1)
  list();
  else if(main_exit==0)
  go();
  else
{printf("\nInvalid!\a");
 goto view_list_invalid;
}}}
//__________________________________________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________


void view_list12()
{
    FILE *view;
    ad_tiy();
    view=fopen("recordg.dat","r");
    int test=0;
    loading();
    system("cls");
    printf("\nACC. NO.\tCompanYNamE\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %s %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.cname,&add.dos.month,&add.dos.day,&add.dos.year,add.income,add.address,add.ow_name,&add.phone,add.com_type,&add.li_num,&add.datece.month,&add.datece.day,&add.datece.year)!=EOF)
       {
           printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",add.acc_no,add.cname,add.address,add.phone);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            close();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }
}


void erase_acc(void)
{
    FILE *old,*newrec;
    int test=0;
    loading();
    ad_tiy();
    old=fopen("recordg.dat","r");
    newrec=fopen("new.dat","w");
    printf("\n\nEnter the Account No. Of The Account You Want To Delete:");
    scanf("%d",&rem.acc_no);
    while(fscanf(old,"%d %s %d/%d/%d %s %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.cname,&add.dos.month,&add.dos.day,&add.dos.year,add.income,add.address,add.ow_name,&add.phone,add.com_type,&add.li_num,&add.datece.month,&add.datece.day,&add.datece.year)!=EOF)
   {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %s %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.cname,add.dos.month,add.dos.day,add.dos.year,add.income,add.address,add.ow_name,add.phone,add.com_type,add.li_num,add.datece.month,add.datece.day,add.datece.year);

        else
            {test++;
            printf("\nAccount deleted successfully!\n");
            }
   }
   fclose(old);
   fclose(newrec);
   remove("recordg.dat");
   rename("new.dat","recordg.dat");
   if(test==0)
        {
            printf("\nRecord not found!!\a\a\a");
            erase_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);

                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    go();
                else if(main_exit==0)
                    erase_acc();
                else
                    {printf("\nInvalid!\a");
                    goto erase_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            go();
        }

}



//________________________________________________________________________________________________________________
//________________________________________________________________________________________________________________
void menu(void)
{   int choice;
    invalid_menu:
    system("cls");
    system("color 73");
    time_t t;
    time(&t);
    printf("\n\n\t\t\t\t\t\t%s",ctime(&t));
    printf("\n\n\t\t\t\t\t\t\tAD-ITY..:)..");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ThE TooL To StarT BusinesS \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n\t\t\t1.CreatE AccounT\t\t\t\t3.LogiN \n\n\t\t\t2.RemovE ExisT AccounT\t\t\t\t4.ExiT\n\n\n\n\n\t\t\t\t\t\t Enter your choice:\n\t\t\t\t\t\t\t>>");
    scanf("%d",&choice);
    system("cls");
    if(choice==1)
     new_acc();
    else if(choice==2)
     erase_acc();
     else if(choice==3)
      login();
      else if(choice==5)
      view_list12();
     else if(choice==4)
      go();
     else
     {printf("\nInvalid Value!!!!!!");
       goto invalid_menu;
     }

     }
//________________________________________________________________________________________________________________
//___________________________________________________________________________________________________________________________________________________________
int main()
{
    int pass;
    char password[10]="NHCE";
     int i=0;
     system("color 70");
    printf("\n\n\n\t\t\t**NEW HORIZON COLLEGE OF ENGINEERING(NHCE)**       ");
    printf("\n\t\t\t  ***Institution Affiliated To VTU***              ");
    printf("\n\t\t\t         *****MINI PROJECT*****                    ");
    printf("\n\n\n\n\t\t\tDEPARTMENT : INFORMATION SCIENCE AND ENGINEERING.  ");
    printf("\n\t\t\tBATCH      : SECOND YEAR(2017-2018).               ");
    printf("\n\t\t\tSEMESTER   : FOURTH SEMESTER.                      ");
    printf("\n\t\t\tPROJECT    : AD-ITY                                ");
    printf("\n\n\n\n\t\t\t\tEnter the 1 to START:\n\t\t\t\t\t>>");
    scanf("%d",&pass);
    loading();
    if(pass==1)
     { //printf("\n\n\nLOADING...");
        for(i=0;i<=100;i++)
        {  fordelay(1000000);
           printf("");
        }
            system("cls");
            dest();
            menu();
    }
    else
    {   printf("\n\nWRONG INTPUT!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {system("cls");

                     main();
                    }
            else if (main_exit==0)
                    {
                    go();
                    }
            else
                    {printf("\nInvalid!!!!!");
                    system("cls");
                    goto login_try;}

    }
 return 0;
}


