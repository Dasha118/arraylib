#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int amplitude[] = {12, 45, 67, 23, 89, 54, 31, 76, 18, 95, 42, 60};
    const std::size_t n = sizeof(amplitude) / sizeof(amplitude[0]);

    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "Амплитуда аудиосигнала\n";
    std::cout << "Количество элементов: " << n << "\n";
    std::cout << "Сумма амплитуд: " << arr_sum(amplitude, n) << "\n";
    std::cout << "Максимальная амплитуда: " << arr_max(amplitude, n) << "\n";
    std::cout << "Минимальная амплитуда: " << arr_min(amplitude, n) << "\n";
    std::cout << "Средняя амплитуда: " << arr_average(amplitude, n) << "\n";
    
    int count_above_60 = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (amplitude[i] > 60) {
            ++count_above_60;
        }
    }
    std::cout << "Количество значений выше 60: " << count_above_60 << "\n";

    return 0;
}