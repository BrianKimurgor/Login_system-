/**
 * modify_my_param - this function does not modify n
 * @m: useless integer
 *
 *return: nothing
*/
void modify_my_param(int m)
{
    m = 402;
}

/**
 * main - parameters are passed by value
 *
 * return: 0;
*/
int main(void)
{
    int n;
    n = 98;
    modify_my_param(n);;
    return(0);
}