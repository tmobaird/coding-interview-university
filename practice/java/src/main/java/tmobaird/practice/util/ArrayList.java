package tmobaird.practice.util;

import org.apache.commons.lang3.ArrayUtils;

import java.util.Arrays;

/*
 * The following features should also be implemented:
 * - clear
 */
public class ArrayList {

    private int length = 0;
    private int elements[];

    ArrayList() {
        this.elements = new int[10];
    }

    ArrayList(int[] elements) {
        this.length = elements.length;
        this.elements = elements;
    }

    public void add(int element) {
        if (length == elements.length) {
            grow();
        }

        elements[length] = element;
        length++;
    }

    public boolean contains(int element) {
        return indexOf(element) != -1;
    }

    public int get(int i) {
        return elements[i];
    }

    public int indexOf(int element) {
        for (int i = 0; i < length; i++) {
            if (elements[i] == element) {
                return i;
            }
        }
        return -1;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public void remove(int element) {
        int index = indexOf(element);
        if (index != -1) {
            elements = ArrayUtils.remove(elements, index);
            length -= 1;
        }
    }

    public int size() {
        return length;
    }

    private void grow() {
        elements = Arrays.copyOf(elements, length + 1);
    }
}
