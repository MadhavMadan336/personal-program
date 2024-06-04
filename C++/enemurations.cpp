#include <iostream>
enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main() {
    Days today = Tuesday;
    std::cout << "Today is ";
    switch (today) {
        case Sunday:
            std::cout << "Sunday";
            break;
        case Monday:
            std::cout << "Monday";
            break;
        case Tuesday:
            std::cout << "Tuesday";
            break;
        case Wednesday:
            std::cout << "Wednesday";
            break;
        case Thursday:
            std::cout << "Thursday";
            break;
        case Friday:
            std::cout << "Friday";
            break;
        case Saturday:
            std::cout << "Saturday";
            break;
    }
    std::cout << std::endl;
    return 0;
}
