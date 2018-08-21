#include "top__1.hpp"
#include <mpi.h>


int sc_main(int argc, char **argv)
{
    MPI_Init(&argc,&argv);
   
    top__1 top1("top__11");

    sc_start();
   
	MPI_Finalize();
    
	return 0;
}
