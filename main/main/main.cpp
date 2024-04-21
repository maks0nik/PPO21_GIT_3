#include <iostream>

double input_A() {
    double a;
    do {
        std::cout << "Vvedite polozitelnoe chislo A: ";
        std::cin >> a;
        if (a <= 0) {
            std::cout << "Chislo dolzno bit' polozhitelnim. Poprobute snova.\n";
        }
    } while (a <= 0);
    return a;
}

double input_B() {
    double b;
    do {
        std::cout << "Vvedite polozitelnoe chislo B: ";
        std::cin >> b;
        if (b <= 0) {
            std::cout << "Chislo dolzno bit' polozhitelnim. Poprobute snova.\n";
        }
    } while (b <= 0);
    return b;
}

double ploshad(double a, double b) {
    return a * b;
}

double perimetr(double a, double b) {
    return 2 * (a + b);
}

int main()
{
    int choice;
    double a, b, s, p;

    do {
        // Выводим меню на экран
        std::cout << "Меню:\n";
        std::cout << "1. Vvesti polozitelnoe chislo A\n";
        std::cout << "2. Vvesti polozitelnoe chislo B\n";
        std::cout << "3. Naity ploshad pryamougolnika\n";
        std::cout << "4. Naity perimetr pryamougolnika\n";
        std::cout << "Viberite punkt: ";
        std::cin >> choice;

        // Обрабатываем выбор пользователя
        switch (choice) {
        case 1:
            a = input_A();
            break;
        case 2:
            b = input_B();
            break;
        case 3:
            if (a <= 0 || b <= 0) {
                std::cout << "Dlya vicheslenia ploshadi snachala vvedite chisla A i B\n";
            }
            else {
                s = ploshad(a, b);
                std::cout << "Ploshad' pryamougolnika: " << s << std::endl;
            }
            break;
        case 4:
            if (a <= 0 || b <= 0) {
                std::cout << "Dlya vicheslenia perimetra snachala vvedite chisla A i B\n";
            }
            else {
                p = perimetr(a, b);
                std::cout << "Perimetr pryamougolnika: " << p << std::endl;
            }
            break;
        default:
            std::cout << "Nekorrektniy vibor. Poprobuite snova.\n";
            break;
        }

    } while (choice != 4);

    return 0;
}