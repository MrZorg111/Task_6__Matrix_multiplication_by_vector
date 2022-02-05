#include <iostream>
#include <vector>

int main() {
    float n = 4, num, sum = 0;
    std::vector<float> v(n);
    float m[4][4];
    std::vector<float> r(4);

    for (int i = 0; i < 4; i++) {
        std::cout << "Fill in the vector please: ";
        std::cin >> n;
        v[i] = n;
    }
    std::cout << "\n";
    for (int j = 0; j < 4; j++) {
        for (int l = 0; l < 4; l++) {
            std::cout << "Fill in the array please: ";
            std::cin >> num;
            m[j][l] = num;
        }
        std::cout << "\n";
    }

    for (int t = 0; t < 4; t++) {
        for (int l = 0; l < 4; l++) {
            sum += v[t] * m[t][l];
        }
        r[t] = sum;
        sum = 0;
    }
    std::cout << "\n\n";
    std::cout << "The result of the product of a vector by a matrix: ";
    for (int y = 0; y < 4; y++) {
        std::cout << r[y] << " ";
    }
}
