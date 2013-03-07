# include <cstdio>
# include <cstdlib>
# include <cmath>


void print_mas(int n,int mas[])  // процедура, которая выводит массив
{
	for (int i=1; i<=n; i++)
		printf("%d ",mas[i]);

}
inline void Swap(int &a, int &b)
{
    int buf = a;
    a = b;
    b = buf;
}
void sort(int n,int mas[])  // сама сортировка
{
	for (int i = 1; i < n; i++)
		for (int j = 1; j < n; j++)
			if (mas[j]>mas[j+1])
			    Swap(mas[j],mas[j+1]);   
}


int main()
{
	int n;        
           int mas[1000];
	
	scanf("%d",&n);

	for (int i=1 ;i <= n; i++)
		scanf("%d",&mas[i]);
	
           sort(n, mas);

	print_mas(n,mas);

	return(0);
}
