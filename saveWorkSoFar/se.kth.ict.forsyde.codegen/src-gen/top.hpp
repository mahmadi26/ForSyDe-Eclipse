#include <forsyde.hpp>
#include <iostream>

#include "a0_tuple_vector.hpp"
 
#include "a2_tuple_vector.hpp"
 
#include "a3_tuple_vector.hpp"
 
#include "a4_tuple_vector.hpp"
 

#include "a1_vector.hpp"

using namespace std ; 
using namespace ForSyDe ; 


// composite processes

	
	
	SC_MODULE(a0)
	{
	    ForSyDe::SDF::in_port<int> p0;
	    ForSyDe::SDF::in_port<int> p1;
	    ForSyDe::SDF::in_port<int> p2;
	    ForSyDe::SDF::in_port<int> p3;
	    ForSyDe::SDF::out_port<int> p4;
	    ForSyDe::SDF::out_port<int> p5;
	    ForSyDe::SDF::signal<tuple<vector<int>,vector<int>>> a0_toUnzip;
	    SC_CTOR(a0)
	    {
			auto a0_oneOutput = ForSyDe::SDF::make_comb4(
	 		"a0_oneOutput"
	 		,a0_tuple_vector_func
	 		,1
	 		,2
	 		,2
	 		,1
	 		,1
	 		,a0_toUnzip
	 		,p0
	 		,p1
	 		,p2
	 		,p3
	    );
			std::vector<uint> otoksa0_unzip = {2,2};
			auto a0_unzip_1 = new ForSyDe::SDF::unzipN<int,int>(
	 		"a0_unzip_1",otoksa0_unzip);
			a0_unzip_1 -> iport1(a0_toUnzip);
			get<0>(a0_unzip_1->oport)(p4);
			get<1>(a0_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a2)
	{
	    ForSyDe::SDF::in_port<int> p0;
	    ForSyDe::SDF::in_port<int> p1;
	    ForSyDe::SDF::out_port<int> p2;
	    ForSyDe::SDF::out_port<int> p3;
	    ForSyDe::SDF::signal<tuple<vector<int>,vector<int>>> a2_toUnzip;
	    SC_CTOR(a2)
	    {
			auto a2_oneOutput = ForSyDe::SDF::make_comb2(
	 		"a2_oneOutput"
	 		,a2_tuple_vector_func
	 		,1
	 		,2
	 		,1
	 		,a2_toUnzip
	 		,p0
	 		,p1
	    );
			std::vector<uint> otoksa2_unzip = {2,2};
			auto a2_unzip_1 = new ForSyDe::SDF::unzipN<int,int>(
	 		"a2_unzip_1",otoksa2_unzip);
			a2_unzip_1 -> iport1(a2_toUnzip);
			get<0>(a2_unzip_1->oport)(p2);
			get<1>(a2_unzip_1->oport)(p3);
	}
	};
	
	
	
	SC_MODULE(a3)
	{
	    ForSyDe::SDF::in_port<int> p0;
	    ForSyDe::SDF::in_port<int> p1;
	    ForSyDe::SDF::out_port<int> p3;
	    ForSyDe::SDF::out_port<int> p4;
	    ForSyDe::SDF::out_port<int> p5;
	    ForSyDe::SDF::signal<tuple<vector<int>,vector<int>,vector<int>>> a3_toUnzip;
	    SC_CTOR(a3)
	    {
			auto a3_oneOutput = ForSyDe::SDF::make_comb2(
	 		"a3_oneOutput"
	 		,a3_tuple_vector_func
	 		,1
	 		,2
	 		,2
	 		,a3_toUnzip
	 		,p0
	 		,p1
	    );
			std::vector<uint> otoksa3_unzip = {2,1,2};
			auto a3_unzip_1 = new ForSyDe::SDF::unzipN<int,int,int>(
	 		"a3_unzip_1",otoksa3_unzip);
			a3_unzip_1 -> iport1(a3_toUnzip);
			get<0>(a3_unzip_1->oport)(p3);
			get<1>(a3_unzip_1->oport)(p4);
			get<2>(a3_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a4)
	{
	    ForSyDe::SDF::in_port<int> p0;
	    ForSyDe::SDF::out_port<int> p2;
	    ForSyDe::SDF::out_port<int> p3;
	    ForSyDe::SDF::out_port<int> p4;
	    ForSyDe::SDF::signal<tuple<vector<int>,vector<int>,vector<int>>> a4_toUnzip;
	    SC_CTOR(a4)
	    {
			auto a4_oneOutput = ForSyDe::SDF::make_comb(
	 		"a4_oneOutput"
	 		,a4_tuple_vector_func
	 		,1
	 		,1
	 		,a4_toUnzip
	 		,p0
	    );
			std::vector<uint> otoksa4_unzip = {1,2,1};
			auto a4_unzip_1 = new ForSyDe::SDF::unzipN<int,int,int>(
	 		"a4_unzip_1",otoksa4_unzip);
			a4_unzip_1 -> iport1(a4_toUnzip);
			get<0>(a4_unzip_1->oport)(p2);
			get<1>(a4_unzip_1->oport)(p3);
			get<2>(a4_unzip_1->oport)(p4);
	}
	};
	

// top 

SC_MODULE(top)
{
    ForSyDe::SDF::signal<array<int,1>> ch0_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch1;
    ForSyDe::SDF::signal<array<int,1>> ch2;
    ForSyDe::SDF::signal<array<int,1>> ch3_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch4_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch5_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch6;
    ForSyDe::SDF::signal<array<int,1>> ch7;
    ForSyDe::SDF::signal<array<int,1>> ch8_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch9_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch10_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch0_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch3_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch4_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch5_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch8_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch9_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch10_afterD;
    SC_CTOR(top)
    {
		auto a1 = ForSyDe::SDF::make_comb2(
 		"a1"
 		,a1_vector_func
 		,1
 		,1
 		,2
 		,ch3_beforeD
 		,ch1
 		,ch0_afterD
   	 );
		auto delaych0 = ForSyDe::SDF::make_delayn(
 		"delaych0"
 		,0
 		,4
 		,ch0_afterD
 		,ch0_beforeD
   	 );
		auto delaych3 = ForSyDe::SDF::make_delayn(
 		"delaych3"
 		,0
 		,1
 		,ch3_afterD
 		,ch3_beforeD
   	 );
		auto delaych4 = ForSyDe::SDF::make_delayn(
 		"delaych4"
 		,0
 		,1
 		,ch4_afterD
 		,ch4_beforeD
   	 );
		auto delaych5 = ForSyDe::SDF::make_delayn(
 		"delaych5"
 		,0
 		,4
 		,ch5_afterD
 		,ch5_beforeD
   	 );
		auto delaych8 = ForSyDe::SDF::make_delayn(
 		"delaych8"
 		,0
 		,1
 		,ch8_afterD
 		,ch8_beforeD
   	 );
		auto delaych9 = ForSyDe::SDF::make_delayn(
 		"delaych9"
 		,0
 		,2
 		,ch9_afterD
 		,ch9_beforeD
   	 );
		auto delaych10 = ForSyDe::SDF::make_delayn(
 		"delaych10"
 		,0
 		,2
 		,ch10_afterD
 		,ch10_beforeD
   	 );

		auto a0_1 = new a0 ("a0_1");
		a0_1 ->p0(ch10_afterD);
		a0_1 ->p1(ch5_afterD);
		a0_1 ->p2(ch2);
		a0_1 ->p3(ch6);
		a0_1 ->p4(ch5_beforeD);
		a0_1 ->p5(ch0_beforeD);

		auto a2_1 = new a2 ("a2_1");
		a2_1 ->p0(ch8_afterD);
		a2_1 ->p1(ch7);
		a2_1 ->p2(ch1);
		a2_1 ->p3(ch9_beforeD);

		auto a3_1 = new a3 ("a3_1");
		a3_1 ->p0(ch4_afterD);
		a3_1 ->p1(ch9_afterD);
		a3_1 ->p3(ch2);
		a3_1 ->p4(ch7);
		a3_1 ->p5(ch6);

		auto a4_1 = new a4 ("a4_1");
		a4_1 ->p0(ch3_afterD);
		a4_1 ->p2(ch8_beforeD);
		a4_1 ->p3(ch10_beforeD);
		a4_1 ->p4(ch4_beforeD);

	}
};


