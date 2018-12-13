#include "top.hpp"
#include <mpi.h>


int sc_main(int argc, char **argv)
{
    MPI_Init(&argc,&argv);
   
    top top1("top1");

    sc_start();
   
	MPI_Finalize();
    
	return 0;
}
