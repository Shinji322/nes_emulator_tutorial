union bitfield {
  // 8 bit struct
  struct {
    char sw1 : 1;
    char sw2 : 1;
    char state : 2;
    char value : 3; // this syntax allocates a specific amount of bits
  };
  // this can be used to manipulate the values of the struct simulataneously
  char reg : 8; // 8 bit (default) char
};
