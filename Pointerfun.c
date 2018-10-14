/*----------------------------------------------------------
 *				              Pointerfun
 * ---------------------------------------------------------
 * Name:                                     Plakolb Marcel
 * Class:                                    2AHIF
 * Language:                                 C
 * ----------------------------------------------------------
 * Description:
 * <there are two functions, one changes the values the other one
 *  prints the values. It tests which values are changed or not>
 * ----------------------------------------------------------
 */
 #include <stdio.h>

void print_integers(int int_value, int* int_pointer);
void change_integers(int int_value, int* int_pointer);

int main(int argc, char const *argv[]) {
  int int_value = 69;
  int* int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);

  return 0;
}

void print_integers(int int_value, int* int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer );
}

void change_integers(int int_value, int* int_pointer)
{
  int_value=96;
  *int_pointer=31;
}
