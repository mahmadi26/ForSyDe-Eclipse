#include "forsyde.hpp"
#include <iostream>
#include "mulacc.hpp"

SC_MODULE(top__1)
{
    ForSyDe::SY::signal<int> fifo_0;
    ForSyDe::SY::signal<int> fifo_1_created;
    ForSyDe::SY::signal<int> fifo_2_created;
    SC_CTOR(top__1)
    {
	auto constant1 = ForSyDe::SY::make_sconstant(
 "constant1"
 ,3
 ,10
 ,fifo_0
    );

	auto fifo_2_mulacc1_prime_ = ForSyDe::SY::make_sender(
 "fifo_2_mulacc1_prime_"
 ,0
 ,3
 ,fifo_2_created
    );
	auto fifo_1_mulacc1_prime_ = ForSyDe::SY::make_receiver(
 "fifo_1_mulacc1_prime_"
 ,0
 ,2
 ,fifo_1_created
    );
	auto mulacc1 = new mulacc("mulacc1");
	mulacc1->port_0(fifo_0);
	mulacc1->port_1(fifo_1_created);
	mulacc1->port_2(fifo_2_created);
    }
};
