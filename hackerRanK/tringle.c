#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
float area(int a1, int a2, int a3){
    float p=(a1+a2+a3)/2.0;
    float are=p*(p-a1)*(p-a2)*(p-a3);
    float aretri=pow(are, 0.5);
    return aretri;
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    triangle temp;
    float a[n];
    for(int i=0; i<n; i++){
        a[i]=area((tr + i) -> a, (tr + i) -> b, (tr  + i) -> c);
        
    }
    for(int i = 0; i < n; i++)
    {
        printf("%f\n", a[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = tr[j + 1];
                tr[j + 1] = tr[j];
                tr[j] = temp;
            }
        }
    }
    
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}