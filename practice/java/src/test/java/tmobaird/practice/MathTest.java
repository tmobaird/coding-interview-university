package tmobaird.practice;

import org.junit.Test;
import static org.junit.Assert.*;

public class MathTest {
    @Test
    public void testSum() {
        assertEquals(2, Math.sum(1, 1));
    }

    @Test
    public void testSumAgain() {
        assertEquals(5, Math.sum(2, 3));
    }

    @Test
    public void testMax() {
        assertEquals(2, Math.max(1, 2));
    }

    @Test
    public void testMaxAgain() {
        assertEquals(5, Math.max(3, 5));
    }

    @Test
    public void testMin() {
        assertEquals(2, Math.min(2,3));
    }

    @Test
    public void testMinAgain() {
        assertEquals(5, Math.min(5, 8));
    }

    @Test
    public void testPow() {
        assertEquals(4, Math.pow(2,2));
    }

    @Test
    public void testPowAgain() {
        assertEquals(8, Math.pow(2, 3));
    }
}
