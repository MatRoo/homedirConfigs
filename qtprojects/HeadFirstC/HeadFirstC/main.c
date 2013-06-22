#include <stdio.h>

/**
 * @brief go_south_east
 * @param lat
 * @param lon
 * Requires the adress of lat / long.
 */
void go_south_east(int* lat, int* lon)
{
    /**
      * pointing to the adress value given in the parameter.
      */
    *lat = *lat - 1;
    *lon = *lon + 1;
}


int main(void)
{
    int latitude = 32;
    int longitude = -64;
    /**
     * @brief go_south_east
     * give  the address of the variables lat & longtitude.
     */
    go_south_east(&latitude, &longitude);

    char *msg = "test";
    puts(msg + 2);
    printf("now at [%i, %i]!\n", latitude, longitude);
    return 0;
}
