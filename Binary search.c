
//Searching an element using Binary search.
#include <stdio.h>
void Bubble_sort(int *array, int n) //using bubble sort algorithm.
{
    int i,j;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (*(array+j)>*(array+j+1))
            {
                int temp=*(array+j);
                *(array+j)=*(array+j+1);
                *(array+j+1)=temp;
            }
        }
    }
    printf ("Now Your Data Sorted out in Ascending order...\n");
    int k;
    for (k=0; k<n; k++)
        printf ("Element %d: %d\n",k+1,*(array+k));

}
int Binary_search(int *arr,int n,int key) //Function for binary search.
{
    int Beg=0,End=n-1,Mid;
    while (Beg<=End)
    {
        Mid= (Beg+End)/2;
        if (*(arr+Mid)==key)
        {
            return Mid+1;
        }
        else if (*(arr+Mid)>key)
        {
            End=Mid-1;

        }
        else if (*(arr+Mid)<key)
        {
            Beg=Mid+1;
        }
    }
    if (Beg>End)
    {
        return -1;  /*When beginning is greater than
                     ending our program come to end*/
    }
}
int Binary_search2(int *arr,int n,int key) // Descending order
{
    int Beg=0,End=n-1,Mid;
    while (Beg<=End)
    {
        Mid= (Beg+End)/2;
        if (*(arr+Mid)==key)
        {
            return Mid+1;
        }
        else if (*(arr+Mid)>key)
        {
            Beg=End+1;

        }
        else if (*(arr+Mid)<key)
        {
           End=Mid-1;
        }
    }
    if (Beg>End)
    {
        return -1;
    }
}
int main()
{
    int n,i=0;
    printf ("Input Size of Your Array: ");
    scanf ("%d",&n);
    int array[n]; // Intializing N size array.
    printf ("\nInput %d Elements for your Array....\n");
    while (i<n)
    {
        printf ("Elements %d: ",i+1);
        scanf ("%d",&array[i]);
        i++;
    }
    int a,f;
    printf ("Is your Data Sorted(1/0): ");
    scanf ("%d",&a);
    if (a==1)
    {
        printf ("In What Way Your Data are Sorted...\n");
        printf ("Ascending or Descending (1/2): ");
        scanf ("%d",&f);
        if (f==1)
        {
  int key;
    printf ("\nEnter the Element You're looking for: ");
    scanf ("%d",&key);
    int bin=Binary_search(array,n,key);
     if (bin== -1)
     {
         printf ("Oops,Your Searched Element Not in list....\n");
     }
     else
     {
         printf ("\nCongrats....\nYour Searched Element %d was found on index %d.\n",key,bin);
     }

    }
    if (f==2)
    {
      int key;
    printf ("\nEnter the Element You're looking for: ");
    scanf ("%d",&key);
    int bin=Binary_search2(array,n,key);
     if (bin== -1)
     {
         printf ("Oops,Your Searched Element Not in list....\n");
     }
     else
     {
         printf ("\nCongrats....\nYour Searched Element %d was found on index %d.\n",key,bin);
     }
    }
    }
    if (a==0)
    {
        Bubble_sort(array,n);
        int key;
    printf ("\nEnter the Element You're looking for: ");
    scanf ("%d",&key);
    int bin=Binary_search(array,n,key);
     if (bin== -1)
     {
         printf ("Oops,Your Searched Element Not in list....\n");
     }
     else
     {
         printf ("\nCongrats....\nYour Searched Element %d was found on index %d.\n",key,bin);
     }
    }




    return 0;
}
