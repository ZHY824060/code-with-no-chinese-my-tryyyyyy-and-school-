int main()
{  char word[3][10];
   int i;
   for (i=0;i<3;i++)
      scanf("%s",word[i]);
   printf("%s",word[i-2]);
   return 0;
}

