#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
        int a,b,sum;
        char license[5];
        for(a=1;a<9999;a++)
        {
                sprintf(license,"%d",a);
                sum=0;
                for(b=0;b<strlen(license);b++)
                {
                        sum = sum + license[b] - 48;
                }
                if(sum % 9 == 0)
                {
                        printf("%s,%d,CUSTOM\n",license,sum);
                }
                else
                {
                        printf("%s,%d\n",license,sum);
                }
        }
}
