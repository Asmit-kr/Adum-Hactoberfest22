#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{

    int a[5], i, j, z;

    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    
    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                z=a[i];
                a[i]=a[j];
                a[j]=z;
            }
        }
        printf("%d ",a[i]);
        
    }


    return 0;
}