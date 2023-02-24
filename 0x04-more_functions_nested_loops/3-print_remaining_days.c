/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
    int days_in_feb = 28;
    int is_leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    if (is_leap_year)
    {
        days_in_feb = 29;
    }

    if (month < 1 || month > 12)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (month == 2 && day > days_in_feb)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int day_of_year = day;

	switch (month - 1)
	{
        case 11:
		day_of_year += 30;
	case 10:
		day_of_year += 31;
	case 9:
		day_of_year += 30;
	case 8:
		day_of_year += 31;
	case 7:
		day_of_year += 31;
	case 6:
		day_of_year += 30;
	case 5:
		day_of_year += 31;
	case 4:
		day_of_year += 30;
	case 3:
		day_of_year += 31;
	case 2:
        	day_of_year += days_in_feb;
	case 1:
        	day_of_year += 31;
	}
	printf("Day of the year: %d\n", day_of_year);
	if (is_leap_year)
	{
		printf("Remaining days: %d\n", 366 - day_of_year);
	}
	else
	{
		printf("Remaining days: %d\n", 365 - day_of_year);
	}
}

