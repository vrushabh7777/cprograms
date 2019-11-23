//implement a simple inventory using data files in c
#include<stdio.h>
int main()
{
    FILE *fp;			//declare the file pointer
    typedef struct		//declare the Asset structure
    {
        int no;
        char name[20];
        float price;
    }Asset;

    Asset a;
    int choice;
     fp=fopen("inv.txt","a");		//open the file
     if(fp==NULL)
     {
         printf("file does not exist\n");	//check the availability of file
         return;
     }
     do
     {								//read the inputs
         printf("\n enter the Asset no:");
         scanf("%d",&a.no);
         fprintf(fp,"Asset no=%d\n",a.no);

         printf("\n enter the Asset name:");
         scanf("%s",&a.name);
         fprintf(fp,"Asset name=%s\n",a.name);

        printf("\n enter the Asset price:");
         scanf("%f",&a.price);
         fprintf(fp,"Asset price=%0.2f\n",a.price);

         printf("\ndo you want to add another record yes=1 no=0:");
         scanf("%d",&choice);
    }while(choice);

    printf("\nTHANK YOU!!");
    fclose(fp);					//close the file
    return 0;

}


