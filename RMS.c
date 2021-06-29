
#include <stdio.h>
#include <stdlib.h> //here I have taken 6 header files for my project purpose.
#include <string.h>
#include <conio.h>
#include <process.h>
#include <windows.h>

                                             ///Team CodeBreakers;


///Method Declaration
void Admin();
void User();
void panel();
void login();
void sign_in();
void sign_up();
void write();
void show_list();
void show_list_del();
void deleterecord();
void catagory();
void rate_search();
void price_search();
void order();
void update();
void list_cat();
void about();

void gotoxy(int x, int y)
{
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
struct rest
{
    char food[80];
    char catagory[80];
    int code;
    int rate;
    int price;
};

struct login                                ///Global Structures
{
     char uname[30];
     char pass[30];
 };


struct bill
    {
        int sum;
        int quantity;
        char bname[120];
        int seat;
    };

struct employee
{
    char name[80];
    int id;
    int Year;
    char department[80];
    char location[80];

};

int main() //Main Function To show welcome screen and redirect to USer and Admin Panel
{
system("color f0");
system("cls");
gotoxy(38,12);
printf("Loading RMS \n");
gotoxy(50,12);
for(int i=0;i<20;i++)
{
    Sleep(40);
    printf("%c",176);
}
gotoxy(71,12);
printf("20%");
gotoxy(38,14);
printf("Checking Data Files");
gotoxy(38,16);
printf("Checking Free Memory");
gotoxy(50,12);
for(int i=0;i<20;i++)
{
    Sleep(40);
    printf("%c",177);
}
gotoxy(71,12);
printf("50%");
gotoxy(50,12);
for(int i=0;i<20;i++)
{
    Sleep(40);
    printf("%c",176);
}
gotoxy(71,12);
printf("70%");
gotoxy(38,18);
printf("Checking File Condition");
gotoxy(50,12);
for(int i=0;i<20;i++)
{
    Sleep(40);
    printf("%c",177);
}
gotoxy(71,12);
printf("100%");
gotoxy(50,12);
for(int i=0;i<20;i++)
{
    Sleep(40);
    printf("%c",176);
}
system ("cls");
gotoxy(40,12);
printf("RMS LOADED SUCCESSFULLY..... ");
Sleep(2800);
gotoxy(38,12);
printf("WELCOME TO RMS (RESTAURANT MANAGEMENT SYSTEM)");
Sleep(3000);

panel();
}

void panel()
{
    system("color f0");
    system("cls");
    printf("                     **************************************************************************\n");
	printf("                                               || MAIN PANEL || \n");
	printf("                     **************************************************************************\n\n\n");
	Sleep(300);
    printf("\t \t \t \t1. USER Panel\n");
    Sleep(300);
    printf("\n");
    printf("\t \t \t \t2. ADMIN Panel\n");
    Sleep(300);
    printf("\n");
    printf("\t \t \t \t3. ABOUT RMS\n");
    Sleep(300);
    printf("\n");
    printf("\t \t \t \t4. EXIT\n");
    Sleep(300);
    printf("\n");
    int ch;
    printf("\t \t \t \tEnter Your Choice:\n");
    printf("\t \t \t \t--> ");
    scanf("%d", &ch);
    system("cls");
    switch(ch)
    {
    case 1:
        User();
        break;
    case 2:
       login();
        break;
    case 3:
        about();
        break;
    case 4:
        exit(0);
    default:
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t \t \t \tWrong Input\n");
    }
    getch();
    return panel();
}

void about()
{
    system("color f0");
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\t\t\t\t\t\t ABOUT THIS PROJECT\n");
getch();
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf(" \t ---> The RMS (RESTAURANT MANAGEMENT SYSTEM) is a basic program used in resturants in C programming Language.\n");
Sleep(800);
printf("\n");
printf(" \t ---> This Application helps to manage the food system in a restaurant.\n");
Sleep(800);
printf("\n");
printf(" \t ---> In this project you can view all available foods, search them by rating,prices or catagory.\n");
Sleep(800);
printf("\n");
printf(" \t ---> You can also add food info delete food info & order food from the list.\n");
Sleep(800);
printf("\n");
getch();
system("cls");
return panel();
}

void login()  // This function will create a login form at the beginning
{

system("color f0");

    printf("                     **************************************************************************\n");
	printf("                                               || LOGIN MENU || \n");
	printf("                     **************************************************************************\n\n\n");
	printf("\n");
	printf("\t\t\t1.Sign Up\n");
	printf("\n");
	printf("\t\t\t2.Sign In\n");
	printf("\n");
	printf("\t\t\t3.Go Back\n");
	printf("\n");
	printf("\t\t\tPlease choose one..... \n");
	printf("\n");
	printf("\t\t\t--> ");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
    case 1:
        sign_up();
        break;
    case 2 :
        sign_in();
        break;
    case 3:
        panel();
    default:
        printf("\t\t\t\t\t\tWrong Input!!!!! \n");
        getch();
        system("cls");
        return login();
	}
}
void sign_up()
{
    system("color f0");
    system("cls");
    struct login l;
    FILE*fp;
    fp=fopen("DATA.dat","wb");
    if (fp==NULL)
    {
        printf("ERROR : The File Doesn't Exist");

    }
    printf("                     **************************************************************************\n");
	printf("                                                ||| SIGN UP ||| \n");
	printf("                     **************************************************************************\n\n\n");
    printf("\t\t\t\t\t Please Enter your User Name \n");
    printf("\t\t\t\t\t--> ");
    fflush(stdin);
    gets(l.uname);
    printf("\t\t\t\t\tPlease Enter your Password \n");
    printf("\t\t\t\t\t--> ");
    gets(l.pass);
    fwrite(&l,sizeof(l),1,fp);
    fclose(fp);
    system ("cls");
    printf("                     **************************************************************************\n");
	printf("                                                ||| SIGN UP ||| \n");
	printf("                     **************************************************************************\n\n\n");
    printf("\t\t\t\t\t DATA HAS BEEN SAVED!!!");
    getch();
    printf("\n");
    printf("Press any key to continue\n");
    system ("cls");
    return login();
}

