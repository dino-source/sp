#ifndef STAFF_H
#define STAFF_H
#include "common_types.h"

struct Waiter; // forward declaration

struct Cook
{
public:
    inline PreparedOrder cook_dishes_according_to_order() { return PreparedOrder(); }
    inline void call_waiter_to_take_prepared_order(Waiter &waiter, PreparedOrder const &ordered_dishes) {}

private:
    Order delivered_order;
};

class Client;

struct Waiter
{
    inline void approach_client(Client &client) {}
    inline void deliver_prepared_order_to_client(Client &client, PreparedOrder const &ordered_dishes) {}
    inline void accept_payment() {}
    inline void confirm_order(PreparedOrder &ordered_dishes) {}
    inline void deliver_order_to_cook(Cook &cook, PreparedOrder const &ordered_dishes) {}
};

#endif // STAFF_H