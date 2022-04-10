#include <fcntl.h>
#include "get_next_line.h"

char	*get_next_line(int fd); 


// ------------------MAİN------------(tek dosyadan veri çeker çektiği veriyi ekrana yazdırır)

int main(void)
{
	char *yer;
	int fd = open("maintestfile" ,O_RDWR);
	yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd);
	printf("%s" ,yer);
	yer = get_next_line(fd);
	printf("%s" ,yer);
	return 0;
}
