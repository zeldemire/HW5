// PNGTester.cpp
#include <iostream>
#include "PNG.h"

int getPixelIndex(const int row, const int col, const int width) {
    return ((row * width) + col) * 4;
}

int main() {

    PNG img;
    img.load("Mammogram.png");
    // Maybe some more code here...
    const std::vector<unsigned char>& buffer = img.getBuffer();
    // Use a getPixelIndex method to convert row, col to index in buffer
    const int index = getPixelIndex(10, 10, img.getWidth());
    std::cout << "red   = " << (buffer[index])
    << "green = " << (buffer[index + 1])
    << "blue  = " << (buffer[index + 2])
    << "Alpha = " << (buffer[index + 3])
    << std::endl;
    return 0;
}