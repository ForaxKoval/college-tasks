int& back() {
    if (size == 0) {
        std::cout << "Vector is empty!" << std::endl;
    }
    return data[size - 1];
}