#include <stdio.h>
#include <stdlib.h>  // to use rand() function

void reverse(int *array1, int position, int *array2, int len);

void fill_table(int table[10][10])
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            table[i][j]=rand()%9 + 1;
        }
        printf("\n");
    }
    
    table[10][10] = 0;  // last elements  is assingned to 0
}

void print_table(int table[10][10])
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

int find_and_replace_array(int *array1, int *array2, int len1, int len2)
{
    int i=0,j=0,occ;
    for(i=0; i<len2; i++)
    {
        for(j=i; j<len1; j++)
        {
            if(*(array2+i) == *(array1+j))
            {
                if(i==0)
                    occ = j;
                break;
            }
        }
        if(j == len1)
        {
            return -1;
        }
    }
    reverse(array1,occ,array2, len2);
    return occ;  // returning position of given array in table
}

void reverse(int *array1, int occ, int *array2, int len)
{
    for(int i=occ; i<len+occ; i++)
    {
        *(array1+i) = *(array2+len+occ-1-i);
    }
}

void find_and_replace_table(int table[10][10], int *array, int len1, int len2)
{
    
}

int main()
{
    int table[10][10];
    
    fill_table(table);
    
    print_table(table);
    
    int total_element;
    cout << "\nEnter number of element to find from table : ";
    cin >> total_element;
    cout << "Enter " << total_element << " elements : "; 
    
    int array2[total_element];
    for(int i=0 ;i <total_element ;i++)
        cin >> array2[i];
    
    int position;
    for(int i=0; i<10; i++)
    {
        position = find_and_replace_array(*(table+i) ,array2, 10, total_element);
        if(position != -1)
            cout << "given array2 is at "<< i+1 << "th row and "<< position+1 << "th column in the table" <<endl;
    }
    
    cout <<"\n";
    cout << "Replaced table : "<< endl;
    print_table(table);

    return 0;
}