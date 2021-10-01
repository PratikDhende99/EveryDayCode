#include<stdio.h>

void print_f(int numbers[],int length)
{
 for(int j = 0; j < length; j++)
     {
        printf("%d",numbers[j]);
     }

    }

int main()
{
    int length;
    int numbers[length];
    int pos;
    int num;

    printf("Enter the length of element: ");
    scanf("%d",&length);

    for(int x = 0; x < length; x++)
    {
        printf("\nEnter the %d element: ",x+1);
        scanf("%d",&numbers[x]);

    }

    //inserting element//
    printf("\nEnter the pos to insert: ");
    scanf("%d",&pos);


  if(pos < 0 || pos > length)
 {
        printf("Invalid");
 }
else
   {
    for(int i = length-1; i >= pos-1; i--)
    {
        numbers[i+1] = numbers[i];
    }
    length++;
    printf("\nEnter the number to insert\n:");
    scanf("%d",&num);

    numbers[pos]=num;

   printf("Updated Array\n:");
   print_f(numbers,length);


   return 0;
  }
}
