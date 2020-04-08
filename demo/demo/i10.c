

void my_sort_numbers_ascending(int number[], int count)
{
   int temp, i = 0, j = 0, k = 0;
   for (j = 0; j < count; ++j)
   {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
   }
   // printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d ", number[i]);
}

void main()
{
   int i, count, number[20];
 
   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");
   
   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);
 
   my_sort_numbers_ascending(number, count);
}
