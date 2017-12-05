package tmobaird.practice.util;

import org.junit.Test;

import static org.junit.Assert.*;

public class ArrayListTest {
    private ArrayList subject;

    @Test
    public void testConstructorWithElementsCreatesArrayListWithValues() {
        subject = new ArrayList(new int[]{1, 2, 3});
        assertEquals(3, subject.size());
    }

    @Test
    public void testSizeEqualsZero() {
        subject = new ArrayList();
        assertEquals(0, subject.size());
    }

    @Test
    public void testAddIncreasesSize() {
        subject = new ArrayList();
        subject.add(1);
        assertEquals(1, subject.size());
    }

    @Test
    public void testAddIncreasesSizeToSix() {
        subject = new ArrayList(new int[]{1, 2, 3, 4, 5});
        subject.add(6);
        assertEquals(6, subject.size());
        assertTrue(subject.contains(6));
    }

    @Test
    public void testContainsReturnsTrue() {
        subject = new ArrayList();
        subject.add(1);
        assertTrue(subject.contains(1));
    }

    @Test
    public void testContainsReturnsFalse() {
        subject = new ArrayList();
        subject.add(1);
        assertFalse(subject.contains(2));
    }

    @Test
    public void getReturnsIndexOfElement() {
        subject = new ArrayList();
        subject.add(1);
        subject.add(2);
        assertEquals(1, subject.get(0));
        assertEquals(2, subject.get(1));
    }

    @Test
    public void isEmptyReturnsTrue() {
        subject = new ArrayList();
        assertTrue(subject.isEmpty());
    }

    @Test
    public void isEmptyReturnsFalse() {
        subject = new ArrayList();
        subject.add(1);
        assertFalse(subject.isEmpty());
    }

    @Test
    public void indexOfReturnsNegativeOne() {
        subject = new ArrayList();
        assertEquals(-1, subject.indexOf(1));
    }

    @Test
    public void indexOfReturnsZero() {
        subject = new ArrayList();
        subject.add(1);
        assertEquals(0, subject.indexOf(1));
    }

    @Test
    public void indexOfReturnsOne() {
        subject = new ArrayList();
        subject.add(1);
        subject.add(2);
        assertEquals(1, subject.indexOf(2));
    }

    @Test
    public void testRemoveDecreasesSize() {
        subject = new ArrayList(new int[]{1});
        subject.remove(1);
        assertEquals(0, subject.size());
    }

    @Test
    public void testRemoveActuallyRemovesElement() {
        subject = new ArrayList(new int[]{1});
        subject.remove(1);
        assertFalse(subject.contains(1));
    }

    @Test
    public void testClearDecreasesSizeToZero() {
        subject = new ArrayList(new int[]{1, 2, 3});
        subject.clear();
        assertEquals(0, subject.size());
    }

    @Test
    public void testClearRemovesElement() {
        subject = new ArrayList(new int[]{1, 2, 3});
        subject.clear();
        assertFalse(subject.contains(1));
        assertFalse(subject.contains(2));
        assertFalse(subject.contains(3));
    }
}
