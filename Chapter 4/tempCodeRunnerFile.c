
    int n, i = 1;
    printf("Enter the vale of n\n");
    scanf("%d", &n);
for(n;i<n;i++){
        if (n % 1 == n && n % n == 0)
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
}