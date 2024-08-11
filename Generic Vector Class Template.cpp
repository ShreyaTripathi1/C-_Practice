#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

template <typename T>
class Vector {
private:
    std::vector<T> elements;

public:
    // Constructor to initialize an empty vector
    Vector() {}

    // Method to add elements to the vector
    void addElements(const std::vector<T>& elems) {
        elements.insert(elements.end(), elems.begin(), elems.end());
    }

    // Method to find the smallest element in the vector
    T findSmallest() const {
        if (elements.empty()) {
            throw std::runtime_error("Vector is empty");
        }
        return *std::min_element(elements.begin(), elements.end());
    }

    // Method to search for an element in the vector
    bool searchElement(const T& value) const {
        return std::find(elements.begin(), elements.end(), value) != elements.end();
    }

    // Method to find the average of the elements in the vector
    double findAverage() const {
        if (elements.empty()) {
            throw std::runtime_error("Vector is empty");
        }
        T sum = std::accumulate(elements.begin(), elements.end(), T());
        return static_cast<double>(sum) / elements.size();
    }

    // Method to print the elements of the vector
    void printElements() const {
        for (const auto& elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Vector<int> intVector;
    int n, elem;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> intVec;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> elem;
        intVec.push_back(elem);
    }

    intVector.addElements(intVec);

    std::cout << "Elements: ";
    intVector.printElements();

    try {
        std::cout << "Smallest Element: " << intVector.findSmallest() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Enter the element to search: ";
    std::cin >> elem;
    std::cout << "Element " << elem << " found: " 
              << (intVector.searchElement(elem) ? "Yes" : "No") << std::endl;

    try {
        std::cout << "Average of Elements: " << intVector.findAverage() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
