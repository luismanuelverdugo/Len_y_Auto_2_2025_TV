// error 18
void operar(int& a) {
    a++;
}

int operar(const int& a) {
    return a * 2;
}

//error 15
void calcular() { 
  return 10; 
  int x = 5; // Error: Código inalcanzable tras return 
}

void saludo(string n, int t){
  printf(n);
  printf(t);

  //error 7
  if (true){ 
    a = 10; // Error: 'a' fuera de alcance
  } 

  return;
} 

void main()
{
  //error 1
  int edad; // No inicializada; 
  int suma = edad + 5; // Error: Usar 'edad' sin valor

  int a = 10; 

  //error 2
  const float PI = 3.14159; 
  PI = 3.0; // Error: Intentar reasignar una constante

  //error 3  
  int num = 10; 
  string texto = "Hola"; 
  num = num + texto; // Error: Sumar entero y cadena (en lenguaje estricto) 

  //error 4
  int i = 10; 
  while (i > 0); { 
    // Error: Bucle infinito por punto y coma 
   i--; 
  }

  //error 5
  int x = 5; 
  
  if (x = 10) { 
    // Error: Asignación (=) en vez de comparación (==) imprimir("x es 10"); 
  } 

  //error 6
  saludo(5, "Juan"); // Error: Tipos en orden equivocado 

  //error 8
  int sumatoria = 0; 
  for (int i=0; i<5; i++){ 
    int temp = i; // Error: Si 'temp' debía acumularse, está mal 
  } 

  //error 9
  int j = 1; 
  while (j > 0) { 
    j = j + 1; // Error: j siempre crece, bucle infinito 
  } 

  //error 10
  float f = 5.5; 
  f.longitud(); // Error: Los floats no tienen propiedad 'longitud'

  //error 11
  float resultado = 7 / 2; 
  // Error: División entera (3) convertida a float (3.0), no 3.5

  //error 12
  int total = Cantidad; // Error: 'Cantidad' no ha sido declarado
  String.convertir();   // Error: La función 'convertir' no existe para String

  //error 13
  Objeto o = null; 
  o.metodo(); // Error: Intento de llamar método en objeto nulo

  //error 14
  int lista[3] = {1, 2, 3}; 
  lista[3] = 4; // Error: Índice fuera de rango (0, 1, 2)

  //error 16
  int a1=3;
  int c1=2;
  a1 = b1 = c1; // Si 'b1' no estaba inicializada, 'a1' y 'c1' reciben valor basura. 

  //error 17
  String nombre = "Ana"; 
  if (nombre > 10){
    printf("hola:"+nombre);
  } // Error: Comparar cadena con entero sin sentido lógico 

  //error 20
  int a2 = 10; 
  int b2 = 0; 
  int c2 = a2 / b2; // Error: División por cero (solo se detecta en ejecución)
 
}