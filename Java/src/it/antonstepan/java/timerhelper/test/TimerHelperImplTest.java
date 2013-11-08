package it.antonstepan.java.timerhelper.test;

import static org.junit.Assert.assertEquals;
import it.antonstepan.java.timerhelper.TimerHelperImpl;

import org.junit.Test;

public class TimerHelperImplTest {

  @Test
  public void testGetMilliseconds() {
    final TimerHelperImpl timer = new TimerHelperImpl();
    timer.setStart(1383946599013293000L);
    timer.setEnd(1383946599013301000L);
    assertEquals(timer.getMilliseconds(), "0.008 ms");
  }

  @Test
  public void testGet() {
    final TimerHelperImpl timer = new TimerHelperImpl();
    timer.setStart(1383946599013293000L);
    timer.setEnd(1383946599013301000L);
    assertEquals(timer.getMilliseconds(), "0.008 ms");
  }

}
