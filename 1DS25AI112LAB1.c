#include <stdio.h>

int main() {
int a[10]={1,3,4,6,7,8,10,11,43};
//1.traversal 
printf("traversing\n");
for (int i=0;i<10;i++)
{
    printf("%d\n",a[i]);
}
//2.linear searching 
printf("linear searching\n");
int val=7;
for (int i=0;i<10;i++)
{
    if (a[i]==val)
    {
        printf("found at index %d\n",i);
        break;
    }
    }
//3. Find max value 
printf("maximum value\n");
int max=a[0];
for (int i=0;i<10;i++)
{
    if (max<a[i])
    {
        max=a[i];
    }
    }
    printf("max value is %d\n",max);
    //4. Find min value
    printf("minimum value\n");
    int  min=a[0];
    for (int i=0;i<10;i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }}
        printf("min value is %d\n",min);
    //5.insert at beginning
    int beg=9;
    
    printf("insert %d  at beginning\n", beg);
    
    for (int i=9;i>=0;i--)

    {
        a[i]=a[i-1];        
    }
    a[0]=beg;
    for (int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    
    //insert at given pos 
    
    printf("insert 45 at 2\n");
    int pos=2;
    for (int i=14;i>=pos;i--)
    {
        a[i]=a[i-1];}
    a[pos]=45;
    
    for (int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    //6. Deletion 
    
    printf("\n\nDeletion\n");
    //     i. at given pos
    
            int val_del=99;
            int pos_del=3;
            
        
         printf("\nArray before deletion\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
                
        printf("\n\nDeletion of element at index pos = %d\n",pos_del); 
        
                for(int i=pos_del;i<=last;i++)
                {
                    a[i]=a[i+1];        //shifting to the left[or previous] element side
                }
            
            last--;                     //since array size is decreased
            
            printf("\nArray after deletion\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
    
    
    
    
    //     ii. at beginning
            
            // just put pos_del = 0
            
    //     iii. at end
    
           last--;    
           printf("\n\nArray after deletion at last\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
            }
 
