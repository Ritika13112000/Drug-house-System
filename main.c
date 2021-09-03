#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
struct User
{    char ch[50];
    char userid[20];
    char pwd[12];
};
struct User u;
struct medical
{
    char id[20];
    char medname[20];
    int qty;
    float MRP,CP;
    char mfg[15];
    char expiry[15];
     char mid[20];
};
//typedef User User;
int Log_in();
void topdesign();
void mainscreen();
void firstscreen();
int ADD();
int management();
int reg();
int EXPIRY();

int EXPIRY()
{

int flag=0;
    struct medical m;
    system("cls");
    topdesign();
    int i;
    printf("\n\t\t\t\t\t\t\t\t\t Check Your Medicine Details\n\n");
    for(i=0;i<250;i++)
        printf("^");
        FILE *p;
        p=fopen("D:\\bookstore\\add.txt","r");
        if(p==NULL)
        {
            printf("\n\tFile Can not be opened");

        }
    printf("\n\n\n\n");
    printf("\t\t\t");
    printf("Enter medicine name to be deleted:  ");
    scanf("%s",&m.mid);
    system("cls");
   /* while(fscanf(p,"%s ",m.mid)!=EOF)
    {
        if((strcmp(m.medname,m.mid))==0)
            {
                printf("congrats");
                flag=1;
                break;
            }
    }*/
    //Sleep(100);
    topdesign();
    printf(" \n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tMedicine Is Deleted  ");
    if(flag==0)
    printf("not");
return 0;
    }



