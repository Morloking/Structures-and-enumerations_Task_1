#include <iostream>
#include <string>

enum class Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

std::string monthToStr(Months m) {
    switch (m) {
    case Months::JANUARY:   return "Январь";
    case Months::FEBRUARY:  return "Февраль";
    case Months::MARCH:     return "Март";
    case Months::APRIL:     return "Апрель";
    case Months::MAY:       return "Май";
    case Months::JUNE:      return "Июнь";
    case Months::JULY:      return "Июль";
    case Months::AUGUST:    return "Август";
    case Months::SEPTEMBER: return "Сентябрь";
    case Months::OCTOBER:   return "Октябрь";
    case Months::NOVEMBER:  return "Ноябрь";
    case Months::DECEMBER:  return "Декабрь";
    default:                return "Неизвестный месяц";
    }
}

void run() {
    int num{ -1 };
    while (num != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;
        if (num == 0) break;
        if (num > 12 || num < 1) {
            std::cout << "Неправильный номер!\n";
        }
        else {
            Months currMonth = static_cast<Months>(num);
            std::cout << monthToStr(currMonth) << "\n";
        }
    }
    std::cout << "До свидания\n";
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    run();
}