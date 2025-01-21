#include <iostream>
#include <string>

template <typename T>
class BasicVector {
public:
    BasicVector(int capactiy = 10);
    ~BasicVector();  // Destructor
    T &operator[](int i);
private:
    int capactiy;
    T *a;
};

template <typename T>
BasicVector<T>::BasicVector(int capactiy) {
    this->capactiy = capactiy;
    a = new T[capactiy];
}

template <typename T>
BasicVector<T>::~BasicVector() {
    delete[] a;
}

template <typename T>
T &BasicVector<T>::operator[](int i) {
    if (i < 0 || i >= capactiy) {
        throw std::out_of_range("Index out of bounds");
    }
    return a[i];
}

int main() {
    BasicVector<double> V3(5);
    try {
        V3[4] = 4.24;  // Valid index
        std::cout << V3[4] << std::endl;
        // V3[5] = 3.14;  // Throws exception
    } catch (const std::out_of_range &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
