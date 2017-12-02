package tmobaird.practice;

import org.junit.Test;
import static org.junit.Assert.*;

public class HelloTest {
    @Test
    public void testSomething() {
        assertEquals(2,2);
    }

    @Test
    public void testHello() {
        Hello subject = new Hello();
        assertEquals("Hello", subject.hello());
    }
}
