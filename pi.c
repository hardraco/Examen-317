int main(){
    int i,j = 0;
    float pi = 0;
    for(i = 1; i <=1000001; i+= 2){
        if(i == 1 || j == 4){
            pi = pi + (4/(float)i);
            j=2;
        }
        else{
            pi = pi - (4/(float)i);
            j = j+2;
        }
    }
    printf("El valor de pi es: %f\n", pi);
    system("pause");
    return 0;
}