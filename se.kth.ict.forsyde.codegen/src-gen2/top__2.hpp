#include "forsyde.hpp"
#include <iostream>
#include "siggen.hpp"
#include "report.hpp"

SC_MODULE(top__2)
{
    ForSyDe::SY::signal<int> fifo_1;
    ForSyDe::SY::signal<int> fifo_2;
    ForSyDe::SY::signal<int> fifo_4;
    ForSyDe::SY::signal<int> fifo_5;
    SC_CTOR(top__2)
    {
	auto siggen1 = ForSyDe::SY::make_ssource(
 "siggen1"
 ,siggen_func
 ,1
 ,10
 ,fifo_1
    );
	auto accum = ForSyDe::SY::make_sdelay(
 "accum"
 ,0
 ,fifo_4
 ,fifo_5
    );
	auto report1 = ForSyDe::SY::make_ssink(
 "report1"
 ,report_func
 ,fifo_2
    );

	auto fifo_1siggen1prime = ForSyDe::SY::make_sender(
 "fifo_1siggen1prime"
 ,0
 ,3
 ,fifo_1
    );
	auto fifo_4accumprime = ForSyDe::SY::make_sender(
 "fifo_4accumprime"
 ,0
 ,4
 ,fifo_4
    );
	auto fifo_2report1prime = ForSyDe::SY::make_receiver(
 "fifo_2report1prime"
 ,0
 ,1
 ,fifo_2
    );
	auto fifo_5accumprime = ForSyDe::SY::make_receiver(
 "fifo_5accumprime"
 ,0
 ,2
 ,fifo_5
    );
    }
};