int ADD()
{
    struct medical m;
system("cls");
FILE *p;
p=fopen("D:\\bookstore\\add.txt","at");
    topdesign();
    int i;
    for(i=0;i<250;i++)
        printf("^");
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf("*  *  *  ADD details of medicine  *  *  *");
    printf("\n\n");
    for(i=0;i<250;i++)
        printf("^");
    printf("\n\n\n");
    printf("\n\n\t\t\t\t 1. Medicine name : ");
    scanf("%s",m.medname);
    fprintf(p,m.medname);
    int dd,mm,yyyy;
    printf("\n\n\t\t\t\t 2. Enter Mfg (dd/mm/yy) :  ");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    //printf("date is %02d/%02d/%04d\n",dd,mm,yyyy);
    fprintf(p,"%d%d%d",dd,mm,yyyy);
    printf("\n\n\t\t\t\t 3. Exp date (dd/mm/year) :  ");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    //printf("exp=%02d/%02d/%04d\n");
    fprintf(p,"%d%d%d",dd,mm,yyyy);
    printf("\n");
    printf("\t\t\t\t 4.Enter the quantity : ");
    scanf("%d",&m.qty);
    printf("\n\n\t\t\t\t 5. Enter MRp : ");
    scanf("%f",&m.MRP);
    fprintf(p,"%.02f",m.MRP);
    printf("\n\n");
    printf("\t\t\t\t 6.Enter Cost Price : ");
    scanf("%f",&m.CP);
    fprintf(p,"%.02f\n",m.CP);
    fclose(p);
    printf("\n\n\n\n");
    for(i=0;i<250;i++)
        printf("^");
    printf("\n\t\t\t\t\t\t\t\t\t");
    printf("Details Added Successfully\n\n");
    Sleep(2000);
    management();
    for(i=0;i<250;i++)
        printf("^");
    return 0;


}
int management()
{
    topdesign();
    int i,press;
    printf("\n");
    for(i=1;i<250;i++)
        printf("^");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t");
        printf("MANAGEMENT");
            printf("\n\n");
        for(i=1;i<250;i++)
            printf("^");
            printf("\n\n\n");
            printf("\t\t\t\t\t\t\t\t\t");
            printf("* * *CATEGORY * * *");
            printf("\n\n");
            for(i=1;i<250;i++)
                printf("^");
                printf("\n\n\n\n");
                printf("\t\t\t\t 1.ADD\n\n");
                printf("\t\t\t\t 2.Delete \n\n");
               // printf("\t\t\t\t 3.SEARCH\n\n");
               // printf("\t\t\t\t 4.REQUIREMENT\n\n");
               // printf("\t\t\t\t 5.REMOVE\n\n");
               // printf("\t\t\t\t 6.UPDATE\n\n\n");
                printf("\t\t\t\tPress 1/2 to continue!!");
                scanf("%d",&press);
                switch(press)
                {
                case 1:
                    Sleep(3000);
                   ADD();
                    break;
                case 2:
                    Sleep(3000);
                    EXPIRY();
                    break;
                case 3:
                       Sleep(3000);
                  //  SEARCH();
                    break;
                case 4:
                    Sleep(3000);
                 //   REQUIREMENT();
                    break;
                case 5:
                    Sleep(3000);
                 //   REMOVE();
                    break;
                case 6:
                    Sleep(3000);
                 //   UPDATE();
                    break;
                default:
                    printf("Please Enter Valid  Option");
                }

return 0;

}
int Log_in()
{
    system("cls");
    struct User u;
    topdesign();
    printf("\n\n\n\n");
    printf("\t\t\t\t");
    printf("Enter User ID : ");
    scanf("%s",u.userid);
    printf("\n\n\t\t\t\t");
    printf("Enter Password : ");
    scanf("%s",u.pwd);
    strcat(u.userid,u.pwd);
    FILE *p;
    p=fopen("D:\\bookstore\\bookstore\login.txt","rt");
    if(p==NULL)
    {
        printf("file cannot be open");
        return 0;
    }
    int flag=0;
    while(fscanf(p,"%s",u.ch)!=EOF)
    {
        if((strcmp(u.userid,u.ch))==0)
        {

            printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t* * * * * WELCOME * * * * *");
            printf("\n\n\t\t\t\t\t\t\t\t\t # # # #  Apka swagat h  # # # # #");
            flag=1;
            Sleep(5000);
            management();
            break;
        }
    }
    if(flag==0)
    {
        printf("\n\n\t\t\tMay Be you have entered invalid userid or password\n Please Check!!");
    }


return 0;
}
int reg()
{
    //int i;
    system("cls");
    FILE *p;
    p=fopen("D:\\bookstore\\bookstore\login.txt","at");
    printf("\n\t\t\t\tEnter name : ");
    scanf("%s",u.userid);
    fputs(u.userid,p);
    printf("\n\n\t\t\t\tEnter Password : ");
    scanf("%s",u.pwd);
    fputs(u.pwd,p);
    fprintf(p,"\n");
    printf("\n\t\t\tSuccessfully Registered");
    //Sleep(10000);
    printf("\n\n\t\t\t\t\t\t\t\t\t\n\nLoading......");
     Sleep(5000);
    printf("\n\n\nPress Enter to Continue : ");
    char n;
    scanf("%c",&n);
    if(n==10){
    fclose(p);
    topdesign();
    mainscreen();}
    return 0;
}
void topdesign()
{system("cls");
    int i;
for(int i=0;i<250;i++)
    printf("#");
    printf("\n\n");
printf("\t\t\t\t\t\t\t\t\t");
printf("Welcome to Medical Store\n\n");
for( i=0;i<250;i++)
    printf("#");
    printf("\n");
    for(int i=0;i<250;i++)
        printf("*");
        printf("\n\n");
        printf("\t\t\t\t\t\t\t\t\t");
        printf("www.antibiotics.com\n\n");
        for(i=0;i<250;i++)
            printf("*");
}
void mainscreen()
{
    system("cls");
    topdesign();
    int i;
printf("\n\n\n\n");
printf("\t");
for(i=1;i<=60;i++)
printf("**_");
printf("\n\n");
printf("\t\t\t");
for(i=0;i<=65;i++)
    printf("* ");
    printf("\n\n");
    printf("\t\t\t");
    printf("*");
    printf("\t\t\t\t\t\t\t\t");
    printf("WELCOME");
    printf("\t\t\t\t\t\t\t\t");
    printf("  *");
    printf("\n\n");
    printf("\t\t\t");
    printf("*");
    printf("\t\t\t\t\t\t\t\t");
    printf("To MY");
    printf("\t\t\t\t\t\t\t\t");
    printf("  *");
    printf("\n\n");
    printf("\t\t\t");
    printf("*");
    printf("\t\t\t\t\t\t\t\t");
    printf("STORE");
    printf("\t\t\t\t\t\t\t\t");
    printf("  *");
    printf("\n\n");
    printf("\t\t\t");
    for(i=0;i<=65;i++)
        printf("* ");
        printf("\n\n\n\t\t");
        printf("Press Enter to continue :");
        char enter;
        scanf("%c",&enter);
        if(enter==10)
        {
            topdesign();
        }

}
void firstscreen()
{
  printf("\n\n\n\n\t\t\t\t");
  printf("Press 1  for New User/Press 2 for Old User:  ");
  int new;
  scanf("%d",&new);
  if(new==1)
  {
     reg();
     Sleep(5000);
     firstscreen();
  }
  if(new==2)
  {
     Log_in();

  }

}




int main()
{
    topdesign();
    mainscreen();
    firstscreen();
    return 0;
}
