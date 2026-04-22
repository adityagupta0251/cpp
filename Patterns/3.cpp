#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

int main() {
    // Initialize the vector (C++ equivalent of a Python list)
    std::vector<int> my_array = {7, 3, 9, 12, 11};
    int n = my_array.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (my_array[j] > my_array[j + 1]) {
                // Swap elements using the standard library function
                std::swap(my_array[j], my_array[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (!swapped) {
            break;
        }
    }

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int num : my_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
