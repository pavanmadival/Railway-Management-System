#include<stdio.h>
#include<stdlib.h>
int arr[20];
int n, i;
void create();
void display();
int main()
{
int choice=1;
while(choice)
{
printf("\n\n---------MENU --------\n");
printf("1.Create\n");
printf("2.Display\n");
printf("3.Exit\n");
printf(" ----- \n");
printf("Enter your choice\n");
scanf("%d", &choice);
switch(choice)
{
case 1: create();
break;
case 2: display();
break;
case 3: exit(0);
default: printf("\n Invalid choice:\n");
break;
}

}
return 0;
}
void create()
{
printf("\n enter the size of the array elements\t");
scanf("%d",&n);
printf("\n enter the elements for the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
void display()
{
int i;
printf("\n the array elements are \n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}

