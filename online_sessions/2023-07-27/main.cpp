#include "client.h"
#include "staff.h"

void run_app(); // function prototype

int main()
{
    run_app();
}

void run_app() // function definition
{
    Cook cook;
    Waiter waiter;
    Client client(&waiter); // arg in ctor is waiter object's address!
                            // so parameter in ctor is a pointer!

    while (!client.is_ready_to_order)
    {
        waiter.approach_client(client);
    }

    auto ordered_dishes = client.make_order();

    waiter.confirm_order(ordered_dishes);
    waiter.deliver_order_to_cook(cook, ordered_dishes);
    PreparedOrder prep_order = cook.cook_dishes_according_to_order();
    cook.call_waiter_to_take_prepared_order(waiter, prep_order);
    waiter.deliver_prepared_order_to_client(client, prep_order);
    client.eat();
    client.pay_bill();
    waiter.accept_payment();
}