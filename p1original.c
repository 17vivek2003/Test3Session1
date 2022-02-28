#include<stdio.h>
int main()
{
  
    int numerator1, denominator1, numerator2, denominator2, x, y, o, god_no;

  
    printf("Enter the numerator for 1st number  :");
    scanf("%d",&numerator1);
    printf("Enter the denominator for 1st number  :");
    scanf("%d",&denominator1);
    printf("Enter the numerator for 2nd number  :");
    scanf("%d",&numerator2);
    printf("Enter the numerator for 2nd number  :");
    scanf("%d",&denominator2);
  

    x=(numerator1*denominator2)+(denominator1*numerator2);
  

    y=denominator1*denominator2;

    for(o=1; o <= x && o <= y; ++o)
    {
      if(x%o==0 && y%o==0)
        god_no = o;
    }


    printf("(%d / %d) + (%d / %d) = (%d / %d)", numerator1, denominator1, numerator2, denominator2, x/god_no, y/god_no);

    return 0;
}