int non_static_var()
{
    int num = 5;
    num++;
    return num;
}

int static_var()
{
    static int num = 5;
    num++;
    return num;    
}

int static_var_2()
{
    static int num = 5;
    num++;
    return num;
}