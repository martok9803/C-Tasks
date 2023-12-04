#include <iostream>

//areEqual function to check equality between the arrays and their lenght
bool areEqual(int arr1[], int lenght1, int arr2[], int lenght2)
{
    if (lenght1 != lenght2)
    {
        return false;
    }
    for (int i = 0; i < lenght1; ++i)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}



int main() 
{
    int size1, size2;

    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;
    int* arr1 = new int[size1];
    std::cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; ++i)
    {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;
    int* arr2 = new int[size2];
    std::cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; ++i)
    {
        std::cin >> arr2[i];
    }
  
  //Call the areEqual function to check if two arrays are equal
    if ((areEqual)(arr1, size1, arr2, size2))
    {
        std::cout << "Equal";
    }
    else
    {
        std::cout << "Not Equal";
    }

  //Release the dinamically allocated memory using "delete[]"
    delete[] arr1;
    delete[] arr2;
      
    

    return 0;
}