void sign_in()
{
    system("color f0");
    system("cls");
    printf("                     **************************************************************************\n");
	printf("                                                ||| SIGN IN ||| \n");
	printf("                     **************************************************************************\n\n\n");
    struct input
    {
    char uname1[30];
    char pass1[30];
    };
    struct input u;
    struct login l;
    FILE *fp;
    fp=fopen("DATA.dat","rb");
    if (fp==NULL)
    {
        printf("\t\t\t\t\tDATA HAS BEEN CORRUPTED!");
    }
    printf("\t\t\t\t\tPlease Enter Your User Name \n");
    printf("\t\t\t\t\t--> ");
    fflush(stdin);
    gets(u.uname1);
    printf("\t\t\t\t\tPlease Enter Your Password \n");
    printf("\t\t\t\t\t--> ");
    gets(u.pass1);
    while(fread(&l,sizeof(l),1,fp))
    {
        if(strcmp(u.uname1,l.uname)==0 && strcmp(u.pass1,l.pass)==0)
        {
            printf("\n");printf("\n");printf("\n");printf("\n");
            printf("\t\t\t\t\tLOG IN SUCCESSFULL!\n");
            Sleep(1000);
            system("cls");
            Admin();
        }
        else
        {
                printf("\n");printf("\n");printf("\n");printf("\n");
                printf("\t\t\t\t\tLOG IN UNSUCCESSFULL\n");
                Sleep(1000);
                return sign_in();

            }

    }

    fclose(fp);
    system ("cls");
}


