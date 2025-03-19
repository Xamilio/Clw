#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void increaseByTen(int* ptr) 
{
    *ptr += 10;
}


void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int* arr, int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int* maxElement(int* arr, int size) 
{
    int* maxPtr = arr;
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}


int* createRandomArray(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100; 
    }
    return arr;
}

int main()
{
    srand(time(0));

    int num = 42;
    int* ptr = &num;
    cout << "Значення змінної через покажчик: " << *ptr << endl;

    *ptr = 100;
    cout << "Нове значення змінної: " << num << endl;

    increaseByTen(&num);
    cout << "Після збільшення на 10: " << num << endl;

    int x = 5, y = 10;
    cout << "До обміну: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "Після обміну: x = " << x << ", y = " << y << endl;

    int arr[] = { 1, 2, 3, 4, 5 };
    cout << "Масив: ";
    printArray(arr, 5);

    int* maxPtr = maxElement(arr, 5);
    cout << "Максимальний елемент масиву: " << *maxPtr << endl;

    int size = 10;
    int* randArr = createRandomArray(size);
    cout << "Випадковий масив: ";
    printArray(randArr, size);

}
