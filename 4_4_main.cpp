#include <iostream>
#include "4_4.hpp"

int vier_vier_main () {

    Queue q;
    init_queue(q);

    enqueue(q, 5.43);
    enqueue(q, 7.2);
    enqueue(q, 3.90);

    cout << dequeue(q) << "\n";
    cout << show(q) << "\n";
    cout << dequeue(q) << "\n";
    cout << dequeue(q) << "\n";
    return 0;
    }