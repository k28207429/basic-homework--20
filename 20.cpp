#include <stdio.h>  

#include <stdlib.h> 

struct phone 

{

   char brand[10],size[10];

   int year,price;

}; 

int main(void)

{

    int j;
	printf("手機結構體\n");
    struct phone p[5]={  

	"APPLE", "5s", 2013, 18900, 

    "Samsung", "S10", 2019, 30000, 

    "Huawei", "P30 Pro", 2019, 32000, 

    "SONY", "Xperia 1", 2019, 30900, 

    "ASUS", "Zenfone 6", 2019, 19990,

	};

    

    for (j=0; j<5; j++) 

    {

        printf("%s %s %4d %5d\n", p[j].brand, p[j].size, p[j].year, p[j].price);

    }

    system("pause"); 

    return 0;

}

