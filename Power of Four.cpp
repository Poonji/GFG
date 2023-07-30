   int isPowerOfFour(unsigned int n)  {
      while(n > 1) {
          if(n%4 != 0)
            return 0;
            n /= 4;
      }
      return 1;
    }