void Admin() //This is the Admin panel for editing the software datas
{
    system("color f0");
    printf("                     **************************************************************************\n");
	printf("                                                ||| ADMIN PANEL ||| \n");
	printf("                     **************************************************************************\n\n\n");
	printf("\n");
    printf("\t\t\t\t\tADMIN PANEL OF THE PROJECT: \n");
    Sleep(400);
    printf("\n");
    printf("\t\t\t\t\t1. ADD FOOD INFO \n");
    Sleep(400);
    printf("\n");
    printf("\t\t\t\t\t2. Delete FOOD \n");
    Sleep(400);
    printf("\n");
    printf("\t\t\t\t\t3. UPDATE FOOD FROM MENU \n");
    Sleep(300);
    printf("\n");
    printf("\t\t\t\t\t4. GO TO USER MENU \n");
    Sleep(400);
    printf("\n");
    printf("\t\t\t\t\t5. EXIT RMS \n");
    Sleep(400);
    printf("\n");
    int ch;
    printf("\t\t\t\t\tEnter your Choice:\n");
    printf("\t\t\t\t\t--> ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
        write();
        break;
    case 2:
        deleterecord();
        break;
    case 3:
        update();
        break;
    case 4:
        User();
        break;
    case 5:
        exit(0);
    default:
        gotoxy(40,12);
        printf("Wrong Input\n");
        getch();
        system("cls");
        return Admin();

    }
}


