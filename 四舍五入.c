int main() {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("%g %d",a+b+c, ((int)((a+b+c)*10)%10>=5) ? (int)(a+b+c)/1+1 : (int)(a+b+c)/1);
	return 0;
}
