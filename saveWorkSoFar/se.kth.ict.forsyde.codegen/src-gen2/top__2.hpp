#include "forsyde.hpp"
#include <iostream>
#include "siggen.hpp"
#include "report.hpp"

SC_MODULE(top__2)
{
    ForSyDe::SY::signal<int> fifo_1_created;
    ForSyDe::SY::signal<int> fifo_2_created;
    SC_CTOR(top__2)
    {
	auto siggen1 = ForSyDe::SY::make_ssource(
 "siggen1"
 ,siggen_func
 ,1
 ,10
 ,fifo_1_created
    );
	auto report1 = ForSyDe::SY::make_ssink(
 "report1"
 ,report_func
 ,fifo_2_created
    );

	auto fifo_1_siggen1_prime_ = ForSyDe::SY::make_sender(
 "fifo_1_siggen1_prime_"
 ,1
 ,2
 ,fifo_1_created
    );
	auto fifo_2_report1_prime_ = ForSyDe::SY::make_receiver(
 "fifo_2_report1_prime_"
 ,1
 ,3
 ,fifo_2_created
    );
    }
};
