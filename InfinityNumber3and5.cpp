int foo(int sum)
{
        if (sum == 0)
                return 1;
        if (sum < 0)
                return 0;
        printf("%d\n", sum);
        if (foo(sum-5))
                return 1;
        if (foo(sum-3))
                return 1;
        return 0;
}
