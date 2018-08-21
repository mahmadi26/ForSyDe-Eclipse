#include "top__2.hpp"
#include <mpi.h>


int sc_main(int argc, char **argv)
{
    MPI_Init(&argc,&argv);
   
    top__2 top1("top__21");

    sc_start();
   
	MPI_Finalize();
    
	return 0;
}
