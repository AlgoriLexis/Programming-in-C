#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// EFECTIVO // EFECTIVO // EFECTIVO // EFECTIVO // EFECTIVO // EFECTIVO //

void efectivo(int *numprod) {
    int contpedi = 1;
    float total = 0.0, precio;

    while (contpedi <= *numprod) {
        printf("\nPrecio del producto %d -> $", contpedi);
        scanf("%f", &precio);
        fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado inválido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    
    *numprod = contpedi - 1;
    *numprod = total;
}
// FIN // EFECTIVO // FIN // EFECTIVO // FIN // EFECTIVO //
// VUELTO EN EFECTIVO ///////////////////////////
void vueltoe(int numprod) {
    int contpedi = 1;
    float total = 0.0, precio, cantplata;

    while (contpedi <= numprod) {
    	system("cls");
        printf("\nPrecio del producto %d -> $", contpedi);
        scanf("%f", &precio);

        if (precio <= 0) {
            printf("Precio ingresado inválido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    system("cls");
    printf("\nEl Cliente pago con -> $");
    scanf("%f", &cantplata);

    float vuelto = cantplata - total;
    system("cls");
    printf("\n  ___________________________________________________________");
    printf("\n |El Total a Pagar es -> $ %.2f", total);
    printf("\n |___________________________________________________________|");
    
    if (cantplata < total) {
        printf("\n |Dinero insuficiente.                                   |");
    } else {
        printf("\n |El vuelto de %.2f es: $%.2f", cantplata, vuelto);
    }
    
    printf("\n |___________________________________________________________|\n");
}

// VISA 1 CUOTA // VISA 1 CUOTA // VISA 1 CUOTA // VISA 1 CUOTA //
void visa1C(int *numprod){
	int contpedi = 1;
    float total = 0.0, precio;
	while (contpedi <= *numprod) {
    	printf("\n Precio del producto %d -> $", contpedi);
    	float precio;
    	scanf("%f", &precio);
    	fflush(stdin);
    	system("cls");

    	if (precio <= 0) {
        	printf("Precio ingresado invalido.\n");
        	continue;
    }

    	total += precio;
    	contpedi++;
	}
	*numprod = contpedi - 1;
	*numprod = total;
}
// VISA 1 CUOTA // FIN // VISA 1 CUOTA // FIN //

// VISA 3 CUOTA // VISA 3 CUOTA // VISA 3 CUOTA // VISA 3 CUOTA //
void visa3C(int *numprod){
	int contpedi = 1;
	float total = 0.0, precio;
	
	while(contpedi <= *numprod){
		printf("\n Precio del producto %d -> $", contpedi);
    	float precio;
    	scanf("%f", &precio);
    	fflush(stdin);
    	system("cls");

    	if (precio <= 0) {
        	printf("Precio ingresado invalido.\n");
        	continue;
    }

    	total += precio;
    	contpedi++;
	}
	*numprod = contpedi -1;
	*numprod = total;
	
} 
// VISA 3 CUOTA // FIN // VISA 3 CUOTA // FIN /

void visa6C(int *numprod){
	int contpedi = 1;
	float total = 0.0,precio;
	
	while (contpedi <= *numprod) {
        printf("\n Precio del producto %d -> $", contpedi);
        float precio;
        scanf("%f", &precio);
    	fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado invalido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    *numprod = contpedi -1;
    *numprod = total;
}
////////////////////////////////////////////////////////

void visa12C(int *numprod){
	int contpedi = 1;
	float total = 0.0,precio;
	
	while (contpedi <= *numprod) {
        printf("\n Precio del producto %d -> $", contpedi);
        float precio;
        scanf("%f", &precio);
    	fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado invalido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    *numprod = contpedi -1;
    *numprod = total;
}
////////////// FIN VISA //////////////////////// INICIO DE FUNCIONES PARA MASTERCARD ///////////////////////////////
void master1C(int *numprod){
	int contpedi = 1;
    float total = 0.0, precio;
	while (contpedi <= *numprod) {
    	printf("\n Precio del producto %d -> $", contpedi);
    	float precio;
    	scanf("%f", &precio);
    	fflush(stdin);
    	system("cls");

    	if (precio <= 0) {
        	printf("Precio ingresado invalido.\n");
        	continue;
    }

    	total += precio;
    	contpedi++;
	}
	*numprod = contpedi - 1;
	*numprod = total;
}
/////////////////////////////////////////////////////////////////////////

void master3C(int *numprod){
	int contpedi = 1;
	float total = 0.0, precio;
	
	while(contpedi <= *numprod){
		printf("\n Precio del producto %d -> $", contpedi);
    	float precio;
    	scanf("%f", &precio);
    	fflush(stdin);
    	system("cls");

    	if (precio <= 0) {
        	printf("Precio ingresado invalido.\n");
        	continue;
    }

    	total += precio;
    	contpedi++;
	}
	*numprod = contpedi -1;
	*numprod = total;
	
}

///////////////////////////////////////////////////////////////////

void master6C(int *numprod){
	int contpedi = 1;
	float total = 0.0,precio;
	
	while (contpedi <= *numprod) {
        printf("\n Precio del producto %d -> $", contpedi);
        float precio;
        scanf("%f", &precio);
    	fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado invalido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    *numprod = contpedi -1;
    *numprod = total;
}
////////////////////////////////////////////////////////////////////////////////////
void master12C(int *numprod){
	int contpedi = 1;
	float total = 0.0,precio;
	
	while (contpedi <= *numprod) {
        printf("\n Precio del producto %d -> $", contpedi);
        float precio;
        scanf("%f", &precio);
    	fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado invalido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    *numprod = contpedi -1;
    *numprod = total;
}
////////////// FIN Mastercard //////////////////////// INICIO DE FUNCIONES PARA american express ///////////////////////////////

void america1C(int *numprod){
	int contpedi = 1;
    float total = 0.0, precio;
	while (contpedi <= *numprod) {
    	printf("\n Precio del producto %d -> $", contpedi);
    	float precio;
    	scanf("%f", &precio);
    	fflush(stdin);
    	system("cls");

    	if (precio <= 0) {
        	printf("Precio ingresado invalido.\n");
        	continue;
    }

    	total += precio;
    	contpedi++;
	}
	*numprod = contpedi - 1;
	*numprod = total;
}
/////////////////////////////////////////////////////////////////////////

void america3C(int *numprod){
	int contpedi = 1;
	float total = 0.0, precio;
	
	while(contpedi <= *numprod){
		printf("\n Precio del producto %d -> $", contpedi);
    	float precio;
    	scanf("%f", &precio);
    	fflush(stdin);
    	system("cls");

    	if (precio <= 0) {
        	printf("Precio ingresado invalido.\n");
        	continue;
    }

    	total += precio;
    	contpedi++;
	}
	*numprod = contpedi -1;
	*numprod = total;
	
}

///////////////////////////////////////////////////////////////////

void america6C(int *numprod){
	int contpedi = 1;
	float total = 0.0,precio;
	
	while (contpedi <= *numprod) {
        printf("\n Precio del producto %d -> $", contpedi);
        float precio;
        scanf("%f", &precio);
    	fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado invalido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    *numprod = contpedi -1;
    *numprod = total;
}
////////////////////////////////////////////////////////////////////////////////////
void america12C(int *numprod){
	int contpedi = 1;
	float total = 0.0,precio;
	
	while (contpedi <= *numprod) {
        printf("\n Precio del producto %d -> $", contpedi);
        float precio;
        scanf("%f", &precio);
    	fflush(stdin);
        system("cls");

        if (precio <= 0) {
            printf("Precio ingresado invalido.\n");
            continue;
        }

        total += precio;
        contpedi++;
    }
    *numprod = contpedi -1;
    *numprod = total;
}


////////////// FIN American Express ///////////////////////////////////////////////////////

int main() {
    int contpedi = 1, opc, numprod, opcdc, opcdebito, opccredito, opcmercado, opcuotasMA, opcmp,opcuotasM,opcuotasV,E,cantplata;
    float total = 0.0, comision = 0.0, Tcmision = 0.0, cuotasS = 0.0,vuelto;
    char metodoU[100];

    do {
    	printf("\n  ____________________________________________");
    	printf("\n |        @Comision 1- TP-Obligatorio 2       |");
    	printf("\n |____________________________________________|");
    	printf("\n |     @Programa creado por Alexis Neira      |");
        printf("\n |____________________________________________|");
        printf("\n |        - Metodos de pago Local 96 -        |");
        printf("\n |Ingrese que tipo de pago desea el cliente.  |");
        printf("\n |1- Pagar en Efectivo                        |");
        printf("\n |2- Pagar con Tarjeta (Credito)              |");
        printf("\n |3- Vuelto en efectivo                       |");
        printf("\n |0- Salir                                    |");
        printf("\n |____________________________________________|");
        printf("\n |Opcion > ");
        scanf("%i", &opc);
        fflush(stdin);
        system("cls");

        switch (opc) {
            case 1:
                strcpy(metodoU, "Efectivo");
                printf("\n  __________________________________________________________");
			    printf("\n |                     - Opcion Efectivo -                  |");
			    printf("\n |__________________________________________________________|");
			    printf("\n |Productos del Cliente -> ");
				scanf("%i", &numprod);
			    fflush(stdin);
			    system("cls");
				efectivo(&numprod);
				total = numprod;
                printf("\n  ___________________________________________________________");
                printf("\n |El Total a Pagar es -> $ %2.f", total);
                printf("\n |___________________________________________________________|");
                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
                printf("\n |___________________________________________________________|");

                total = 0;
                contpedi = 1;
                break;

            case 2:
			    system("cls");
	            printf("\n  ____________________________________________________");
	            printf("\n |                     - Credito -                    |");
	            printf("\n |            - Agregar tarjeta para pagar -          |");
	            printf("\n |____________________________________________________|");
	            printf("\n |    1- Tarjeta Visa.                                |");
	            printf("\n |    2- Tarjeta Mastercard.                          |");
	            printf("\n |    3- Tarjeta American Express.                    |");
	            printf("\n |____________________________________________________|");
	            printf("\n |Opcion > ");
	            scanf("%i", &opccredito);
	            fflush(stdin);
	            system("cls");
	
	            switch (opccredito) {
	                case 1:
	                	system("cls");
	                    printf("\n  ________________________________________________");
	                    printf("\n |               - Opcion Visa -                  |");
	                    printf("\n |        En cuantas cuotas desea pagar?          |");
	                    printf("\n |________________________________________________|");
	                    printf("\n | 1 - En 1 Cuota sin interes.                    |");
	                    printf("\n | 2 - En 3 Cuotas sin interes.                   |");
	                    printf("\n | 3 - En 6 Cuotas con 10 por ciento de interes.  |");
	                    printf("\n | 4 - En 12 Cuotas con 15 por ciento de interes. |");
	                    printf("\n |________________________________________________|");
	                    printf("\n |Opcion -> ");
	                    scanf("%i", &opcuotasV);
	                    fflush(stdin);
	                    
	                    switch (opcuotasV) {
	                    	case 1:
	                     		system("cls");
	                        	strcpy(metodoU, "Visa en 1 Cuota sin interes");
	                        	printf("\n  __________________________________________________________");
	                        	printf("\n |                  - Opcion Visa 1 Cuota -                 |");
	                        	printf("\n |__________________________________________________________|");
	                        	printf("\n |Productos del Cliente -> ");
	                        	scanf("%i", &numprod);
	                        	fflush(stdin);
	                        	system("cls");
	
								visa1C(&numprod);
								total = numprod;
	                        	printf("\n  __________________________________________________________________");
	                        	printf("\n |El Total a Pagar es -> $ %.2f", total);
	                        	printf("\n |__________________________________________________________________|");
	                        	printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                        	printf("\n |__________________________________________________________________|");
	
	                        	total = 0;
	                        	contpedi = 1;
	
	                        	break;
	                    	case 2:
	                        	system("cls");
	                        	strcpy(metodoU, "Visa en 3 Cuotas sin interes");
	                        	printf("\n  __________________________________________________________");
	                        	printf("\n |                  - Opcion Visa 3 Cuotas -                |");
	                        	printf("\n |__________________________________________________________|");
	                        	printf("\n |Productos del Cliente -> ");
	                        	scanf("%i", &numprod);
	                        	fflush(stdin);
	                        	system("cls");
	
	                            visa3C(&numprod);
								total = numprod;
								cuotasS = total / 3;	
	                        	printf("\n  __________________________________________________________");
	                        	printf("\n |El Total a Pagar es -> $ %.2f", total);
	                        	printf("\n |__________________________________________________________________|");
	                        	printf("\n |El monto de cada cuota es de: $ %.2f", cuotasS);
				                printf("\n |__________________________________________________________________|");
				                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
				                printf("\n |__________________________________________________________________|");
	
				                total = 0;
				                contpedi = 1;
	
								break;
				            case 3:
				                system("cls");
				                strcpy(metodoU, "Visa - 6 Cuotas Con 10% de comision");
				                printf("\n  __________________________________________________________");
				                printf("\n |                 - Opcion Visa 6 Cuotas -                 |");
				                printf("\n |__________________________________________________________|");
				                printf("\n |Productos del Cliente -> ");
				                scanf("%i", &numprod);
				                fflush(stdin);
				                system("cls");
								
								visa6C(&numprod);
								total = numprod;
				                cuotasS = (total * 1.10) / 6;
				            	total = total * 1.10;
		                        printf("\n  __________________________________________________________");
		                        printf("\n |El Total a Pagar es -> $ %.2f", total);
		                        printf("\n |__________________________________________________________________|");
		                        printf("\n |El monto de cada cuota es de: $ %.2f", cuotasS);
		                        printf("\n |__________________________________________________________________|");
		                        printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
		                        printf("\n |__________________________________________________________________|");
		
		                        total = 0;
		                        contpedi = 1;

		                		break;
		                    case 4:
		                        system("cls");
		                        strcpy(metodoU, "Visa - 12 Cuotas Con 15% de comision");
		                        printf("\n  __________________________________________________________");
		                        printf("\n |                 - Opcion Visa 12 Cuotas -                |");
		                        printf("\n |__________________________________________________________|");
		                        printf("\n |Productos del Cliente -> ");
		                        scanf("%i", &numprod);
		                        fflush(stdin);
		                        system("cls");
		
								visa12C(&numprod);
								total = numprod;		
		                        total = total * 1.15;
		                        cuotasS = total / 12;
		                        printf("\n  __________________________________________________________");
		                        printf("\n |El Total a Pagar es -> $ %.2f", total);
		                        printf("\n |__________________________________________________________________|");
		                        printf("\n |El monto de cada cuota es de: $ %.2f", cuotasS);
		                        printf("\n |__________________________________________________________________|");
		                        printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
		                        printf("\n |__________________________________________________________________|");
		
		                        total = 0;
		                        contpedi = 1;
		                        break;
		
		                    default:
		                        printf("\n Opcion invalida. Intente nuevamente.\n");
		                        break;
		                }
	
	///////////////////////////////////////////// SWITCH OPCUOTAS 12 cuotas fin/////////////////////////////////////////////////////////////////////////
	                    break;
	                case 2:
	                	system("cls");
	                    printf("\n  ________________________________________________");
	                    printf("\n |             - Opcion Mastercard -              |");
	                    printf("\n |        En cuantas cuotas desea pagar?          |");
	                    printf("\n |________________________________________________|");
	                    printf("\n | 1 - En 1 Cuota sin interes.                    |");
	                    printf("\n | 2 - En 3 Cuotas sin interes.                   |");
	                    printf("\n | 3 - En 6 Cuotas con 10 por ciento de interes.  |");
	                    printf("\n | 4 - En 12 Cuotas con 15 por ciento de interes. |");
	                    printf("\n |________________________________________________|");
	                    printf("\n |Opcion -> ");
	                    scanf("%i", &opcuotasMA);
	                    fflush(stdin);
	                    switch (opcuotasMA) {
	                            case 1:
	                                system("cls");
	                                strcpy(metodoU, "Mastercard en 1 Cuota sin interes");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |               - Opcion Mastercard 1 Cuota -              |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	                                master1C(&numprod);
	                                total = numprod;
	                                printf("\n  __________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |__________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |__________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;
	///////////////////////////////////////////// SWITCH OPCUOTAS 3 cuotas //////////////////////////////////////////////////////////////////////////
	
	                            case 2:
	                                system("cls");
	                                strcpy(metodoU, "Mastercard en 3 Cuotas sin interes");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |            - Opcion Mastercard 3 Cuotas -                |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	
	                                
									master3C(&numprod);
									total = numprod;
	                                cuotasS = total / 3;
	
	                                printf("\n  ______________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |3 Cuotas de -> $ %.2f", cuotasS);
	                                printf("\n |______________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |______________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;
	///////////////////////////////////////////// SWITCH fin 3 cuotas //////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////// SWITCH OPCUOTAS 6 cuotas//////////////////////////////////////////////////////////////////////////
								case 3:
	                                system("cls");
	                                strcpy(metodoU, "Mastercard - 6 Cuotas Con 10% de comision.");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |              - Opcion Mastercard 6 Cuotas -              |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	
	                                master6C(&numprod);
									total = numprod;
	                                total += total * 0.10; //comision del 10% en 6 cuotas
	                                cuotasS = total / 6;
	
	                                printf("\n  __________________________________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |6 Cuotas de -> $ %.2f", cuotasS);
	                                printf("\n |__________________________________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |__________________________________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;	
	///////////////////////////////////////////// SWITCH 6 cuotas fin//////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////// SWITCH OPCUOTAS 12 cuotas//////////////////////////////////////////////////////////////////////////
								case 4:
	                                system("cls");
	                                strcpy(metodoU, "Mastercard - 12 Cuotas Con 15% de Comision.");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |             - Opcion Mastercard 12 Cuotas -              |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	
	                                master12C(&numprod);
	                                total = numprod;
									total += total * 0.15; //comision del 15% en 12 cuotas
	                                cuotasS = total / 12;
	                                printf("\n  __________________________________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |12 Cuotas de -> $ %.2f", cuotasS);
	                                printf("\n |__________________________________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |__________________________________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;
	///////////////////////////////////////////// SWITCH OPCUOTAS 12 cuotas fim/////////////////////////////////////////////////////////////////////////
	 				}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
	                    // Código para la opción 2 - Tarjeta Mastercard
	                    break;
	                case 3:
	                	system("cls");
	                    printf("\n  ________________________________________________");
	                    printf("\n |          - Opcion American Express -           |");
	                    printf("\n |         En cuantas cuotas desea pagar?         |");
	                    printf("\n |________________________________________________|");
	                    printf("\n | 1 - En 1 Cuota sin interes.                    |");
	                    printf("\n | 2 - En 3 Cuotas sin interes.                   |");
	                    printf("\n | 3 - En 6 Cuotas con 10 por ciento de interes.  |");
	                    printf("\n | 4 - En 12 Cuotas con 15 por ciento de interes. |");
	                    printf("\n |________________________________________________|");
	                    printf("\n |Opcion -> ");
	                    scanf("%i", &opcuotasM);
	                    fflush(stdin);
	                    switch (opcuotasM) {
	                            case 1:
	                                system("cls");
	                                strcpy(metodoU, "American Express en 1 Cuota sin interes");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |           - Opcion American Express 1 Cuota -            |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
									
									america1C(&numprod);
									total = numprod;
	                                printf("\n  ___________________________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |___________________________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |___________________________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;
	///////////////////////////////////////////// SWITCH OPCUOTAS 3 cuotas //////////////////////////////////////////////////////////////////////////
	
	                            case 2:
	                                system("cls");
	                                strcpy(metodoU, "American Express en 3 Cuotas sin interes");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |           - Opcion American Express 3 Cuotas -           |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	
	                                america3C(&numprod);
									total = numprod;
	                                cuotasS = total / 3;
	
	                                printf("\n  ___________________________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |3 Cuotas de -> $ %.2f", cuotasS);
	                                printf("\n |___________________________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |___________________________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;
	///////////////////////////////////////////// SWITCH fin 3 cuotas //////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////// SWITCH OPCUOTAS 6 cuotas//////////////////////////////////////////////////////////////////////////
								case 3:
	                                system("cls");
	                                strcpy(metodoU, "American Express - 6 Cuotas Con 10% de comision.");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |          - Opcion American Express 6 Cuotas -            |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	
	                                america1C(&numprod);
									total = numprod;
	                                total += total * 0.10; //comision del 10% en 6 cuotas
	                                cuotasS = total / 6;
	
	                                printf("\n  __________________________________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |6 Cuotas de -> $ %.2f", cuotasS);
	                                printf("\n |__________________________________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |__________________________________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;	
	///////////////////////////////////////////// SWITCH 6 cuotas fin//////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////// SWITCH OPCUOTAS 12 cuotas//////////////////////////////////////////////////////////////////////////
								case 4:
	                                system("cls");
	                                strcpy(metodoU, "American Express - 12 Cuotas Con 15% de Comision.");
	                                printf("\n  __________________________________________________________");
	                                printf("\n |           - Opcion American Express 12 Cuotas -          |");
	                                printf("\n |__________________________________________________________|");
	                                printf("\n |Productos del Cliente -> ");
	                                scanf("%i", &numprod);
	                                fflush(stdin);
	                                system("cls");
	                                
									america12C(&numprod);
	                                total = numprod;
									total += total * 0.15; //comision del 15% en 12 cuotas
	                                cuotasS = total / 12;
	                                
	                                printf("\n  __________________________________________________________________________________________");
	                                printf("\n |El Total a Pagar es -> $ %.2f", total);
	                                printf("\n |12 Cuotas de -> $ %.2f", cuotasS);
	                                printf("\n |__________________________________________________________________________________________|");
	                                printf("\n |El Metodo a pagar utilizado fue: %s", metodoU);
	                                printf("\n |__________________________________________________________________________________________|");
	
	                                total = 0;
	                                contpedi = 1;
	                                break;
///////////////////////////////////////////// SWITCH OPCUOTAS 12 cuotas fin/////////////////////////////////////////////////////////////////////////
	 				}
	                    break;
	                default:
	                    printf("\n Opcion invalida. Intente nuevamente.\n");
	                    break;
	            }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

			case 3:
				system("cls");
			    printf("\n  __________________________________________________________");
			    printf("\n |               - Opcion Vuelto en Efectivo -              |");
			    printf("\n |__________________________________________________________|");
			    printf("\n |Productos del Cliente -> ");
			    scanf("%d", &numprod);
			
			    system("cls");
			    vueltoe(numprod);
					
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
   }

    } while (opc != 0);

    return 0;
	
}