void User() //This is the User Panel for Viewing the software datas
{
    system("color f0");
      system("cls");
    printf("                     **************************************************************************\n");
	printf("                                            || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
	printf("\n");
printf("\t\t\tUSER PANEL OF THE PROJECT:\n");
Sleep(300);
printf("\n");
printf("\t\t\t1. VIEW ALL AVAILABLE FOODS\n");
Sleep(300);
printf("\n");
printf("\t\t\t2. SEARCH FOOD BY RATING\n");
Sleep(300);
printf("\n");
printf("\t\t\t3. SEARCH FOOD BY PRICE\n");
Sleep(300);
printf("\n");
printf("\t\t\t4. SEARCH FOOD BY CATAGORY\n");
Sleep(300);
printf("\n");
printf("\t\t\t5. ORDER FOOD FROM MENU \n");
Sleep(300);
printf("\n");
printf("\t\t\t7. GO BACK TO MAIN PANEL \n");
Sleep(300);
printf("\n");
printf("\t\t\t8. EXIT RMS \n");
Sleep(300);
printf("\n");
int p;
printf("\t\t\tEnter Your Choice \n");
printf("\t\t\t--> ");
scanf("%d",&p);
system("cls");
switch(p){
case 1:
    show_list();
break;
case 2:
    rate_search();
    break;
case 3:
    price_search();
    break;
case 4:
    catagory();
    break;
case 5:
    order();
    break;
case 6:
    update();
    break;
case 7:
    panel();
    break;
case 8:
    exit(0);
    break;
default:
    printf("                     **************************************************************************\n");
	printf("                                            || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
	printf("\n");
    printf("\t\t\t\t\t    Wrong Choice \n");
    Sleep(1000);
    system("cls");
    return User();
}
}

void write() // This function writes datas in a binary file using file handling system
{
    system("color f0");
    printf("                     **************************************************************************\n");
	printf("                                                  |ADD FOOD INFO| \n");
	printf("                     **************************************************************************\n\n\n");
printf("\n");
     printf("\n");
     printf("\n");
      int i,p;
    printf("\t\t\tHow many items do you want to add in the list?\n");
    printf(" \t\t\t-->");
    scanf("%d",&p);
    system("cls");
    printf("                     **************************************************************************\n");
	printf("                                                  |ADD FOOD INFO| \n");
	printf("                     **************************************************************************\n\n\n");

    for (i=0;i<p;i++)
    {


FILE *menu;
struct rest r1;
menu=fopen("Menu.dat","ab");
printf("\t\t\tEnter Food Code = \n");
printf("\t\t\t--> ");
scanf("%d",&r1.code);
printf("\n");
printf("\t\t\tEnter Food Name = \n");
fflush(stdin);
printf("\t\t\t--> ");
gets(r1.food);
printf("\n");
printf("\t\t\tEnter Food Catagory = \n");
printf("\t\t\t--> ");
gets(r1.catagory);
printf("\n");
printf("\t\t\tEnter Food Rate = \n");
printf("\t\t\t--> ");
scanf("%d",&r1.rate);
printf("\n");
printf("\t\t\tEnter Food Price = \n");
printf("\t\t\t--> ");
scanf("%d",&r1.price);
fwrite(&r1,sizeof(r1),1,menu);
printf("\n");
printf("\t\t\tMenu has been UPDATED!\n");
printf("\n");
fclose(menu);}
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                                  |ADD FOOD INFO| \n");
	printf("                     **************************************************************************\n\n\n");

printf("\n");
   printf("\t\t\tWant to View Food info Now? (y/n) \n");
    if(getch()=='y')
      {
          show_list();
      }
      if(getch()=='n')
      {
          User();
      }

}

void show_list() //This function shows datas in a binary file using file handling system
{
    system("color f0");
   FILE*fp;
   struct rest r1;
   fp=fopen("Menu.dat","rb");
   if(fp==NULL)
   {
       printf("ERROR : The file is corrupted");
       exit(0);
   }
    printf("                     **************************************************************************\n");
	printf("                                                 ||FOOD LIST||\n");
	printf("                     **************************************************************************\n\n\n");
	printf("\t\t||SHOWING MENU - \n");
   while(fread(&r1,sizeof(r1),1,fp))
   {

Sleep(400);
   printf("\n");
   printf("\t\t1.Food Code = %d \n",r1.code);
   printf("\t\t2.Food Name = %s \n",r1.food);
   printf("\t\t3.Food Catagory = %s \n",r1.catagory);
   printf("\t\t4.Food Rating = %d \n",r1.rate);
   printf("\t\t5.Food Price = %d TK \n",r1.price);}
   fclose(fp);
   printf("\n");
   printf("\t\tPress any key to go back to Main menu");
   getch();
   system("cls");
return User();
}





void rate_search() // This function searches records of individual food rating from menu
{
    system("color f0");

    int rate1;
    FILE *fp;
    struct rest r1;
    fp=fopen("Menu.dat","rb");
    if(fp==NULL){
       printf("ERROR : The file is corrupted");
       exit(0);
   }
    printf("                     **************************************************************************\n");
	printf("                                          || SEARCH FOOD BY RATING || \n");
	printf("                     **************************************************************************\n\n\n");
   printf("\t\tEnter Rating of food to search (1 to 5)\n");
   printf("\t\t--> ");
   scanf("%d",&rate1);
   system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || FOODS WITH RATED %d  || \n",rate1);
	printf("                     **************************************************************************\n\n\n");
	gotoxy(38,12);
printf("Searching %d Rated Foods",rate1);
gotoxy(61,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(90,12);
printf("20%");
gotoxy(61,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(90,12);
printf("40%");
gotoxy(61,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(90,12);
printf("60%");
gotoxy(61,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(90,12);
printf("80%");
gotoxy(61,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(90,12);
printf("90%");
gotoxy(61,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(90,12);
printf("100%");
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || FOODS WITH RATED %d  || \n",rate1);
	printf("                     **************************************************************************\n\n\n");
   printf("\n");
   printf("\t\tShowing %d Rated Foods \n",rate1);
   while(fread(&r1,sizeof(r1),1,fp))
   {
       if(rate1==r1.rate)
       {
   printf("\n");
   printf("\t\t1.Food Code = %d \n",r1.code);
   printf("\t\t2.Food Name = %s \n",r1.food);
   printf("\t\t3.Food Catagory = %s \n",r1.catagory);
   printf("\t\t4.Food Rating = %d \n",r1.rate);
   printf("\t\t5.Food Price = %d TK \n",r1.price);
   }
   }
    if(r1.rate!=rate1)
   {printf("\n");
       printf("Not Found \n");
   }



       fclose(fp);
       getch();
       system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
       printf("\n");
      printf("\t\tWant to Search Again?\n");
      printf("\n");
      printf("\t\t1.Yes\n");
      printf("\n");
      printf("\t\t2.No\n");
      printf("\t\t--> ");
      int ch;
      scanf("%d",&ch);
      system("cls");
      switch (ch)
      {case 1:
          rate_search();
          break;
      case 2:
        User();
      }

   }

void price_search() // This function searches budget friendly foods from menu
   {
       system("color f0");
    printf("                     **************************************************************************\n");
	printf("                                              ||Search Food By Price Range||\n");
	printf("                     **************************************************************************\n\n\n");
         int price1,flag=0;
    FILE *fp;
    struct rest r1;
    fp=fopen("Menu.dat","rb");
    if(fp==NULL){
       printf("ERROR : The file is corrupted");
       exit(0);
   }
   printf("\t\t    Enter Price Range of food to search \n");
   printf("\t \t    --> ");
   scanf("%d",&price1);
   system("cls");
    printf("                     **************************************************************************\n");
	printf("                                             ||Foods Under %d Tk||\n",price1);
	printf("                     **************************************************************************\n\n\n");
	gotoxy(38,12);
printf("Searching Foods under %d TK",price1);
   gotoxy(66,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(93,12);
printf("20%");
gotoxy(66,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(93,12);
printf("40%");
gotoxy(66,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(93,12);
printf("60%");
gotoxy(66,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(93,12);
printf("80%");
gotoxy(66,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(93,12);
printf("90%");
gotoxy(66,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(93,12);
printf("100%");
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                             ||Foods Under %d Tk||\n",price1);
	printf("                     **************************************************************************\n\n\n");
   while(fread(&r1,sizeof(r1),1,fp))

   {

       if(price1>=r1.price)
       {Sleep(400);
          printf("\n");
   printf("\t\t1.Food Code = %d \n",r1.code);
   printf("\t\t2.Food Name = %s \n",r1.food);
   printf("\t\t3.Food Catagory = %s \n",r1.catagory);
   printf("\t\t4.Food Rating = %d \n",r1.rate);
   printf("\t\t5.Food Price = %d TK \n",r1.price);}


   }
    if (r1.price> price1)
    {printf("\t\tNot Found");
}
   fclose(fp);
   getch();
   system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
    printf("\t\tWant to Search Again?\n");
      printf("\n");
      printf("\t\t1.Yes\n");
      printf("\n");
      printf("\t\t2.No\n");
      printf("\n");
      int ch;
      printf("\t\t--> ");
      scanf("%d",&ch);
      system("cls");
      switch (ch)
      {case 1:
          price_search();
          break;
      case 2:
        User();
      }
   }

void deleterecord() // This function delete records from binary file
{

system("color f0");
int code1;
struct rest r1;
FILE *fp, *ft;
fp=fopen("Menu.dat","rb");
ft=fopen("Menu1.dat","ab+");
if (fp==NULL)
{
    printf("ERROR : The file is corrupted");
    exit(0);
}
    printf("                     **************************************************************************\n");
	printf("                                                 !RECORD DELETATION! \n");
	printf("                     **************************************************************************\n\n\n");
printf("\t\tPrevious Stored Data\n");
show_list_del();
printf("\t\tEnter Food Code that you want to delete\n");
printf("\t\t--> ");
scanf("%d",&code1);

while(fread(&r1,sizeof(r1),1,fp))

{

    if(r1.code!=code1)
    {

        fwrite(&r1,sizeof(r1),1,ft);

    }
}
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                                 !RECORD DELETATION! \n");
	printf("                     **************************************************************************\n\n\n");
   gotoxy(40,12);
printf("Deleting");
fclose(fp);
fclose(ft);
remove("Menu.dat");
gotoxy(50,12);
for(int i=0;i<21;i++)
{
    Sleep(80);
    printf("%c",176);
}
gotoxy(40,14);
printf("Record Deleted Successfully");
rename("Menu1.dat","Menu.dat");
gotoxy(40,16);
printf("Updating");
gotoxy(50,16);
for(int i=0;i<25;i++)
{
    Sleep(80);
    printf("%c",176);
}
gotoxy(40,18);
printf("Record Updated Successfully");
Sleep(1900);
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                                 !RECORD DELETATION! \n");
	printf("                     **************************************************************************\n\n\n");
printf("\t\tShowing Updated Result \n");
show_list_del();
 getch();
       system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
      int ch;
       printf("\n");
    printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
      printf("\t\t\t\tWant to delete Again?\n");
      printf("\n");
      printf("\t\t\t\t1.Yes\n");
      printf("\n");
      printf("\t\t\t\t2.No\n");
      printf("\t\t\t\t--> ");
      scanf("%d",&ch);
      system("cls");
      switch (ch)
      {
      case 1:
        deleterecord();
        break;
      case 2:
        Admin();
        break;
      }
}

void show_list_del() // This is a temporary function for deleterecord() function to work properly
{
    system("color f0");

   FILE*fp;
   struct rest r1;
   fp=fopen("Menu.dat","rb");
   if(fp==NULL)
   {
       printf("ERROR : The file is corrupted");
       exit(0);
   }
   while(fread(&r1,sizeof(r1),1,fp))
   {
   printf("\n");
   printf("\t\t1.Food Code = %d \n",r1.code);
   printf("\t\t2.Food Name = %s \n",r1.food);
   printf("\t\t3.Food Catagory = %s \n",r1.catagory);
   printf("\t\t4.Food Rating = %d \n",r1.rate);
   printf("\t\t5.Food Price = %d TK \n",r1.price);}
   fclose(fp);
}

void catagory() // This function searches records of individual food catagory from menu
{
    system("color f0");
    struct search
{
    char cat[80];

};
    FILE *fp;
    struct rest r1;
    struct search s1;
    fp=fopen("Menu.dat","rb");
    if(fp==NULL){
       printf("ERROR : The file is corrupted");
       exit(0);
   }
    printf("                     **************************************************************************\n");
	printf("                                          SEARCH INDIVIDUAL CATAGORY ITEMS\n");
	printf("                     **************************************************************************\n\n\n");
    list_cat();
    printf("\n");

   printf("\t\t\t\tEnter a catagory of food to search \n");
   printf("\t\t\t\t --> ");
   fflush(stdin);
   gets(s1.cat);
   system("cls");
   gotoxy(38,12);
printf("Searching %s",s1.cat);
gotoxy(58,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(90,12);
printf("20%");
gotoxy(58,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(90,12);
printf("40%");
gotoxy(58,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(90,12);
printf("60%");
gotoxy(58,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(90,12);
printf("80%");
gotoxy(58,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",176);
}
gotoxy(90,12);
printf("90%");
gotoxy(58,12);
for(int i=0;i<29;i++)
{
    Sleep(20);
    printf("%c",177);
}
gotoxy(90,12);
printf("100%");
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          SHOWING (%s) CATAGORY ITEMS\n",s1.cat);
	printf("                     **************************************************************************\n\n\n");
	printf("\n");
	printf("|| %s Items -  \n",s1.cat);
   while(fread(&r1,sizeof(r1),1,fp)==1)
   {
       if(strcmp(s1.cat,r1.catagory)==0)
       {


   printf("\n");
   printf("\t\t1.Food Code = %d \n",r1.code);
   printf("\t\t2.Food Name = %s \n",r1.food);
   printf("\t\t3.Food Catagory = %s \n",r1.catagory);
   printf("\t\t4.Food Rating = %d \n",r1.rate);
   printf("\t\t5.Food Price = %d TK \n",r1.price);}

       }
       if(strcmp(s1.cat,r1.catagory)!=0)
       {
           printf("\t\t\t\tNot found");
       }

       fclose(fp);
       getch();
       system("cls");
      int ch;
    printf("                     **************************************************************************\n");
	printf("                                          || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
      printf("\t \t \t \tWant to search Again?\n");
      printf("\n");
      printf("\t \t \t \t1.Yes\n");
      printf("\n");
      printf("\t \t \t \t2.No\n");
      printf("\n");
      printf("\t\t\t\t --> ");
      scanf("%d",&ch);
      system("cls");
      switch (ch)
      {
      case 1:
        catagory();
        break;
      case 2:
        User();
        break;
      }

}
void list_cat()
{
    system("color f0");
    printf("\t \t \t \tCatagory List -\n");
    Sleep(400);
    printf("\t \t \t \t---> Burger\n");
    Sleep(400);
    printf("\t \t \t \t---> Steak\n");
    Sleep(400);
    printf("\t \t \t \t---> Rice \n");
    Sleep(400);
    printf("\t \t \t \t---> Tacos\n");
    Sleep(400);
    printf("\t \t \t \t---> Snacks\n");
    Sleep(400);
    printf("\t \t \t \t---> Soup \n");
    Sleep(400);
    printf("\t \t \t \t---> Drinks\n");
    Sleep(400);
    printf("\n");
    printf("\t \t \t \tChoose from above \n");


}

void order()
{
system("color f0");
int code1,k,count=0;
struct rest r1;
struct bill b;
FILE *fp;
fp=fopen("Menu.dat","rb");
if (fp==NULL)
{
    printf("ERROR : The file is corrupted");
    exit(0);
}
    printf("                     **************************************************************************\n");
	printf("                                                 !Food Order! \n");
	printf("                     **************************************************************************\n\n\n");
printf("\t\tFOOD MENU -->\n");
show_list_del();
printf("\n");
printf("\t\tEnter Food Code that you want to order\n");
printf("\t\t--> ");
scanf("%d",&code1);
printf("\t\tWhat is the quantity of selected food that you want to order? \n");
printf("\t\t--> ");
scanf("%d",&b.quantity);
printf("\t\tWhat is your name? \n");
printf("\t\t--> ");
fflush(stdin);
gets(b.bname);
printf("\t\tWhat is your seat number ?\n");
printf("\t\t--> ");
scanf("%d",&b.seat);
printf("\n");
Sleep(200);
printf("\t\tAre You Ready to Confirm Your Order,Now? (y/n)");
 if(getch()=='y')
 {system("cls");}
	    else
            User();
while(fread(&r1,sizeof(r1),1,fp))

{

    if(r1.code==code1)
    {
    printf("                     **************************************************************************\n");
	printf("                                                 !Food Order! \n");
	printf("                     **************************************************************************\n\n\n");

        gotoxy(38,12);
        printf("Processing your Order");
        gotoxy(60,12);
        for(int i=0;i<30;i++)
        {
        Sleep(45);
        printf("%c",177);
        }
        gotoxy(90,12);
        printf("20%");
        gotoxy(60,12);
        for(int i=0;i<30;i++)
        {
        Sleep(45);
        printf("%c",178);
        }
        gotoxy(90,12);
        printf("60%");
        gotoxy(60,12);
        for(int i=0;i<30;i++)
        {
        Sleep(45);
        printf("%c",177);
        }
        gotoxy(90,12);
        printf("100%");
        gotoxy(60,12);
        for(int i=0;i<30;i++)
        {
        Sleep(45);
        printf("%c",178);
        }
        system("cls");
    printf("                     **************************************************************************\n");
	printf("                                                 !Food Order! \n");
	printf("                     **************************************************************************\n\n\n");
        printf("\t\t\t\t\t\t>>> DONE <<<\n");
        Sleep(1000);
        printf("\n");
        printf("\t\t\t\t\tORDER HAS BEEN TAKEN SUCCESSFULLY!\n");
        Sleep(1000);
        printf("\n");
        b.sum=b.quantity*r1.price;
        printf("\t\t\t\t\tFood Ordered By --> %s\n",b.bname);
        printf("\n");
        Sleep(1000);
        printf("\t\t\t\t\tSeat Number --> %d\n",b.seat);
        printf("\n");
        Sleep(1000);
        printf("\t\t\t\t\tFood Name --> %s\n",r1.food);
        Sleep(1000);
        printf("\n");
        printf("\t\t\t\t\tFood Price--> %d TK\n",r1.price);
        Sleep(1000);
        printf("\n");
        printf("\t\t\t\t\tQuantity  --> %d\n",b.quantity);
        Sleep(1000);
        printf("\n");
        printf("\t\t\t\t\tTotal Bill--> %d TK",b.sum);
        Sleep(1500);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t | | | | | Thank You for Purchasing Food by RMS | | | | |\n");

    }

}
getch();
system("cls");

fclose(fp);
    printf("                     **************************************************************************\n");
	printf("                                          || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
      int ch;
       printf("\n");
    printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
      printf("\t\t\t\tWant to Order Again?\n");
      printf("\n");
      printf("\t\t\t\t1.Yes\n");
      printf("\n");
      printf("\t\t\t\t2.No\n");
      printf("\t\t\t\t--> ");
      scanf("%d",&ch);
      system("cls");
      switch (ch)
      {
      case 1:
        order();
        break;
      case 2:
        User();
        break;
      }
}

void update()
{
    system("cls");
    system("color f0");
    int p,flag=0;
    struct rest r1;
   FILE *fp;
   fp=fopen("Menu.dat","rb+");
   if (fp==NULL)
   {
       printf("ERROR : FILE HAS BEEN CURROPTED");
   }
    printf("                     **************************************************************************\n");
	printf("                                          || Update Food List(MENU) || \n");
	printf("                     **************************************************************************\n\n\n");
	printf("\t\t||FOOD MENU -");
	printf("\n");
   show_list_del();
   printf("\n");
   printf("\t\tEnter the food code that you want to update\n");
   printf("\t\t--> ");
   scanf("%d",&p);
system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || Update Food List(MENU) || \n");
	printf("                     **************************************************************************\n\n\n");
   while(fread(&r1,sizeof(r1),1,fp)>0 && flag==0)
   {
       if(p==r1.code)
       {

Sleep(400);
        flag=1;
          printf("\t\t||Selected Food List -\n");
          printf("\n");
   printf("\t\t1.Food Code = %d \n",r1.code);
   printf("\t\t2.Food Name = %s \n",r1.food);
   printf("\t\t3.Food Catagory = %s \n",r1.catagory);
   printf("\t\t4.Food Rating = %d \n",r1.rate);
   printf("\t\t5.Food Price = %d TK \n",r1.price);
   printf("\n");
   printf("\n");
	Sleep(400);
   printf("\t\tEnter Food Name = \n");
   fflush(stdin);
   printf("\t\t--> ");
   gets(r1.food);
   printf("\n");
   printf("\t\tEnter Food Catagory = \n");
   printf("\t\t--> ");
   gets(r1.catagory);
   printf("\n");
   printf("\t\tEnter Food Rate = \n");
   printf("\t\t--> ");
   scanf("%d",&r1.rate);
   printf("\n");
   printf("\t\tEnter Food Price = \n");
   printf("\t\t--> ");
   scanf("%d",&r1.price);
   printf("\n");
   printf("\t\tWait....");
   Sleep(1000);
   fseek(fp,-(long)sizeof(r1),1);
   fwrite(&r1,sizeof(r1),1,fp);
   system("cls");
    printf("                     **************************************************************************\n");
	printf("                                          || Update Food List(MENU) || \n");
	printf("                     **************************************************************************\n\n\n");
   gotoxy(40,12);
printf("Updating");
gotoxy(50,12);
for(int i=0;i<25;i++)
{
    Sleep(60);
    printf("%c",176);
}

for(int i=0;i<25;i++)
{
    Sleep(60);
    printf("%c",176);
}

gotoxy(40,14);
   printf("Food List Updated!");
   Sleep(2000);}


   }
   if(flag=0)
   {
     printf("\t\t\t\t\tNot Found");
   }
   fclose(fp);
   system("cls");
   printf("                     **************************************************************************\n");
	printf("                                          || SELECTION MENU || \n");
	printf("                     **************************************************************************\n\n\n");
       printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
     printf("\n");
      printf("\t\t\t\tWant to Update Again?\n");
      printf("\n");
      printf("\t\t\t\t1.Yes\n");
      printf("\n");
      printf("\t\t\t\t2.No\n");
      printf("\t\t\t\t--> ");
      int ch;
      scanf("%d",&ch);

      switch (ch)
      {
      case 1:
        update();
        break;
      case 2:
        User();
        break;
      default:
          gotoxy(40,12);
        printf("Wrong input, Going to User panel\n");
        Sleep(1500);
        User();
      }

}





                                              /// This Project is done by;
                                             /// Tonmoy, Nisha & Sohan;

