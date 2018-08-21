#include "forsyde.hpp"

SC_MODULE(pn3)
{
    ForSyDe::SY::in_port<int> i1;
    ForSyDe::SY::out_port<int> out1;
    ForSyDe::SY::out_port<int> out2;
    ForSyDe::SY::out_port<int> out3;
    ForSyDe::SY::in_port<int> i2;
    ForSyDe::SY::in_port<int> i3;
    ForSyDe::SY::signal<int> c1_c1_s1;
    ForSyDe::SY::signal<int> c2_s1;
    ForSyDe::SY::signal<int> salam;
    SC_CTOR(pn3)
    {
	auto c1_l3 = ForSyDe::SY::make_mealy(
,
	    out2
,
	    i2
    );
	auto c1_c1_l1 = ForSyDe::SY::make_comb(
,
	    c1_c1_s1
,
	    i1
    );
	auto c1_c1_l2 = ForSyDe::SY::make_delay(
,
	    salam
,
	    c1_c1_s1
    );
	c1_c1_l2->out1(out1);
	auto c2_l1 = ForSyDe::SY::make_comb(
,
	    c2_s1
,
	    i3
    );
	auto c2_l2 = ForSyDe::SY::make_delay(
,
	    out3
,
	    c2_s1
    );

    }
};
