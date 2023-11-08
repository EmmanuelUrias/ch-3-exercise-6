#include <iostream>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    int arr[] = {x, y, z};
    int arrSize = sizeof(arr) / sizeof(int);

    // Use a sorting algorithm to sort the array (bubble sort in this case)
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i];
        if (i < arrSize - 1)
        {
            std::cout << ", ";
        }
    }

    return 0;
}