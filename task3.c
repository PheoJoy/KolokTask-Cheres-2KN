#include stdio.h
#include math.h

int () {
    int n;
    scanf("%i, &n")
    
    switch(n) {
        case 1:
            printf("Погано\n")
            break;
        
        case 2:
            printf("Незадовільно\n")
            break;
        
        case 3:
            printf("Задовільно\n")
            break;
        
        case 4:
            printf("Добре\n")
            break;
            
        case 5:
            printf("Відмінно\n")
            break;
        
        default:
            printf("Помилка\n")
            break;
    }
    
    return 0;
}