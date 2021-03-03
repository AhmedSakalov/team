int main(int count, char **args) 
{
    int a;
    int b;
    char operator;

    if(count == 4)
    {
        a = ft_atoi(args [1]);
        b = ft_atoi(args [3]);
        operator = operator_exist(args [2]);
        if(validation(b, operator))
        {
            
        }
    }
}