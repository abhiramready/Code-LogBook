 #include<stdio.h>
 void fun(int A[])
 {
 	A[0]=25;
 }
 int main()
 {
 	int A[5]={2,4,5,8,9};
 	printf("%d",A[0]);
 	fun(A);
 	printf("\n%d",A[0]);
 }
