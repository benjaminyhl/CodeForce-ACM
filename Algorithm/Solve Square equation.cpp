/*solve ax^2+bx+c = 0 */
typedef struct{
    int n;        /* Number of solutions */
    double x[2];  /* Solutions */
} Result;

Result solve_quad(double a, double b, double c){
    Result r;
    double z = b*b-4*a*c;
    
    if(z < 0){
        r.n = 0;
    } else if(z == 0){
        r.n = 1;
        r.x[0] = -b/(2*a);
    } else {
        r.n = 2;
        r.x[0] = (-b+sqrt(z))/(2*a);
        r.x[1] = (-b-sqrt(z))/(2*a);
    }
    return r;
}
int main(){
    double a,b,c;
    Result r;
    int i;
    
    while(scanf("%lf %lf %lf", &a, &b, &c) == 3){
        r = solve_quad(a,b,c);
        printf("%d solution(s)\n", r.n);
        for(i = 0; i < r.n; i++){
            printf("x = %f\n", r.x[i]);
        }
    }
    return 0;
}