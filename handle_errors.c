static int  ft_is_number(char *argv)
{
    int i;

    if (argv[0] == '\0')
        return (0);
    i = 0;
    if ((argv[0] == '-' || argv[0] == '+') && argv[1])
        i = 1;
    while (argv[i] && (argv[i] >= '0' && argv[i] <= '9'))
        i++;
    if (argv[i] && (argv[i] < '0' && argv[i] > '9'))
        return (0);
    return (1); 
}

static int  ft_all_are_nums(char **argv)
{
    int i;

    i = 1;
    while (argv[i])
    {
        if (!ft_is_number(argv[i]))
        {
            printf("ERROR");    
            return (0);
        }
        i++;
    }
    printf ("NUMS");
    return (1);
}

int check_arg(int argc, char **argv)
{
    if (!ft_is_number(**argv))
        ft_error();
    if (!is_duplicated(/*parametres a pasar*/))
       ft_error();
    if (!is_ordered(/*parametres a pasar*/) && argc > 5)
        return (0);
    return (1); 
}