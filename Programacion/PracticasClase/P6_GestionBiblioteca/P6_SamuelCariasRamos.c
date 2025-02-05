#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *
 **/

#define MAX_TITLE 80
#define MAX_AUTOR 50
#define MAX_GENDER 13
#define MAX_STOCK 40
typedef enum {
	FICTION,
	NON_FICTION,
	POETRY,
	THEATER,
	ESSAY,
}Gender;

typedef struct{
	int ID;
 	char title[MAX_TITLE];
 	char author[MAX_AUTOR];
 	float price;
 	Gender gender;
 	int capacity_available;
}Book;

void ShowLibrary(const Book * print_book){
	printf("ID del libro: %d.\n",print_book->ID);
	printf("\tTitulo: %s.\n",print_book->title);
	printf("\tAutor: %s.\n",print_book->author);
	printf("\tPrecio: %f.\n",print_book->price);
	printf("\tCategoria: ");
              switch (print_book->gender){
              case 0:
                     printf("Ficcion.\n");
                     break;
              case 1:
                     printf("No Ficcion.\n");
                     break;
              case 2:
                     printf("Poesia.\n");
                     break;
              case 3:
                     printf("Teatro.\n");
                     break;
              case 4:
                     printf("Ensayo.\n");
                     break;
              }
	printf("\tDisponibilidad: %d.\n",print_book->capacity_available);
       printf("\n");
}

       /*En estas funciones void varias de ella he utilizado [para acceder a la memoria] debido a esto 
       se utiliza el . y no la ->, esta ultima se utiliza cuando a la direccion de memoria que recibe nuestra funcion void como puntero
       queremos acceder a ella sin especificar su espacio y al ser una direccion de memoria le ponemos la -> para que vaya al espacio de memoria con el nombre que queremos al igual que el punto que solo direccionan. 
       Por ello, dependiendo de como queremos acceder a esa direccion de memoria se usa . o ->.*/

void Search_ID(Book const * IDSearch_Book){//Le damos a la funcion void en main catalogo de libros
       int IDBook;
       char YesNot;
              printf("¿Quieres buscar un libro? s(Sí) o n(no): ");//preguntamos si quiere buscar un libro
              scanf("%c",&YesNot);
                 if (YesNot == 's'){
                     printf("¿ID del libro a buscar? del (1 al 40): ");//preguntamos el id del libro
                     scanf("%d",&IDBook);
              if (IDBook >= 0 && IDBook <= 40){//realizamos una criba de valores que el numero debe de ser entre el 0 y el 40
                     for(int i = 0; i < MAX_STOCK; i++){
                            if (IDSearch_Book[i].ID == IDBook){//Este bucle realiza la comparacion del id intoducido por el usuario y el que tenemos
                            //dentro de nuestro arrays catalogo. En esta funlinea pongo .ID y no -> porque
                                   ShowLibrary(&IDSearch_Book[i]);
                            }
                     }
              }else{
              printf("Error no existe ese ID introducido\n");
              }
       }         
       
}

int Search_IDIncrease(Book const * IDSearch_Book){//En esta funcion es una auxiliar que creamos para ayudara a retornar la posicion del ID a incrementar que no se modificara su contenido
       int IDBookIncrease;
              printf("¿ID del libro que quieres aumentar su cantidad? del (1 al 40): ");//preguntamos el id del libro
              scanf("%d",&IDBookIncrease);
              if (IDBookIncrease >= 0 && IDBookIncrease <= 40){//realizamos una criba de valores que el numero debe de ser entre el 0 y el 40
                     for(int i = 0; i < MAX_STOCK; i++){
                            if (IDSearch_Book[i].ID == IDBookIncrease){//Este bucle realiza la comparacion del id intoducido por el usuario y el que tenemos
                            //dentro catalogo
                                   return IDBookIncrease;//A diferencia de la funcion Serach_ID esta funcion retorna un int que es el ID del libro comparado.
                            }
                     }
              }else{
                     printf("Error no existe ese ID introducido\n");
              return EXIT_SUCCESS;
              }
       }         


