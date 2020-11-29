int main()

 {
	int a;
	scanf("%d",&a);
	printf("%d %d", (a / 100) % 10000, (a / 100) % 10000 + 1024);
	return 0;
}