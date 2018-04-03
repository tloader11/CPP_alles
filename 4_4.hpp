//
// Created by universal on 3/5/2018.
//

#ifndef PPC_WEEK4_TLOADER11_VIER_4_HPP
#define PPC_WEEK4_TLOADER11_VIER_4_HPP

#include <vector>
using namespace std;

struct Queue
{
    vector<float> v;
    int head;
    int tail;
};

void init_queue(Queue & pq);
void enqueue(Queue & pq, float data);
float dequeue(Queue & pq);
float show(const Queue & pq);


#endif //PPC_WEEK4_TLOADER11_VIER_4_HPP
