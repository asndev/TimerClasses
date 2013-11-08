/**
 * 
 */
package it.antonstepan.java.timerhelper;

/**
 * @author hknd
 * 
 */
public class TimerHelperImpl {

  private long start;
  private long end;
  private final double micro = 0.000001;

  public TimerHelperImpl() {}

  public void start() {
    setStart(System.nanoTime());
  }

  public void stop() {
    setEnd(System.nanoTime());
  }

  public String getMilliseconds() {
    final double diff = (getEnd() - getStart()) * micro;
    return diff + " ms";
  }

  public String get() {
    String timeUnit = "ms";
    double diff = (getEnd() - getStart()) * micro;
    if (diff > 1000) {
      diff /= 1000;
      timeUnit = "s";
      if (diff > 60) {
        diff /= 60;
        timeUnit = "min";
      }
    }
    return diff + " " + timeUnit;
  }

  public long getStart() {
    return start;
  }

  public void setStart(final long start) {
    this.start = start;
  }

  public long getEnd() {
    return end;
  }

  public void setEnd(final long end) {
    this.end = end;
  }
}
