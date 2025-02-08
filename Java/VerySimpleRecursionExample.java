public class VerySimpleRecursionExample {

    public static void main(String[] args) {
      callMyself(9);
    }
    /* The recursive Java method */
    public static void callMyself(long i) {
      if (i < 0) {
        return;
      }
      System.out.print(i);
      i = i - 1;
      callMyself(i);
    }
  }