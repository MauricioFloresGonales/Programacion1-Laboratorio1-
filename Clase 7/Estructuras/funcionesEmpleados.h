typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

} eEmpleado;

void mostrarEmpleado(eEmpleado[],int);
void mostrarTodos(eEmpleado[],int);
void crearEmpleado(eEmpleado[],int);
void darBaja(eEmpleado[],int);
//void buscarLibre(eEmpleado[],int)
void mostrarMenu(void);