void IncreaseCapacity(Book * increased_book){//En esta funcion no se utiliza el const debido a que incrementamos un valor del array que recibe la funcion, por ello no ponemos const
       int num_to_increase;
       int ID_to_increase;
       ID_to_increase = Search_IDIncrease(increased_book);//guardo en la variable ID_to_increase la el return de la funcion Search_IDIncrease
       //Que he creado para que pregunte cual es el ID del libro a Incrementar
              printf("¿Cuanto quieres aumentar la cantidad del libro?: ");
              scanf("%d",&num_to_increase);
              --ID_to_increase;// Aqui reduzco el valor que recibo de Search_IDIncrease porque da un número entre 1 y 40 y mi arrays es de 40 espacios que va del 0 al 39
       //Utilizo las flechas por le estoy diciendo 
              (increased_book + ID_to_increase)->capacity_available = increased_book[ID_to_increase].capacity_available + num_to_increase;
       /* En esta linea donde le doy a el puntero increased_book que le he dado el struct books que dentro tiene el arrays books
       llamo mediante esta direccion dada solo a la variable increased_book[ID_to_increase] 
       que contiene el contenido que queremos como es en este caso capacity_available (siendo la capacidad del stock ahora mismo), 
       igualo este valor a la varible direccionada increased_book[ID_to_increase] y le sumo la cantidad que se quiere aumentar
       */
              ShowLibrary(&increased_book[ID_to_increase]);//En esta linea llamamos a la funcion ShowLibrary() para que muestre el incremento del libro ID que hemos solicitado anteriormente almacenado en ID_to_increase 
}

void Search_Gender(const Book * Search){
       int gender;
       char YesNot;
              printf("¿Quieres buscar un libro por su genero? s(Sí) o n(no): ");//preguntamos si quiere buscar un libro
              scanf(" %c",&YesNot);//pongo espacio a las a %c debido a que al venir de 
              if (YesNot == 's'){
                     printf("Categorias a elegir:\n");
                     printf("\t 1 Ficcion\n");
                     printf("\t 2 No Ficcion\n");
                     printf("\t 3 Poesia\n");
                     printf("\t 4 Teatro\n");
                     printf("\t 5 Ensayo\n");
                     scanf(" %d",&gender);     
              for (int i = 0; i < MAX_STOCK; i++){
                     if (gender - 1 == Search[i].gender){//Al ya estar accediendo a la direccion de memoria de .gender con [i] no hay que utilizar -> pero si .
                            switch (gender){
                            case 0:
                                   ShowLibrary(&Search[i]);
                            break;
                            case 1:
                                   ShowLibrary(&Search[i]);
                            break;
                            case 2:
                                   ShowLibrary(&Search[i]);
                            break;
                            case 3:
                                   ShowLibrary(&Search[i]);
                            break;
                            case 4:
                                   ShowLibrary(&Search[i]);
                            break;
                            default:
                            printf("Error no existe ese genero introducido\n");
                            }     
                     }
              }
       }
}

/*void Show_by_author(const Book * Show_Author){
       char author[50];
       int comparate = 0;
       char YesNot;
       printf("¿Quieres buscar un libro por su autor?");
       scanf(" %c",&YesNot);//pongo espacio a las a %c debido a que al venir de 
              if (YesNot == 's'){
                     for (int i =0; i < MAX_STOCK; i++){
                     comparate = strncmp(author, Show_Author);
                     }
              }
}*/

 int main(){
 		Book books[MAX_STOCK] = {
        {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10},
        {2, "1984", "George Orwell", 12.49, FICTION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICTION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICTION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11},
        {12, "The Iliad", "Homer", 18.50, FICTION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8},
        {23, "Othello", "William Shakespeare", 10.99, THEATER, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POETRY, 7},
        {32, "Beowulf", "Anonymous", 15.00, POETRY, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12},
        {39, "The Republic", "Plato", 16.00, ESSAY, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10}
    }; 
       //Usamos este bucle for para mostrar todos los elementos de array books
       //que al ser de MAX_STOCK espacios de memoria reservada el bucle y el array comienzan en 0 hasta 39
       //para que sean los MAX_STOCK espacios de memoria reservada.
       for(int i = 0; i < MAX_STOCK; i++){
              ShowLibrary(books+i);//doy el array a la funcion con cada bucle 0 + i que incrementa durante el bucle
	      }

       Search_ID(books);
       IncreaseCapacity(books);
       Search_Gender(books);
       //Show_by_author(books); No me dio tiempo a terminar la funcion y no se si funciona por lo que te la dejo como comentario


 	return 0;
 }
