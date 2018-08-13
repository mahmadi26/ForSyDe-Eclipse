#include "forsyde.hpp"
#include <iostream>
#include "mul.hpp"
#include "add.hpp"

SC_MODULE(top__1)
{
    ForSyDe::SY::signal<int> fifo_0;
    ForSyDe::SY::signal<int> fifo_3;
    ForSyDe::SY::signal<int> fifo_1;
    ForSyDe::SY::signal<int> fifo_2;
    ForSyDe::SY::signal<int> fifo_4;
    ForSyDe::SY::signal<int> fifo_5;
    SC_CTOR(top__1)
    {
	auto constant1 = ForSyDe::SY::make_sconstant(
 "constant1"
 ,3
 ,10
 ,fifo_0
    );
	auto mul1 = ForSyDe::SY::make_scomb2(
 "mul1"
 ,mul_func
 ,fifo_3
 ,fifo_0
 ,fifo_1
    );
	auto add1 = ForSyDe::SY::make_scomb2(
 "add1"
 ,add_func
 ,fifo_2
 ,fifo_3
 ,fifo_4
    );
	add1->oport1(fifo_5);

	auto fifo_2add1prime = ForSyDe::SY::make_sender(
 "fifo_2add1prime"
 ,1
 ,1
 ,fifo_2
    );
	auto fifo_5add1prime = ForSyDe::SY::make_sender(
 "fifo_5add1prime"
 ,1
 ,2
 ,fifo_5
    );
	auto fifo_1mul1prime = ForSyDe::SY::make_receiver(
 "fifo_1mul1prime"
 ,1
 ,3
 ,fifo_1
    );
	auto fifo_4add1prime = ForSyDe::SY::make_receiver(
 "fifo_4add1prime"
 ,1
 ,4
 ,fifo_4
    );
    }
};
