#include <iostream>

double input_A() {

}

double input_B() {
    
}

double ploshad(double a, double b) {
    return a * b;
}

double perimetr(double a, double b) {
    
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