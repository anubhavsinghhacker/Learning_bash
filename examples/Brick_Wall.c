#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cr, dr, cc, dc, count = 0, sum = 0;

    while (1)
    {
        printf("enter current row, current colum, destinatin row ,destination colum\n");
        scanf("%d %d %d %d", &cr, &cc, &dr, &dc);
        if (cr == 0 || cc == 0 || dr == 0 || dc == 0)
            exit(0);
        count = 0;
        sum = 0;
             if (cr > dr)
            {
                cr = cr + dr;
                dr = cr - dr;
                cr = cr - dr;
                cc = cc + dc;
                dc = cc - dc;
                cc = cc - dc;
            }
        while (cr != dr || cc != dc)
        {
       
            if (cr != dr && cr%2==cc%2) 
            {
                
                
                       
                cr = cr + 1;
                count = count + 1;
                
            
            }

            else
            {
                if (cc <= dc)
                {
                    cc = cc + 1;
                  
                    count = count + 1;
                }
                else
                {
                    cc = cc - 1;
                   
                    count = count + 1;
                }
                if (cr == dr)
                {
                    if (cc < dc)
                    {
                        sum = dc - cc;
                        cc = cc + sum;
                        count = count + sum;
                    }
                    else
                    {
                        sum = cc - dc;
                        cc = cc - sum;
                        count = count + sum;
                    }
                }
            }
        }
        printf("%d\n No of steps is :  ", count);
    }
}
