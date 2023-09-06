//cpp
#include "char.h"

/*
Function get_char_ascii_value with a char parameter

@param char-a character
@return the ASCII value of the character
*/
int get_char_ascii_value(char ch)
{
    return ch;
}

bool get_and_result(bool bool1, bool bool2)
{
    bool result = bool1 && bool2;

    return result;
}

bool get_or_result(bool bool1, bool bool2)
{
    bool result = bool1 || bool2;
    return result;
}

bool get_bool_negation(bool bool1)
{
    return !bool1;
}

bool get_order_of_precedence_result(bool bool1, bool bool2, bool bool3)
{
    bool result = !bool1 && bool2 || bool3;
    return result;
}

bool is_letter_a_consonant(char letter)
{
    bool result = letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';
    return !result;
}

bool is_number_not_in_range(int num1, int low_range, int max_range)
{
    bool result = num1 < low_range || num1 > max_range;

    return result;
}