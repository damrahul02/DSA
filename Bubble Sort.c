#include <stdio.h>
void scan(int *array,int n) //getting array elements from user
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("Elements %d: ",i+1);
        scanf ("%d",&*(array+i));
    }
}
void print(int *array,int n) //function for printing elements.
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d ",*(array+i));
    }
}
void bubble_sort(int *array,int n) // Here we insert our bubble sort alogorithm.
{
    int i,j;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (*(array+j)>*(array+j+1)) //sorting the elements in ascending order
            {
                int temp=*(array+j);
                *(array+j)=*(array+j+1);
                *(array+j+1)=temp;
            }
        }
    }
    print(array,n);
}
int main()
{
    int n,i;
    printf ("ENTER ARRAY SIZE: ");
    scanf ("%d",&n);
    int array[n];
    scan(array,n);  //passing the value to scan function
    printf ("Your Sorted Elements: ");
    bubble_sort(array,n);//passing the value to bubble sort function.
    return 0;
}
