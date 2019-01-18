#include <forsyde.hpp>
#include <iostream>
using namespace std ; 

void a12__5_func(vector<array<int,1>>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
	for (int i ; i < 5 ; i++ )
	{ 
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		out1[0] = {inp1[0][0] + j} ;
	}
}

void a17__5_func(vector<array<int,1>>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
	for (int i ; i < 5 ; i++ )
	{ 
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		out1[0] = {inp1[0][0] + j} ;
	}
}

void a30__5_func(vector<array<int,1>>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
	for (int i ; i < 5 ; i++ )
	{ 
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		out1[0] = {inp1[0][0] + j} ;
	}
}

void a38__5_func(vector<array<int,1>>& out1,const vector<array<int,1>>& inp1)
{
	for (int i ; i < 5 ; i++ )
	{ 
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		out1[0] = {inp1[0][0] + j} ;
	}
}



typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint4_64;

void a0_oneOutput__5_func(vector<tupint4_64>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
vector<array<int,1>> ret3(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
		ret3[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2,ret3);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_65;

void a2_oneOutput__5_func(vector<tupint2_65>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_66;

void a6_oneOutput__5_func(vector<tupint3_66>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_67;

void a7_oneOutput__5_func(vector<tupint3_67>& out1,const vector<array<int,1>>& inp1)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_68;

void a9_oneOutput__5_func(vector<tupint3_68>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_69;

void a14_oneOutput__5_func(vector<tupint2_69>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_70;

void a16_oneOutput__5_func(vector<tupint2_70>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3,const vector<array<int,1>>& inp4,const vector<array<int,1>>& inp5)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_71;

void a19_oneOutput__5_func(vector<tupint3_71>& out1,const vector<array<int,1>>& inp1)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_72;

void a23_oneOutput__5_func(vector<tupint3_72>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_73;

void a24_oneOutput__5_func(vector<tupint2_73>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_74;

void a27_oneOutput__5_func(vector<tupint2_74>& out1,const vector<array<int,1>>& inp1)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_75;

void a28_oneOutput__5_func(vector<tupint3_75>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3,const vector<array<int,1>>& inp4)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_76;

void a29_oneOutput__5_func(vector<tupint2_76>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3,const vector<array<int,1>>& inp4)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_77;

void a31_oneOutput__5_func(vector<tupint2_77>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint5_78;

void a32_oneOutput__5_func(vector<tupint5_78>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
vector<array<int,1>> ret3(1) ;
vector<array<int,1>> ret4(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
		ret3[0] = {j} ; 
		ret4[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2,ret3,ret4);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_79;

void a35_oneOutput__5_func(vector<tupint2_79>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint4_80;

void a40_oneOutput__5_func(vector<tupint4_80>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
vector<array<int,1>> ret3(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
		ret3[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2,ret3);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>> tupint2_81;

void a42_oneOutput__5_func(vector<tupint2_81>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2,const vector<array<int,1>>& inp3,const vector<array<int,1>>& inp4)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint3_82;

void a45_oneOutput__5_func(vector<tupint3_82>& out1,const vector<array<int,1>>& inp1,const vector<array<int,1>>& inp2)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2);
}
typedef tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>> tupint5_83;

void a47_oneOutput__5_func(vector<tupint5_83>& out1,const vector<array<int,1>>& inp1)
{
vector<array<int,1>> ret0(1) ;
vector<array<int,1>> ret1(1) ;
vector<array<int,1>> ret2(1) ;
vector<array<int,1>> ret3(1) ;
vector<array<int,1>> ret4(1) ;
for (int i ; i < 5 ; i++ )
	{
		int j ; 
		j = i % 3 ; 
		j = j*2 ; 
		ret0[0] = {j} ; 
		ret1[0] = {j} ; 
		ret2[0] = {j} ; 
		ret3[0] = {j} ; 
		ret4[0] = {j} ; 
	}
out1[0] = make_tuple(ret0,ret1,ret2,ret3,ret4);
}





using namespace ForSyDe ; 


// composite processes

	
	
	SC_MODULE(a0)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a0_toUnzip;
	    SC_CTOR(a0)
	    {
			auto a0_oneOutput__5 = ForSyDe::SDF::make_comb2(
	 		"a0_oneOutput__5"
	 		,a0_oneOutput__5_func
	 		,1
	 		,3
	 		,1
	 		,a0_toUnzip
	 		,p0
	 		,p1
	    );
			std::vector<uint> otoksa0_unzip = {27,18,54,216};
			auto a0_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>,array<int,1>>(
	 		"a0_unzip_1",otoksa0_unzip);
			a0_unzip_1 -> iport1(a0_toUnzip);
			get<0>(a0_unzip_1->oport)(p2);
			get<1>(a0_unzip_1->oport)(p3);
			get<2>(a0_unzip_1->oport)(p4);
			get<3>(a0_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a2)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a2_toUnzip;
	    SC_CTOR(a2)
	    {
			auto a2_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a2_oneOutput__5"
	 		,a2_oneOutput__5_func
	 		,1
	 		,3
	 		,243
	 		,1296
	 		,a2_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa2_unzip = {6,6};
			auto a2_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a2_unzip_1",otoksa2_unzip);
			a2_unzip_1 -> iport1(a2_toUnzip);
			get<0>(a2_unzip_1->oport)(p3);
			get<1>(a2_unzip_1->oport)(p4);
	}
	};
	
	
	
	SC_MODULE(a6)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a6_toUnzip;
	    SC_CTOR(a6)
	    {
			auto a6_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a6_oneOutput__5"
	 		,a6_oneOutput__5_func
	 		,1
	 		,3
	 		,32
	 		,32
	 		,a6_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa6_unzip = {5,6,2};
			auto a6_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a6_unzip_1",otoksa6_unzip);
			a6_unzip_1 -> iport1(a6_toUnzip);
			get<0>(a6_unzip_1->oport)(p3);
			get<1>(a6_unzip_1->oport)(p4);
			get<2>(a6_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a7)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::out_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a7_toUnzip;
	    SC_CTOR(a7)
	    {
			auto a7_oneOutput__5 = ForSyDe::SDF::make_comb(
	 		"a7_oneOutput__5"
	 		,a7_oneOutput__5_func
	 		,1
	 		,4
	 		,a7_toUnzip
	 		,p0
	    );
			std::vector<uint> otoksa7_unzip = {9,4,864};
			auto a7_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a7_unzip_1",otoksa7_unzip);
			a7_unzip_1 -> iport1(a7_toUnzip);
			get<0>(a7_unzip_1->oport)(p1);
			get<1>(a7_unzip_1->oport)(p2);
			get<2>(a7_unzip_1->oport)(p3);
	}
	};
	
	
	
	SC_MODULE(a9)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a9_toUnzip;
	    SC_CTOR(a9)
	    {
			auto a9_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a9_oneOutput__5"
	 		,a9_oneOutput__5_func
	 		,1
	 		,625
	 		,3
	 		,9
	 		,a9_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa9_unzip = {4,3,75};
			auto a9_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a9_unzip_1",otoksa9_unzip);
			a9_unzip_1 -> iport1(a9_toUnzip);
			get<0>(a9_unzip_1->oport)(p3);
			get<1>(a9_unzip_1->oport)(p4);
			get<2>(a9_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a14)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a14_toUnzip;
	    SC_CTOR(a14)
	    {
			auto a14_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a14_oneOutput__5"
	 		,a14_oneOutput__5_func
	 		,1
	 		,4
	 		,3125
	 		,3
	 		,a14_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa14_unzip = {3,5};
			auto a14_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a14_unzip_1",otoksa14_unzip);
			a14_unzip_1 -> iport1(a14_toUnzip);
			get<0>(a14_unzip_1->oport)(p3);
			get<1>(a14_unzip_1->oport)(p4);
	}
	};
	
	
	
	SC_MODULE(a16)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::in_port<array<int,1>> p3;
	    ForSyDe::SDF::in_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::out_port<array<int,1>> p6;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a16_toUnzip;
	    SC_CTOR(a16)
	    {
			auto a16_oneOutput__5 = ForSyDe::SDF::make_comb5(
	 		"a16_oneOutput__5"
	 		,a16_oneOutput__5_func
	 		,1
	 		,15625
	 		,5
	 		,3125
	 		,45
	 		,15
	 		,a16_toUnzip
	 		,p0
	 		,p1
	 		,p2
	 		,p3
	 		,p4
	    );
			std::vector<uint> otoksa16_unzip = {5,1875};
			auto a16_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a16_unzip_1",otoksa16_unzip);
			a16_unzip_1 -> iport1(a16_toUnzip);
			get<0>(a16_unzip_1->oport)(p5);
			get<1>(a16_unzip_1->oport)(p6);
	}
	};
	
	
	
	SC_MODULE(a19)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::out_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a19_toUnzip;
	    SC_CTOR(a19)
	    {
			auto a19_oneOutput__5 = ForSyDe::SDF::make_comb(
	 		"a19_oneOutput__5"
	 		,a19_oneOutput__5_func
	 		,1
	 		,625
	 		,a19_toUnzip
	 		,p0
	    );
			std::vector<uint> otoksa19_unzip = {3125,4,1};
			auto a19_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a19_unzip_1",otoksa19_unzip);
			a19_unzip_1 -> iport1(a19_toUnzip);
			get<0>(a19_unzip_1->oport)(p1);
			get<1>(a19_unzip_1->oport)(p2);
			get<2>(a19_unzip_1->oport)(p3);
	}
	};
	
	
	
	SC_MODULE(a23)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a23_toUnzip;
	    SC_CTOR(a23)
	    {
			auto a23_oneOutput__5 = ForSyDe::SDF::make_comb2(
	 		"a23_oneOutput__5"
	 		,a23_oneOutput__5_func
	 		,1
	 		,625
	 		,125
	 		,a23_toUnzip
	 		,p0
	 		,p1
	    );
			std::vector<uint> otoksa23_unzip = {4,3,64};
			auto a23_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a23_unzip_1",otoksa23_unzip);
			a23_unzip_1 -> iport1(a23_toUnzip);
			get<0>(a23_unzip_1->oport)(p2);
			get<1>(a23_unzip_1->oport)(p3);
			get<2>(a23_unzip_1->oport)(p4);
	}
	};
	
	
	
	SC_MODULE(a24)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a24_toUnzip;
	    SC_CTOR(a24)
	    {
			auto a24_oneOutput__5 = ForSyDe::SDF::make_comb2(
	 		"a24_oneOutput__5"
	 		,a24_oneOutput__5_func
	 		,1
	 		,3
	 		,3
	 		,a24_toUnzip
	 		,p0
	 		,p1
	    );
			std::vector<uint> otoksa24_unzip = {288,2};
			auto a24_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a24_unzip_1",otoksa24_unzip);
			a24_unzip_1 -> iport1(a24_toUnzip);
			get<0>(a24_unzip_1->oport)(p2);
			get<1>(a24_unzip_1->oport)(p3);
	}
	};
	
	
	
	SC_MODULE(a27)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::out_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a27_toUnzip;
	    SC_CTOR(a27)
	    {
			auto a27_oneOutput__5 = ForSyDe::SDF::make_comb(
	 		"a27_oneOutput__5"
	 		,a27_oneOutput__5_func
	 		,1
	 		,3
	 		,a27_toUnzip
	 		,p0
	    );
			std::vector<uint> otoksa27_unzip = {2,3125};
			auto a27_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a27_unzip_1",otoksa27_unzip);
			a27_unzip_1 -> iport1(a27_toUnzip);
			get<0>(a27_unzip_1->oport)(p1);
			get<1>(a27_unzip_1->oport)(p2);
	}
	};
	
	
	
	SC_MODULE(a28)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::in_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::out_port<array<int,1>> p6;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a28_toUnzip;
	    SC_CTOR(a28)
	    {
			auto a28_oneOutput__5 = ForSyDe::SDF::make_comb4(
	 		"a28_oneOutput__5"
	 		,a28_oneOutput__5_func
	 		,1
	 		,4
	 		,3
	 		,25
	 		,4
	 		,a28_toUnzip
	 		,p0
	 		,p1
	 		,p2
	 		,p3
	    );
			std::vector<uint> otoksa28_unzip = {64,16,16};
			auto a28_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a28_unzip_1",otoksa28_unzip);
			a28_unzip_1 -> iport1(a28_toUnzip);
			get<0>(a28_unzip_1->oport)(p4);
			get<1>(a28_unzip_1->oport)(p5);
			get<2>(a28_unzip_1->oport)(p6);
	}
	};
	
	
	
	SC_MODULE(a29)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::in_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a29_toUnzip;
	    SC_CTOR(a29)
	    {
			auto a29_oneOutput__5 = ForSyDe::SDF::make_comb4(
	 		"a29_oneOutput__5"
	 		,a29_oneOutput__5_func
	 		,1
	 		,375
	 		,4
	 		,4
	 		,3125
	 		,a29_toUnzip
	 		,p0
	 		,p1
	 		,p2
	 		,p3
	    );
			std::vector<uint> otoksa29_unzip = {3,16};
			auto a29_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a29_unzip_1",otoksa29_unzip);
			a29_unzip_1 -> iport1(a29_toUnzip);
			get<0>(a29_unzip_1->oport)(p4);
			get<1>(a29_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a31)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a31_toUnzip;
	    SC_CTOR(a31)
	    {
			auto a31_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a31_oneOutput__5"
	 		,a31_oneOutput__5_func
	 		,1
	 		,27
	 		,5
	 		,9
	 		,a31_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa31_unzip = {1875,1125};
			auto a31_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a31_unzip_1",otoksa31_unzip);
			a31_unzip_1 -> iport1(a31_toUnzip);
			get<0>(a31_unzip_1->oport)(p3);
			get<1>(a31_unzip_1->oport)(p4);
	}
	};
	
	
	
	SC_MODULE(a32)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::out_port<array<int,1>> p6;
	    ForSyDe::SDF::out_port<array<int,1>> p7;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a32_toUnzip;
	    SC_CTOR(a32)
	    {
			auto a32_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a32_oneOutput__5"
	 		,a32_oneOutput__5_func
	 		,1
	 		,4
	 		,64
	 		,81
	 		,a32_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa32_unzip = {144,4,64,81,27};
			auto a32_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>,array<int,1>,array<int,1>>(
	 		"a32_unzip_1",otoksa32_unzip);
			a32_unzip_1 -> iport1(a32_toUnzip);
			get<0>(a32_unzip_1->oport)(p3);
			get<1>(a32_unzip_1->oport)(p4);
			get<2>(a32_unzip_1->oport)(p5);
			get<3>(a32_unzip_1->oport)(p6);
			get<4>(a32_unzip_1->oport)(p7);
	}
	};
	
	
	
	SC_MODULE(a35)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a35_toUnzip;
	    SC_CTOR(a35)
	    {
			auto a35_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a35_oneOutput__5"
	 		,a35_oneOutput__5_func
	 		,1
	 		,3
	 		,375
	 		,125
	 		,a35_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa35_unzip = {4,125};
			auto a35_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a35_unzip_1",otoksa35_unzip);
			a35_unzip_1 -> iport1(a35_toUnzip);
			get<0>(a35_unzip_1->oport)(p3);
			get<1>(a35_unzip_1->oport)(p4);
	}
	};
	
	
	
	SC_MODULE(a40)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::out_port<array<int,1>> p6;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a40_toUnzip;
	    SC_CTOR(a40)
	    {
			auto a40_oneOutput__5 = ForSyDe::SDF::make_comb3(
	 		"a40_oneOutput__5"
	 		,a40_oneOutput__5_func
	 		,1
	 		,125
	 		,3
	 		,4
	 		,a40_toUnzip
	 		,p0
	 		,p1
	 		,p2
	    );
			std::vector<uint> otoksa40_unzip = {3,16,2,3125};
			auto a40_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>,array<int,1>>(
	 		"a40_unzip_1",otoksa40_unzip);
			a40_unzip_1 -> iport1(a40_toUnzip);
			get<0>(a40_unzip_1->oport)(p3);
			get<1>(a40_unzip_1->oport)(p4);
			get<2>(a40_unzip_1->oport)(p5);
			get<3>(a40_unzip_1->oport)(p6);
	}
	};
	
	
	
	SC_MODULE(a42)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::in_port<array<int,1>> p2;
	    ForSyDe::SDF::in_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>>> a42_toUnzip;
	    SC_CTOR(a42)
	    {
			auto a42_oneOutput__5 = ForSyDe::SDF::make_comb4(
	 		"a42_oneOutput__5"
	 		,a42_oneOutput__5_func
	 		,1
	 		,4
	 		,3
	 		,4
	 		,625
	 		,a42_toUnzip
	 		,p0
	 		,p1
	 		,p2
	 		,p3
	    );
			std::vector<uint> otoksa42_unzip = {1250,625};
			auto a42_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>>(
	 		"a42_unzip_1",otoksa42_unzip);
			a42_unzip_1 -> iport1(a42_toUnzip);
			get<0>(a42_unzip_1->oport)(p4);
			get<1>(a42_unzip_1->oport)(p5);
	}
	};
	
	
	
	SC_MODULE(a45)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::in_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a45_toUnzip;
	    SC_CTOR(a45)
	    {
			auto a45_oneOutput__5 = ForSyDe::SDF::make_comb2(
	 		"a45_oneOutput__5"
	 		,a45_oneOutput__5_func
	 		,1
	 		,2
	 		,81
	 		,a45_toUnzip
	 		,p0
	 		,p1
	    );
			std::vector<uint> otoksa45_unzip = {3,5,5};
			auto a45_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>>(
	 		"a45_unzip_1",otoksa45_unzip);
			a45_unzip_1 -> iport1(a45_toUnzip);
			get<0>(a45_unzip_1->oport)(p2);
			get<1>(a45_unzip_1->oport)(p3);
			get<2>(a45_unzip_1->oport)(p4);
	}
	};
	
	
	
	SC_MODULE(a47)
	{
	    ForSyDe::SDF::in_port<array<int,1>> p0;
	    ForSyDe::SDF::out_port<array<int,1>> p1;
	    ForSyDe::SDF::out_port<array<int,1>> p2;
	    ForSyDe::SDF::out_port<array<int,1>> p3;
	    ForSyDe::SDF::out_port<array<int,1>> p4;
	    ForSyDe::SDF::out_port<array<int,1>> p5;
	    ForSyDe::SDF::signal<tuple<vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>,vector<array<int,1>>>> a47_toUnzip;
	    SC_CTOR(a47)
	    {
			auto a47_oneOutput__5 = ForSyDe::SDF::make_comb(
	 		"a47_oneOutput__5"
	 		,a47_oneOutput__5_func
	 		,1
	 		,3
	 		,a47_toUnzip
	 		,p0
	    );
			std::vector<uint> otoksa47_unzip = {576,4,576,192,20};
			auto a47_unzip_1 = new ForSyDe::SDF::unzipN<array<int,1>,array<int,1>,array<int,1>,array<int,1>,array<int,1>>(
	 		"a47_unzip_1",otoksa47_unzip);
			a47_unzip_1 -> iport1(a47_toUnzip);
			get<0>(a47_unzip_1->oport)(p1);
			get<1>(a47_unzip_1->oport)(p2);
			get<2>(a47_unzip_1->oport)(p3);
			get<3>(a47_unzip_1->oport)(p4);
			get<4>(a47_unzip_1->oport)(p5);
	}
	};
	

// top 

SC_MODULE(top)
{
    ForSyDe::SDF::signal<array<int,1>> ch0_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch1_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch4_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch6_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch8_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch10_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch11_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch13_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch15_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch16_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch18_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch23_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch26_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch27_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch28_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch29_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch30_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch31_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch34_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch41_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch44_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch46_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch49_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch50_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch51_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch56_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch57_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch58_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch59_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch60_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch61_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch64_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch65_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch68_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch70_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch71_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch75_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch80_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch83_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch85_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch87_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch89_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch90_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch91_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch92_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch93;
    ForSyDe::SDF::signal<array<int,1>> ch94_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch97_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch98_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch99_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch103_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch105_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch106_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch107_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch109_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch111_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch113_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch114_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch116_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch118_beforeD;
    ForSyDe::SDF::signal<array<int,1>> ch1_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch6_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch8_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch11_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch13_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch15_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch16_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch18_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch23_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch26_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch27_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch28_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch29_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch30_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch34_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch41_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch44_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch46_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch49_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch50_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch56_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch57_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch58_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch59_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch60_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch65_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch68_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch70_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch71_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch75_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch83_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch85_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch87_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch90_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch91_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch92_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch94_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch98_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch103_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch105_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch106_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch107_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch109_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch111_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch114_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch116_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch118_afterD;
    ForSyDe::SDF::signal<array<int,1>> ch5_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch5_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch22_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch22_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch37_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch37_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch39_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch39_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch48_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch48_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch63_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch63_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch66_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch66_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch69_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch69_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch72_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch72_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch84_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch84_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch112_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch112_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch120_afterD_fromReceiver;
		ForSyDe::SY::signal<array<int,1>> ch120_afterD_fromReceiverSY;
    ForSyDe::SDF::signal<array<int,1>> ch82_toSender;
		ForSyDe::SY::signal<array<int,1>> ch82_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch0_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch0_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch4_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch4_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch10_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch10_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch31_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch31_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch51_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch51_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch61_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch61_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch64_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch64_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch80_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch80_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch89_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch89_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch97_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch97_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch99_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch99_afterD_toSenderSY;
    ForSyDe::SDF::signal<array<int,1>> ch113_afterD_toSender;
		ForSyDe::SY::signal<array<int,1>> ch113_afterD_toSenderSY;
    SC_CTOR(top)
    {
		auto a12__5 = ForSyDe::SDF::make_comb2(
 		"a12__5"
 		,a12__5_func
 		,25
 		,3125
 		,4
 		,ch11_beforeD
 		,ch118_afterD
 		,ch60_afterD
   	 );
		auto a17__5 = ForSyDe::SDF::make_comb2(
 		"a17__5"
 		,a17__5_func
 		,4
 		,4
 		,36
 		,ch16_beforeD
 		,ch29_afterD
 		,ch26_afterD
   	 );
		auto a30__5 = ForSyDe::SDF::make_comb2(
 		"a30__5"
 		,a30__5_func
 		,6
 		,2
 		,3
 		,ch29_beforeD
 		,ch94_afterD
 		,ch46_afterD
   	 );
		auto a38__5 = ForSyDe::SDF::make_comb(
 		"a38__5"
 		,a38__5_func
 		,3
 		,25
 		,ch93
 		,ch37_afterD_fromReceiver
   	 );
		auto delaych0 = ForSyDe::SDF::make_delayn(
 		"delaych0"
 		,{0}
 		,4779
 		,ch0_afterD_toSender
 		,ch0_beforeD
   	 );
		auto delaych1 = ForSyDe::SDF::make_delayn(
 		"delaych1"
 		,{0}
 		,4069871
 		,ch1_afterD
 		,ch1_beforeD
   	 );
		auto delaych4 = ForSyDe::SDF::make_delayn(
 		"delaych4"
 		,{0}
 		,2311
 		,ch4_afterD_toSender
 		,ch4_beforeD
   	 );
		auto delaych6 = ForSyDe::SDF::make_delayn(
 		"delaych6"
 		,{0}
 		,5993972
 		,ch6_afterD
 		,ch6_beforeD
   	 );
		auto delaych8 = ForSyDe::SDF::make_delayn(
 		"delaych8"
 		,{0}
 		,1
 		,ch8_afterD
 		,ch8_beforeD
   	 );
		auto delaych10 = ForSyDe::SDF::make_delayn(
 		"delaych10"
 		,{0}
 		,14
 		,ch10_afterD_toSender
 		,ch10_beforeD
   	 );
		auto delaych11 = ForSyDe::SDF::make_delayn(
 		"delaych11"
 		,{0}
 		,176
 		,ch11_afterD
 		,ch11_beforeD
   	 );
		auto delaych13 = ForSyDe::SDF::make_delayn(
 		"delaych13"
 		,{0}
 		,730832
 		,ch13_afterD
 		,ch13_beforeD
   	 );
		auto delaych15 = ForSyDe::SDF::make_delayn(
 		"delaych15"
 		,{0}
 		,281729
 		,ch15_afterD
 		,ch15_beforeD
   	 );
		auto delaych16 = ForSyDe::SDF::make_delayn(
 		"delaych16"
 		,{0}
 		,1351857
 		,ch16_afterD
 		,ch16_beforeD
   	 );
		auto delaych18 = ForSyDe::SDF::make_delayn(
 		"delaych18"
 		,{0}
 		,666270
 		,ch18_afterD
 		,ch18_beforeD
   	 );
		auto delaych23 = ForSyDe::SDF::make_delayn(
 		"delaych23"
 		,{0}
 		,4
 		,ch23_afterD
 		,ch23_beforeD
   	 );
		auto delaych26 = ForSyDe::SDF::make_delayn(
 		"delaych26"
 		,{0}
 		,311827008
 		,ch26_afterD
 		,ch26_beforeD
   	 );
		auto delaych27 = ForSyDe::SDF::make_delayn(
 		"delaych27"
 		,{0}
 		,5
 		,ch27_afterD
 		,ch27_beforeD
   	 );
		auto delaych28 = ForSyDe::SDF::make_delayn(
 		"delaych28"
 		,{0}
 		,1
 		,ch28_afterD
 		,ch28_beforeD
   	 );
		auto delaych29 = ForSyDe::SDF::make_delayn(
 		"delaych29"
 		,{0}
 		,2721216
 		,ch29_afterD
 		,ch29_beforeD
   	 );
		auto delaych30 = ForSyDe::SDF::make_delayn(
 		"delaych30"
 		,{0}
 		,6
 		,ch30_afterD
 		,ch30_beforeD
   	 );
		auto delaych31 = ForSyDe::SDF::make_delayn(
 		"delaych31"
 		,{0}
 		,62
 		,ch31_afterD_toSender
 		,ch31_beforeD
   	 );
		auto delaych34 = ForSyDe::SDF::make_delayn(
 		"delaych34"
 		,{0}
 		,278
 		,ch34_afterD
 		,ch34_beforeD
   	 );
		auto delaych41 = ForSyDe::SDF::make_delayn(
 		"delaych41"
 		,{0}
 		,24725113
 		,ch41_afterD
 		,ch41_beforeD
   	 );
		auto delaych44 = ForSyDe::SDF::make_delayn(
 		"delaych44"
 		,{0}
 		,52130254
 		,ch44_afterD
 		,ch44_beforeD
   	 );
		auto delaych46 = ForSyDe::SDF::make_delayn(
 		"delaych46"
 		,{0}
 		,18527318
 		,ch46_afterD
 		,ch46_beforeD
   	 );
		auto delaych49 = ForSyDe::SDF::make_delayn(
 		"delaych49"
 		,{0}
 		,2181
 		,ch49_afterD
 		,ch49_beforeD
   	 );
		auto delaych50 = ForSyDe::SDF::make_delayn(
 		"delaych50"
 		,{0}
 		,321163931
 		,ch50_afterD
 		,ch50_beforeD
   	 );
		auto delaych51 = ForSyDe::SDF::make_delayn(
 		"delaych51"
 		,{0}
 		,61
 		,ch51_afterD_toSender
 		,ch51_beforeD
   	 );
		auto delaych56 = ForSyDe::SDF::make_delayn(
 		"delaych56"
 		,{0}
 		,1157
 		,ch56_afterD
 		,ch56_beforeD
   	 );
		auto delaych57 = ForSyDe::SDF::make_delayn(
 		"delaych57"
 		,{0}
 		,416162806
 		,ch57_afterD
 		,ch57_beforeD
   	 );
		auto delaych58 = ForSyDe::SDF::make_delayn(
 		"delaych58"
 		,{0}
 		,708160
 		,ch58_afterD
 		,ch58_beforeD
   	 );
		auto delaych59 = ForSyDe::SDF::make_delayn(
 		"delaych59"
 		,{0}
 		,1
 		,ch59_afterD
 		,ch59_beforeD
   	 );
		auto delaych60 = ForSyDe::SDF::make_delayn(
 		"delaych60"
 		,{0}
 		,2131436
 		,ch60_afterD
 		,ch60_beforeD
   	 );
		auto delaych61 = ForSyDe::SDF::make_delayn(
 		"delaych61"
 		,{0}
 		,2
 		,ch61_afterD_toSender
 		,ch61_beforeD
   	 );
		auto delaych64 = ForSyDe::SDF::make_delayn(
 		"delaych64"
 		,{0}
 		,198
 		,ch64_afterD_toSender
 		,ch64_beforeD
   	 );
		auto delaych65 = ForSyDe::SDF::make_delayn(
 		"delaych65"
 		,{0}
 		,281313
 		,ch65_afterD
 		,ch65_beforeD
   	 );
		auto delaych68 = ForSyDe::SDF::make_delayn(
 		"delaych68"
 		,{0}
 		,1
 		,ch68_afterD
 		,ch68_beforeD
   	 );
		auto delaych70 = ForSyDe::SDF::make_delayn(
 		"delaych70"
 		,{0}
 		,2
 		,ch70_afterD
 		,ch70_beforeD
   	 );
		auto delaych71 = ForSyDe::SDF::make_delayn(
 		"delaych71"
 		,{0}
 		,414717
 		,ch71_afterD
 		,ch71_beforeD
   	 );
		auto delaych75 = ForSyDe::SDF::make_delayn(
 		"delaych75"
 		,{0}
 		,3183
 		,ch75_afterD
 		,ch75_beforeD
   	 );
		auto delaych80 = ForSyDe::SDF::make_delayn(
 		"delaych80"
 		,{0}
 		,110825134
 		,ch80_afterD_toSender
 		,ch80_beforeD
   	 );
		auto delaych83 = ForSyDe::SDF::make_delayn(
 		"delaych83"
 		,{0}
 		,13166
 		,ch83_afterD
 		,ch83_beforeD
   	 );
		auto delaych85 = ForSyDe::SDF::make_delayn(
 		"delaych85"
 		,{0}
 		,2729538
 		,ch85_afterD
 		,ch85_beforeD
   	 );
		auto delaych87 = ForSyDe::SDF::make_delayn(
 		"delaych87"
 		,{0}
 		,299736
 		,ch87_afterD
 		,ch87_beforeD
   	 );
		auto delaych89 = ForSyDe::SDF::make_delayn(
 		"delaych89"
 		,{0}
 		,1158498
 		,ch89_afterD_toSender
 		,ch89_beforeD
   	 );
		auto delaych90 = ForSyDe::SDF::make_delayn(
 		"delaych90"
 		,{0}
 		,625142
 		,ch90_afterD
 		,ch90_beforeD
   	 );
		auto delaych91 = ForSyDe::SDF::make_delayn(
 		"delaych91"
 		,{0}
 		,2082092007
 		,ch91_afterD
 		,ch91_beforeD
   	 );
		auto delaych92 = ForSyDe::SDF::make_delayn(
 		"delaych92"
 		,{0}
 		,11724887
 		,ch92_afterD
 		,ch92_beforeD
   	 );
		auto delaych94 = ForSyDe::SDF::make_delayn(
 		"delaych94"
 		,{0}
 		,2718208
 		,ch94_afterD
 		,ch94_beforeD
   	 );
		auto delaych97 = ForSyDe::SDF::make_delayn(
 		"delaych97"
 		,{0}
 		,5
 		,ch97_afterD_toSender
 		,ch97_beforeD
   	 );
		auto delaych98 = ForSyDe::SDF::make_delayn(
 		"delaych98"
 		,{0}
 		,1943992
 		,ch98_afterD
 		,ch98_beforeD
   	 );
		auto delaych99 = ForSyDe::SDF::make_delayn(
 		"delaych99"
 		,{0}
 		,10
 		,ch99_afterD_toSender
 		,ch99_beforeD
   	 );
		auto delaych103 = ForSyDe::SDF::make_delayn(
 		"delaych103"
 		,{0}
 		,28799722
 		,ch103_afterD
 		,ch103_beforeD
   	 );
		auto delaych105 = ForSyDe::SDF::make_delayn(
 		"delaych105"
 		,{0}
 		,1091832
 		,ch105_afterD
 		,ch105_beforeD
   	 );
		auto delaych106 = ForSyDe::SDF::make_delayn(
 		"delaych106"
 		,{0}
 		,1643122
 		,ch106_afterD
 		,ch106_beforeD
   	 );
		auto delaych107 = ForSyDe::SDF::make_delayn(
 		"delaych107"
 		,{0}
 		,111014477
 		,ch107_afterD
 		,ch107_beforeD
   	 );
		auto delaych109 = ForSyDe::SDF::make_delayn(
 		"delaych109"
 		,{0}
 		,2
 		,ch109_afterD
 		,ch109_beforeD
   	 );
		auto delaych111 = ForSyDe::SDF::make_delayn(
 		"delaych111"
 		,{0}
 		,49845
 		,ch111_afterD
 		,ch111_beforeD
   	 );
		auto delaych113 = ForSyDe::SDF::make_delayn(
 		"delaych113"
 		,{0}
 		,8241581
 		,ch113_afterD_toSender
 		,ch113_beforeD
   	 );
		auto delaych114 = ForSyDe::SDF::make_delayn(
 		"delaych114"
 		,{0}
 		,2260230
 		,ch114_afterD
 		,ch114_beforeD
   	 );
		auto delaych116 = ForSyDe::SDF::make_delayn(
 		"delaych116"
 		,{0}
 		,2729538
 		,ch116_afterD
 		,ch116_beforeD
   	 );
		auto delaych118 = ForSyDe::SDF::make_delayn(
 		"delaych118"
 		,{0}
 		,232
 		,ch118_afterD
 		,ch118_beforeD
   	 );

		auto ch82_sender = ForSyDe::SY::make_sender(
 		"ch82_sender"
 		,-1
 		,83
 		,ch82_toSenderSY
   		 );
		auto ch82_sender_mis = ForSyDe::make_SDF2SY ("ch82_sender_mis", ch82_toSenderSY ,ch82_toSender); 
		auto ch0_afterD_sender = ForSyDe::SY::make_sender(
 		"ch0_afterD_sender"
 		,-1
 		,124
 		,ch0_afterD_toSenderSY
   		 );
		auto ch0_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch0_afterD_sender_mis", ch0_afterD_toSenderSY ,ch0_afterD_toSender); 
		auto ch4_afterD_sender = ForSyDe::SY::make_sender(
 		"ch4_afterD_sender"
 		,-1
 		,128
 		,ch4_afterD_toSenderSY
   		 );
		auto ch4_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch4_afterD_sender_mis", ch4_afterD_toSenderSY ,ch4_afterD_toSender); 
		auto ch10_afterD_sender = ForSyDe::SY::make_sender(
 		"ch10_afterD_sender"
 		,-1
 		,134
 		,ch10_afterD_toSenderSY
   		 );
		auto ch10_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch10_afterD_sender_mis", ch10_afterD_toSenderSY ,ch10_afterD_toSender); 
		auto ch31_afterD_sender = ForSyDe::SY::make_sender(
 		"ch31_afterD_sender"
 		,-1
 		,154
 		,ch31_afterD_toSenderSY
   		 );
		auto ch31_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch31_afterD_sender_mis", ch31_afterD_toSenderSY ,ch31_afterD_toSender); 
		auto ch51_afterD_sender = ForSyDe::SY::make_sender(
 		"ch51_afterD_sender"
 		,-1
 		,173
 		,ch51_afterD_toSenderSY
   		 );
		auto ch51_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch51_afterD_sender_mis", ch51_afterD_toSenderSY ,ch51_afterD_toSender); 
		auto ch61_afterD_sender = ForSyDe::SY::make_sender(
 		"ch61_afterD_sender"
 		,-1
 		,183
 		,ch61_afterD_toSenderSY
   		 );
		auto ch61_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch61_afterD_sender_mis", ch61_afterD_toSenderSY ,ch61_afterD_toSender); 
		auto ch64_afterD_sender = ForSyDe::SY::make_sender(
 		"ch64_afterD_sender"
 		,-1
 		,186
 		,ch64_afterD_toSenderSY
   		 );
		auto ch64_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch64_afterD_sender_mis", ch64_afterD_toSenderSY ,ch64_afterD_toSender); 
		auto ch80_afterD_sender = ForSyDe::SY::make_sender(
 		"ch80_afterD_sender"
 		,-1
 		,202
 		,ch80_afterD_toSenderSY
   		 );
		auto ch80_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch80_afterD_sender_mis", ch80_afterD_toSenderSY ,ch80_afterD_toSender); 
		auto ch89_afterD_sender = ForSyDe::SY::make_sender(
 		"ch89_afterD_sender"
 		,-1
 		,210
 		,ch89_afterD_toSenderSY
   		 );
		auto ch89_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch89_afterD_sender_mis", ch89_afterD_toSenderSY ,ch89_afterD_toSender); 
		auto ch97_afterD_sender = ForSyDe::SY::make_sender(
 		"ch97_afterD_sender"
 		,-1
 		,216
 		,ch97_afterD_toSenderSY
   		 );
		auto ch97_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch97_afterD_sender_mis", ch97_afterD_toSenderSY ,ch97_afterD_toSender); 
		auto ch99_afterD_sender = ForSyDe::SY::make_sender(
 		"ch99_afterD_sender"
 		,-1
 		,218
 		,ch99_afterD_toSenderSY
   		 );
		auto ch99_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch99_afterD_sender_mis", ch99_afterD_toSenderSY ,ch99_afterD_toSender); 
		auto ch113_afterD_sender = ForSyDe::SY::make_sender(
 		"ch113_afterD_sender"
 		,-1
 		,231
 		,ch113_afterD_toSenderSY
   		 );
		auto ch113_afterD_sender_mis = ForSyDe::make_SDF2SY ("ch113_afterD_sender_mis", ch113_afterD_toSenderSY ,ch113_afterD_toSender); 
		auto ch5_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch5_afterD_receiver"
 		,-1
 		,129
 		,ch5_afterD_fromReceiverSY
    	);
		auto ch5_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch5_afterD_receiver_mis", ch5_afterD_fromReceiver ,ch5_afterD_fromReceiverSY); 
		auto ch22_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch22_afterD_receiver"
 		,-1
 		,145
 		,ch22_afterD_fromReceiverSY
    	);
		auto ch22_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch22_afterD_receiver_mis", ch22_afterD_fromReceiver ,ch22_afterD_fromReceiverSY); 
		auto ch37_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch37_afterD_receiver"
 		,-1
 		,160
 		,ch37_afterD_fromReceiverSY
    	);
		auto ch37_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch37_afterD_receiver_mis", ch37_afterD_fromReceiver ,ch37_afterD_fromReceiverSY); 
		auto ch39_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch39_afterD_receiver"
 		,-1
 		,162
 		,ch39_afterD_fromReceiverSY
    	);
		auto ch39_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch39_afterD_receiver_mis", ch39_afterD_fromReceiver ,ch39_afterD_fromReceiverSY); 
		auto ch48_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch48_afterD_receiver"
 		,-1
 		,170
 		,ch48_afterD_fromReceiverSY
    	);
		auto ch48_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch48_afterD_receiver_mis", ch48_afterD_fromReceiver ,ch48_afterD_fromReceiverSY); 
		auto ch63_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch63_afterD_receiver"
 		,-1
 		,185
 		,ch63_afterD_fromReceiverSY
    	);
		auto ch63_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch63_afterD_receiver_mis", ch63_afterD_fromReceiver ,ch63_afterD_fromReceiverSY); 
		auto ch66_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch66_afterD_receiver"
 		,-1
 		,188
 		,ch66_afterD_fromReceiverSY
    	);
		auto ch66_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch66_afterD_receiver_mis", ch66_afterD_fromReceiver ,ch66_afterD_fromReceiverSY); 
		auto ch69_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch69_afterD_receiver"
 		,-1
 		,191
 		,ch69_afterD_fromReceiverSY
    	);
		auto ch69_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch69_afterD_receiver_mis", ch69_afterD_fromReceiver ,ch69_afterD_fromReceiverSY); 
		auto ch72_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch72_afterD_receiver"
 		,-1
 		,194
 		,ch72_afterD_fromReceiverSY
    	);
		auto ch72_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch72_afterD_receiver_mis", ch72_afterD_fromReceiver ,ch72_afterD_fromReceiverSY); 
		auto ch84_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch84_afterD_receiver"
 		,-1
 		,205
 		,ch84_afterD_fromReceiverSY
    	);
		auto ch84_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch84_afterD_receiver_mis", ch84_afterD_fromReceiver ,ch84_afterD_fromReceiverSY); 
		auto ch112_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch112_afterD_receiver"
 		,-1
 		,230
 		,ch112_afterD_fromReceiverSY
    	);
		auto ch112_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch112_afterD_receiver_mis", ch112_afterD_fromReceiver ,ch112_afterD_fromReceiverSY); 
		auto ch120_afterD_receiver = ForSyDe::SY::make_receiver(
 		"ch120_afterD_receiver"
 		,-1
 		,238
 		,ch120_afterD_fromReceiverSY
    	);
		auto ch120_afterD_receiver_mis = ForSyDe::make_SY2SDF ("ch120_afterD_receiver_mis", ch120_afterD_fromReceiver ,ch120_afterD_fromReceiverSY); 
		auto a0_1 = new a0 ("a0_1");
		a0_1 ->p0(ch16_afterD);
		a0_1 ->p1(ch1_afterD);
		a0_1 ->p2(ch0_beforeD);
		a0_1 ->p3(ch4_beforeD);
		a0_1 ->p4(ch75_beforeD);
		a0_1 ->p5(ch118_beforeD);

		auto a2_1 = new a2 ("a2_1");
		a2_1 ->p0(ch23_afterD);
		a2_1 ->p1(ch50_afterD);
		a2_1 ->p2(ch91_afterD);
		a2_1 ->p3(ch1_beforeD);
		a2_1 ->p4(ch6_beforeD);

		auto a6_1 = new a6 ("a6_1");
		a6_1 ->p0(ch5_afterD_fromReceiver);
		a6_1 ->p1(ch11_afterD);
		a6_1 ->p2(ch8_afterD);
		a6_1 ->p3(ch89_beforeD);
		a6_1 ->p4(ch98_beforeD);
		a6_1 ->p5(ch10_beforeD);

		auto a7_1 = new a7 ("a7_1");
		a7_1 ->p0(ch6_afterD);
		a7_1 ->p1(ch51_beforeD);
		a7_1 ->p2(ch94_beforeD);
		a7_1 ->p3(ch83_beforeD);

		auto a9_1 = new a9 ("a9_1");
		a9_1 ->p0(ch107_afterD);
		a9_1 ->p1(ch15_afterD);
		a9_1 ->p2(ch27_afterD);
		a9_1 ->p3(ch13_beforeD);
		a9_1 ->p4(ch71_beforeD);
		a9_1 ->p5(ch8_beforeD);

		auto a14_1 = new a14 ("a14_1");
		a14_1 ->p0(ch13_afterD);
		a14_1 ->p1(ch56_afterD);
		a14_1 ->p2(ch18_afterD);
		a14_1 ->p3(ch65_beforeD);
		a14_1 ->p4(ch68_beforeD);

		auto a16_1 = new a16 ("a16_1");
		a16_1 ->p0(ch83_afterD);
		a16_1 ->p1(ch72_afterD_fromReceiver);
		a16_1 ->p2(ch57_afterD);
		a16_1 ->p3(ch114_afterD);
		a16_1 ->p4(ch106_afterD);
		a16_1 ->p5(ch15_beforeD);
		a16_1 ->p6(ch64_beforeD);

		auto a19_1 = new a19 ("a19_1");
		a19_1 ->p0(ch49_afterD);
		a19_1 ->p1(ch91_beforeD);
		a19_1 ->p2(ch60_beforeD);
		a19_1 ->p3(ch18_beforeD);

		auto a23_1 = new a23 ("a23_1");
		a23_1 ->p0(ch66_afterD_fromReceiver);
		a23_1 ->p1(ch22_afterD_fromReceiver);
		a23_1 ->p2(ch87_beforeD);
		a23_1 ->p3(ch111_beforeD);
		a23_1 ->p4(ch114_beforeD);

		auto a24_1 = new a24 ("a24_1");
		a24_1 ->p0(ch85_afterD);
		a24_1 ->p1(ch116_afterD);
		a24_1 ->p2(ch56_beforeD);
		a24_1 ->p3(ch23_beforeD);

		auto a27_1 = new a27 ("a27_1");
		a27_1 ->p0(ch109_afterD);
		a27_1 ->p1(ch82_toSender);
		a27_1 ->p2(ch26_beforeD);

		auto a28_1 = new a28 ("a28_1");
		a28_1 ->p0(ch112_afterD_fromReceiver);
		a28_1 ->p1(ch87_afterD);
		a28_1 ->p2(ch98_afterD);
		a28_1 ->p3(ch28_afterD);
		a28_1 ->p4(ch70_beforeD);
		a28_1 ->p5(ch27_beforeD);
		a28_1 ->p6(ch97_beforeD);

		auto a29_1 = new a29 ("a29_1");
		a29_1 ->p0(ch120_afterD_fromReceiver);
		a29_1 ->p1(ch65_afterD);
		a29_1 ->p2(ch71_afterD);
		a29_1 ->p3(ch75_afterD);
		a29_1 ->p4(ch28_beforeD);
		a29_1 ->p5(ch30_beforeD);

		auto a31_1 = new a31 ("a31_1");
		a31_1 ->p0(ch70_afterD);
		a31_1 ->p1(ch90_afterD);
		a31_1 ->p2(ch30_afterD);
		a31_1 ->p3(ch80_beforeD);
		a31_1 ->p4(ch61_beforeD);

		auto a32_1 = new a32 ("a32_1");
		a32_1 ->p0(ch105_afterD);
		a32_1 ->p1(ch34_afterD);
		a32_1 ->p2(ch92_afterD);
		a32_1 ->p3(ch31_beforeD);
		a32_1 ->p4(ch58_beforeD);
		a32_1 ->p5(ch103_beforeD);
		a32_1 ->p6(ch41_beforeD);
		a32_1 ->p7(ch113_beforeD);

		auto a35_1 = new a35 ("a35_1");
		a35_1 ->p0(ch68_afterD);
		a35_1 ->p1(ch69_afterD_fromReceiver);
		a35_1 ->p2(ch103_afterD);
		a35_1 ->p3(ch90_beforeD);
		a35_1 ->p4(ch34_beforeD);

		auto a40_1 = new a40 ("a40_1");
		a40_1 ->p0(ch84_afterD_fromReceiver);
		a40_1 ->p1(ch93);
		a40_1 ->p2(ch39_afterD_fromReceiver);
		a40_1 ->p3(ch59_beforeD);
		a40_1 ->p4(ch106_beforeD);
		a40_1 ->p5(ch109_beforeD);
		a40_1 ->p6(ch50_beforeD);

		auto a42_1 = new a42 ("a42_1");
		a42_1 ->p0(ch63_afterD_fromReceiver);
		a42_1 ->p1(ch111_afterD);
		a42_1 ->p2(ch59_afterD);
		a42_1 ->p3(ch41_afterD);
		a42_1 ->p4(ch44_beforeD);
		a42_1 ->p5(ch92_beforeD);

		auto a45_1 = new a45 ("a45_1");
		a45_1 ->p0(ch58_afterD);
		a45_1 ->p1(ch44_afterD);
		a45_1 ->p2(ch99_beforeD);
		a45_1 ->p3(ch85_beforeD);
		a45_1 ->p4(ch116_beforeD);

		auto a47_1 = new a47 ("a47_1");
		a47_1 ->p0(ch48_afterD_fromReceiver);
		a47_1 ->p1(ch49_beforeD);
		a47_1 ->p2(ch105_beforeD);
		a47_1 ->p3(ch57_beforeD);
		a47_1 ->p4(ch107_beforeD);
		a47_1 ->p5(ch46_beforeD);

	}
};


