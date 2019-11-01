#include<stdio.h>
#include<conio.h>
main()
{
    int ar[7]={3,2,1,0,1,2,3};
    int a,b=6,c=0;
    for(a=0;a<7;a++,b--)
    {
        if(ar[a]!=ar[b])
        {
            c++;
            break;
        }
    }
    if(c==1) printf("Array is not palindrome");
    else printf("Array is palindrome");
    getch();
}
