//Used JAVA 8 to solve the code

import java.time.LocalDate;
class Result {

    public static String findDay(int month, int day, int year) 
    {
        LocalDate dt = LocalDate.of(year, month, day);
        return ""+dt.getDayOfWeek();
    }
}
