#include <stdio.h>
#include <stdlib.h>
int table_size;
int hash(int data) {
    int index = data % table_size;
    return index;
}

int linear_probing(int index) {
    int position;
    position = (index + 1) % table_size;
    return position;
}

int main(){

    int n;
    printf("Enter The Table Size: ");
    scanf("%d", &table_size);

    printf("Enter No of Data: ");
    scanf("%d", &n);

    int hash_table[table_size], arr[n];
    printf("Enter the data: ");
    for (int i = 0; i < n; i++)    // Input the array
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < table_size; i++)    // Initialize the hash table with -1
        hash_table[i] = -1;

    for (int i = 0; i < n; i++) {   // Copy data from array to hash table
        int data = arr[i];
        int index = hash(data);   // Get index according to the data
        while (hash_table[index] != -1)  
            index = linear_probing(index);   // If data is already there, then get the next position

        hash_table[index] = data;
    }

    printf("Hash Table Data: ");
    // for (int i = 0; i < table_size; i++)
    //     printf("%d ", hash_table[i]);

    int i = 0;
    while (i < table_size) {
        if (hash_table[i] != -1)
            printf("%d ", hash_table[i]);
        i++;
    }

    return 0;
}