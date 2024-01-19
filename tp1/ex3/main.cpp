#include "utils.hpp"

int main()
{
    print_hello();
    print_bye();
    return 0;
}

/*
En compilant sans utils.cpp :
    
    référence indéfinie vers « print_hello() »

La méthode print_hello() est définie dans utils.hpp, donc il faut 
compiler aussi utils.cpp.
*/

/*
En compilant avec utils.cpp et instructions dé-commentées :
    
    définitions multiples de « print_bye() »

Se produit car print_bye() a son corps défini dans utils.hpp et non
dans utils.cpp .
*/

/*
"inline" doit avoir pour effet d'indiquer au compilateur que le bloc
d'instruction du corps de la méthode se situe après cette déclaration
(dans le hpp) et non dans le cpp.
*/
