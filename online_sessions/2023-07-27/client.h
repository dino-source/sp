#ifndef CLIENT_H
#define CLIENT_H

#include "staff.h"
struct Client
{
    explicit Client(Waiter *waiter) : m_waiter(waiter) {}
    bool is_ready_to_order() { return m_is_ready; }
    PreparedOrder make_order() { return PreparedOrder(); }
    void eat() {}
    void pay_bill() {}

private:
    Waiter *m_waiter;
    bool m_is_ready = true;
};

#endif // CLIENT_H