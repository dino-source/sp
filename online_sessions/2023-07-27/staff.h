#ifndef STAFF_H
#define STAFF_H
#include "common_types.h"

struct Waiter; // forward declaration

struct Cook
{
public:
    PreparedOrder cook_dishes_according_to_order();
    void call_waiter_to_take_prepared_order(Waiter, PreparedOrder);

private:
    Order delivered_order;
};

struct Waiter
{
    void approach_client(Client &client);
    void deliver_order_to_cook(Cook, Order);
    void deliver_prepared_order_to_client(Client, PreparedOrder);
    void accept_payment();
};

#endif // STAFF_H