#include <iostream>
#include <deque>

int main() {
    // Declare a deque of integers
    std::deque<int> my_deque;

    // Add elements to the front and back of the deque
    my_deque.push_front(1); // [1]
    my_deque.push_back(2);  // [1, 2]
    my_deque.push_front(0); // [0, 1, 2]
    my_deque.push_back(3);  // [0, 1, 2, 3]

    // Access elements using indices like an array
    std::cout << "Element at index 1: " << my_deque[1] << std::endl; // Output: Element at index 1: 1

    // Iterate through the deque and print its elements
    std::cout << "Deque elements: ";
    for (const auto& element : my_deque) {
        std::cout << element << " ";
    }

    std::cout << std::endl; // Output: Deque elements: 0 1 2 3

    // Remove elements from the front and back of the deque
    my_deque.pop_front(); // [1, 2, 3]
    my_deque.pop_back();  // [1, 2]

    // Check the size of the deque
    std::cout << "Deque size: " << my_deque.size() << std::endl; // Output: Deque size: 2

    // Clear the deque
    my_deque.clear(); // []

    // Check if the deque is empty
    if (my_deque.empty()) {
        std::cout << "Deque is empty" << std::endl; // Output: Deque is empty
    } else
        std::cout << "Deque is not empty .." << std::endl; // Output: Deque is not empty

    return 0;
}
