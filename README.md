---
## Custom License Plate Generator in C

Code:

```
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
```

Output:

![image](https://user-images.githubusercontent.com/124895858/221580596-6f35f71f-cc1d-42c2-bd90-3a71973b6093.png)

---
