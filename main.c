#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sizeArr = getArraySize();
    int intArr[sizeArr];

    initArr(&intArr, sizeArr);
    insertionSort(&intArr, sizeArr);

    printArr(&intArr, sizeArr);

    getch();
}

void insertionSort(int array[], int sizeArr)
{
    int newElement, location;
    for (int i = 1; i < sizeArr; i++)
    {
        newElement = array[i];
        location = i - 1;
        while(location >= 0 && array[location] > newElement)
        {
            array[location+1] = array[location];
            location = location - 1;
        }
        array[location+1] = newElement;
    }
}

int getArraySize() {
    while (1) {
        int sizeArr;

        printf("Enter size of array:\n");
        scanf("%d", &sizeArr);

        if (sizeArr > 0) {
            return sizeArr;
        } else {
            printf("Size must be greater than zero\nTry again!");
            for (int i = 0; i < 29; i++) {
                printf("\n");
            }
        }
    }
}

void initArr(int intArr[], int sizeArr) {
    for (int i = 0; i < sizeArr; i++) {
        printf("Enter %d element:\n", i);
        scanf("%d", &intArr[i]);
    }
}

void printArr(int array[], int sizeArr) {
    for (int i = 0; i < sizeArr; i++) {
        printf("%d Element - %d\n", i, array[i]);
    }

    printf("\n");
}
