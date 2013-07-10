#include <iostream>

using std::cin;
using std::cout;

template <class T>
void SelectionSort(T* ArrayToSort, size_t SizeOfArray)
{
	for (size_t i = 0; i < SizeOfArray - 1; ++i)
	{
		int min = i;
		for (size_t j = i + 1; j < SizeOfArray; j++)
		{
			if (ArrayToSort[j] < ArrayToSort[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			T temporary = ArrayToSort[i];
			ArrayToSort[i] = ArrayToSort[min];
			ArrayToSort[min] = temporary;
		}
	}

	return;
}

int main()
{
    size_t ElementsCount = 0;
    cout << "Enter number of elements in the array:\n";
    cin >> ElementsCount;

    int ArrayToSort[ElementsCount];
    cout << "Enter elements:\n";

    for(size_t i = 0; i < ElementsCount; ++i)
    cin >> ArrayToSort[i];

    SelectionSort(ArrayToSort, ElementsCount);

    cout << "Sorted array:\n";
    for(size_t i = 0; i < ElementsCount; ++i)
    cout << ArrayToSort[i] << ' ';
    cout << "\n";

    return 0;
}
