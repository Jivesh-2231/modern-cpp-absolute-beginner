#include <iostream>

enum class OrderState {
    Created,
    Paid,
    Shipped
};

void next(OrderState state) {
    switch (state) {
        case OrderState::Created:
            std::cout << "Move to Paid\n";
            break;
        case OrderState::Paid:
            std::cout << "Move to Shipped\n";
            break;
        case OrderState::Shipped:
            std::cout << "In Transit\n";
            break;
    }
}
