package tmobaird.practice;

public class Math {
    public static int sum(int numOne, int numTwo) {
        return numOne + numTwo;
    }

    public static int max(int numOne, int numTwo) {
        if (numOne > numTwo) {
            return numOne;
        }
        return numTwo;
    }

    public static int min(int numOne, int numTwo) {
        if (numOne < numTwo) {
            return numOne;
        }
        return numTwo;
    }

    public static int pow(int num, int powerOf) {
        int total = num;
        for (int i = 0; i < powerOf - 1; i++) {
            total = total * num;
        }
        return total;
    }
}
