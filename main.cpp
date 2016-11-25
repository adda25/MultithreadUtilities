#include "semaphore.hpp"

using namespace assm;

int 
main(int argc, char const *argv[])
{
	auto sem1 = Semaphore(3);
	sem1.wait(); 
	sem1.wait(); 
	sem1.wait(); 

	sem1.signal(); 
	sem1.signal(); 
	sem1.signal(); 
	sem1.signal(); 
	return 0;
}