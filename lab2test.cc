#include <iostream>
#include "mpi.h"
using  namespace std;

int main(int argc, char ** argv) {
    int mynodes, totalnodes;
    MPI_Init(&argc,&argv);

    MPI_Comm_size(MPI_COMM_WORLD, &totalnodes);
    MPI_Comm_rank(MPI_COMM_WORLD, &mynodes);

    cout<<"Hello World from process "<< mynodes;
    cout<<"of "<< totalnodes << endl;

    MPI_Finalize();
    
}

