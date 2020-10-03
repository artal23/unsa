#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <stdbool.h> 
#include <time.h>

#define MAX_LEN 10000


int main()
{
	const int SIZE = 4096;
	const char *name = "OS";
	const char *message= "Creando Poceso ";
	char buf[MAX_LEN];
	//const bool T = true;
	//const char *message1= "Operating Systems ";
	//const char *message2= "Is Fun!";


	
		int shm_fd;
		void *ptr;

		/* create the shared memory segment */
		shm_fd = shm_open(name, O_CREAT | O_RDWR, 0666);

		/* configure the size of the shared memory segment */
		ftruncate(shm_fd,SIZE);

		/* now map the shared memory segment in the address space of the process */
		ptr = mmap(0,SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
		if (ptr == MAP_FAILED) {
			printf("Map failed\n");
			return -1;
		}


		while(true){
		/**
		 * Now write to the shared memory region.
	 	 *
		 * Note we must increment the value of ptr after each write.
		 */
		
	    time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);
        
		sprintf(ptr,"%s",message);
		ptr += strlen(message);
		printf("Enviando mensage [%s] y durmiendo\n", message);
		sleep(4);
	}
/*
	sprintf(ptr,"%s",message1);
	ptr += strlen(message1);
	printf("Enviando mensage [%s] y durmiendo\n", message1);
	sleep(5);

	sprintf(ptr,"%s",message2);
	printf("Enviando mensage [%s] y durmiendo\n", message2);
	ptr += strlen(message2);
	sleep(5);
*/
	return 0;
}