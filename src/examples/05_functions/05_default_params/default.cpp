#include "default.h"

int get_weekly_pay(double salary)
{
    return salary / weeks;
}

int get_weekly_pay(double hours, double rate)
{
    return hours * rate;
}

double get_total(double amount, double rate)
{
    return amount * rate;
}