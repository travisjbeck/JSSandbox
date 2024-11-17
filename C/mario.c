#include <stdio.h>
#include <cs50.h>

// $ ./mario
// Height: 8
//        #  #
//       ##  ##
//      ###  ###
//     ####  ####
//    #####  #####
//   ######  ######
//  #######  #######
// ########  ########
void printntimes(int n, char *c);

int main(void)
{
  int n;
  // only allow answers between 1 and 8
  while (n < 1 || n > 8)
  {
    n = get_int("how many bricks: ");
  }

  // we're making rows of reflected bricks
  // each row contains space(n-(i+1)) bricks(i(+1)) staticSpace bricks(i(+1))
  for (int i = 0; i < n; i++)
  {

    // print first spaces
    printntimes(n - (i + 1), " ");

    // print blocks
    printntimes(i + 1, "#");

    // print static blocks
    printf("  ");

    // print block
    printntimes(i + 1, "#");

    // return line
    printf("\n");
  }
}

void printntimes(int n, char *c)
{
  for (int i = 0; i < n; i++)
  {
    printf("%s", c);
  }
}
