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
int MAX_STOCK = 40;/*Mediante la creacion de esta variable global hacemos que el codigo base del programa no varie completamente y solo realice los cambios para el realloc, unico momento en el que es necesario que sea modificable*/
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

void ShowLibrary(Book const * print_book);

/*En estas funciones void varias de ellas he utilizado "[]" (para acceder a la memoria) debido a esto se utiliza el . y no la ->, esta ultima se utiliza cuando a la direccion de memoria que recibe nuestra funcion void como puntero queremos acceder a ella sin especificar su espacio reservado y al ser una direccion de memoria le ponemos la -> para que vaya al espacio de memoria con el nombre que le hemos dado dentro de la funcion, al igual que el punto pero para que funcione hsy que darle a la funcion llamada la direccion de memoria con el & y el espacio que queremos con el []. Por ello, dependiendo de como queremos acceder a esa direccion de memoria se usa . o ->.*/
void Search_ID(Book const * IDSearch_Book, int ID);

int Search_IDIncrease(Book const * IDSearch_Book, int IDBookIncrease);

void IncreaseCapacity(Book * increased_book,int ID_to_increase,int num_to_increase);

void Search_Gender(Book * Search, int ID_Gender);

void Show_author(Book const * Show_Author, char * author);

void book_Library(Book * books_add, int add_id, char * add_title, char * add_author, float add_price, int add_gender, int add_capacity_available);

Book * add_book_Library(Book * new_books_add);

Book * Show_P6_TOTAL(Book * p6_total);

 int main(int argcount, char ** argvalue){
              /*Aqui se realizo mediante un malloc la reserva de memoria, es una multiplicacion de de un tamaño sizeof(Book) que es un typedef struct que contiene cada dato y lo que ocupa para cada libro y la cantidad maxima que tenemos en la libreria llamada MAX_STOCK la variable*/
              Book * books = (Book*) malloc(sizeof(Book)*MAX_STOCK);
        book_Library(&books[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
        book_Library(&books[1],2, "1984", "George Orwell", 12.49, FICTION, 5);
        book_Library(&books[2],3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8);
        book_Library(&books[3],4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12);
        book_Library(&books[4],5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7);
        book_Library(&books[5],6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9);
        book_Library(&books[6],7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6);
        book_Library(&books[7],8, "The Odyssey", "Homer", 17.49, FICTION, 4);
        book_Library(&books[8],9, "Ulysses", "James Joyce", 25.00, FICTION, 2);
        book_Library(&books[9],10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3);
        book_Library(&books[10],11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11);
        book_Library(&books[11],12, "The Iliad", "Homer", 18.50, FICTION, 7);
        book_Library(&books[12],13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15);
        book_Library(&books[13],14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20);
        book_Library(&books[14],15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13);
        book_Library(&books[15],16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6);
        book_Library(&books[16],17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5);
        book_Library(&books[17],18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8);
        book_Library(&books[18],19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4);
        book_Library(&books[19],20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14);
        book_Library(&books[20],21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6);
        book_Library(&books[21],22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8);
        book_Library(&books[22],23, "Othello", "William Shakespeare", 10.99, THEATER, 7);
        book_Library(&books[23],24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5);
        book_Library(&books[24],25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4);
        book_Library(&books[25],26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10);
        book_Library(&books[26],27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9);
        book_Library(&books[27],28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3);
        book_Library(&books[28],29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15);
        book_Library(&books[29],30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10);
        book_Library(&books[30],31, "Paradise Lost", "John Milton", 12.00, POETRY, 7);
        book_Library(&books[31],32, "Beowulf", "Anonymous", 15.00, POETRY, 5);
        book_Library(&books[32],33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4);
        book_Library(&books[33],34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9);
        book_Library(&books[34],35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11);
        book_Library(&books[35],36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8);
        book_Library(&books[36],37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5);
        book_Library(&books[37],38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12);
        book_Library(&books[38],39, "The Republic", "Plato", 16.00, ESSAY, 6);
        book_Library(&books[39],40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10); 
    
       if (books == NULL){
              printf("ERROR FATAL, no hay memoria.\n");
              return EXIT_FAILURE;
       }

       if (argcount == 1){
              printf("\t\tInstrucciones para utilizar el programa. \n\n");
              printf("\tPara ver cada uno de los libros de la biblioteca, escribe: %s mostrar.\n\n",argvalue[0]);
              printf("\tPara ver el programa completamente escribe: %s mostrar todo.\n\n",argvalue[0]);
              printf("\tPara visualizar un solo libro, escribe: %s mostrar [ID del libro].\n\n",argvalue[0]);
              printf("\tPara añadir stock a un libro, escribe: %s stock [ID del libro] [Cantidad a añadir].\n\n",argvalue[0]);
              printf("\tPara visualizar todos los libros de una categoria, escribe: %s categoria (1 Ficcion, 2 No Ficcion, 3 Poesia, 4 Teatro, 5 Ensayo).\n\n",argvalue[0]);
              printf("\tPara ver los libros escritos por un autor, escribe: %s autor nombre del autor(entrecomillas).\n\n",argvalue[0]);
              printf("\tPara añadir un libro a la biblioteca escribe: %s añadir.\n\n",argvalue[0]);
       }else if (argcount == 2){
              if (strcmp(argvalue[1], "mostrar") == 0){
                     for(int i = 0; i < MAX_STOCK; i++){
                     ShowLibrary(books+i);/*doy el array a la funcion con cada bucle 0 + i que incrementa durante el bucle*/
                   }
              }else if(strcmp(argvalue[1], "añadir") == 0){
                     books = add_book_Library(books);
                            for(int i = 0; i < MAX_STOCK; i++){
                                   ShowLibrary(books+i);/*doy el array a la funcion con cada bucle 0 + i que incrementa durante el bucle*/
                            }
              }else{
                     printf("No se puede mostrar lo requerido");
              }
              /*Tenemos aqui la posibilidad de tener 3 argumentos por lineas de comando pidiendo mostrar un libro por su ID, por su categoria y por su autor*/
       }else if (argcount == 3){
              int id_gender = 0;
              id_gender = atoi(argvalue[2]);/*El atoi convierte el valor escrito en la linea de comandos y lo guarda en id*/
                     if (strcmp(argvalue[1], "mostrar") == 0){
                            if (strcmp(argvalue[2], "todo") == 0){
                                   books = Show_P6_TOTAL(books);
                                   for(int i = 0; i < MAX_STOCK; i++){
                                   ShowLibrary(books+i);/*doy el array a la funcion con cada bucle 0 + i que incrementa durante el bucle*/
                                   }
                            }else if (id_gender == 0){
                                   printf("Ese id no exite");;
                            }else{
                                   Search_ID(books, id_gender);
                            }
                     }else if (strcmp(argvalue[1], "categoria") == 0){
                            Search_Gender(books, id_gender);/*llamamos a la funcion, dandole los libros y el id que en este caso es categoria*/

                     }else if (strcmp(argvalue[1], "autor") == 0){
                            Show_author(books, argvalue[2]);
                     }else{
                            printf("No se puede mostrar lo requerido, porque no existe dentro del programa");
                     }
       }else if (argcount == 4){
              if (strcmp(argvalue[1], "stock") == 0){
                     int id = 0;
                     id = atoi(argvalue[2]);/*El atoi convierte el valor escrito en la linea de comandos y lo guarda en id*/
                     int increase_stock = 0;
                     increase_stock = atoi(argvalue[3]);
                            if (id == 0 || id > 40){
                                   printf("Ese id no exite");
                            }else{
                                   IncreaseCapacity(books, id, increase_stock);/*llamo a la funcion incrementar y le damos el argvalue[2] = id y argvalue[3] que es la cantidad a incrementar en el stock de un libro*/
                            }
                     }
       }else if (argcount >= 5){
              printf("Error demasiados argumentos por lineas de comandos\n");
              return 0;
       }

              free(books);
 	return 0;
}

void ShowLibrary(Book const * print_book){
       printf("ID del libro: %d\n",print_book->ID);
       printf("\tTitulo: %s \n",print_book->title);
       printf("\tAutor: %s \n",print_book->author);
       printf("\tPrecio: %f\n",print_book->price);
       printf("\tCategoria: ");
              switch (print_book->gender){
              case 0:
                     printf("Ficcion\n");
                     break;
              case 1:
                     printf("No Ficcion\n");
                     break;
              case 2:
                     printf("Poesia\n");
                     break;
              case 3:
                     printf("Teatro\n");
                     break;
              case 4:
                     printf("Ensayo\n");
                     break;
              }
       printf("\tDisponibilidad: %d\n",print_book->capacity_available);
       printf("\n");
}

void Search_ID(Book const * IDSearch_Book, int ID){/*Le damos a la funcion void en main books de libros y aqui lo recibimos par que funcione la busqueda por ID (Funcion antes realizada en al funcion del programa base) que fue introducido por linea de comandos*/
              if (ID >= 0 && ID <= MAX_STOCK){/*realizamos una criba de valores que el numero debe de ser entre el 0 y el 40*/
                     for(int i = 0; i < MAX_STOCK; i++){
                            if (IDSearch_Book[i].ID == ID){/*Este bucle realiza la comparacion del id intoducido por el usuario y el que tenemos dentro de nuestro arrays books. En esta funlinea pongo .ID y no -> porque*/
                                   ShowLibrary(&IDSearch_Book[i]);
                            }
                     }
              }else{
              printf("Error no existe ese ID introducido\n");
              }
}   

int Search_IDIncrease(Book const * IDSearch_Book, int IDBookIncrease){/*En esta funcion es donde queremos que el libro con un ID dado por el usuario, incremente su capacidad y se vea lo cuantos libros a agregado.*/
              if (IDBookIncrease >= 0 && IDBookIncrease <= MAX_STOCK){//realizamos una criba de valores que el numero debe de ser entre el 0 y el 40
                     for(int i = 0; i < MAX_STOCK; i++){
                            if (IDSearch_Book[i].ID == IDBookIncrease){/*Este bucle realiza la comparacion del id intoducido por el usuario y el que tenemos*/
                            /*dentro books*/
                                   return IDBookIncrease;/*A diferencia de la funcion Serach_ID esta funcion retorna un int que es el ID del libro comparado.*/
                            }
                     }
              }else{
                     printf("Error no existe ese ID introducido\n");
              return EXIT_SUCCESS;
              }
}

void IncreaseCapacity(Book * increased_book,int ID_to_increase,int num_to_increase){/*En esta funcion no se utiliza el const debido a que incrementamos un valor del array que recibe la funcion, por ello no ponemos const*/
              ID_to_increase = Search_IDIncrease(increased_book,ID_to_increase);/*guardo en la variable ID_to_increase la el return de la funcion Search_IDIncrease*/
              --ID_to_increase;/*Aqui reduzco el valor que recibo de Search_IDIncrease porque da un número entre 1 y 40 y mi arrays es de 40 espacios que va del 0 al 39. Utilizo las flechas por le estoy diciendo*/
              (increased_book + ID_to_increase)->capacity_available = increased_book[ID_to_increase].capacity_available + num_to_increase;
       /* En esta linea donde le doy a el puntero increased_book que le he dado el struct books que dentro tiene el arrays books
       llamo mediante esta direccion dada solo a la variable increased_book[ID_to_increase] 
       que contiene el contenido que queremos como es en este caso capacity_available (siendo la capacidad del stock ahora mismo), 
       igualo este valor a la varible direccionada increased_book[ID_to_increase] y le sumo la cantidad que se quiere aumentar
       */
              ShowLibrary(&increased_book[ID_to_increase]);/*En esta linea llamamos a la funcion ShowLibrary() para que muestre el incremento del libro ID que hemos solicitado anteriormente almacenado en ID_to_increase*/
       }

void Search_Gender(Book * Search, int ID_Gender){/*Esta funcion es muy similar a la que tenemos anteriormente, solo que ademas de recibir los libros que tenemos en stock por referencia tambien recibe el valor que el usuario ha introducido por linea de comandos*/
              ID_Gender = ID_Gender - 1;
              for (int i = 0; i < MAX_STOCK; i++){/*Con este bucle comprobamos en cada uno de los libros que si pertenecen al genero sean mostrados*/
                     if (ID_Gender == Search[i].gender){/*Al ya estar accediendo a la direccion de memoria de .ID_Gender con [i] no hay que utilizar -> pero si .*/
                            switch (ID_Gender){
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

void Show_author(Book const * Show_Author, char * author){/*Esta funcion tiene la misma manera de funcionar que dentro del programa solo que por tenemos que darle a la funcion el autor introducido mediante un char */
       int author_long;
       int string_long;
                     author_long = strlen(author)-1;/*Aqui en int author_long guardamos la cadena de author que nos da el usuario y el -1 por el \0*/
                     
                     for (int i =0; i < MAX_STOCK; i++){
                            if(strlen(Show_Author->author) <= author_long){/**/
                                   string_long = 0;
                            }else{
                                   string_long = strlen(Show_Author->author) - author_long;

                            }
                            for (int n = 0; n <= string_long; ++n){/*n de Next de siguiente autor*/
                                   if (strncmp(author, Show_Author->author + n, author_long) == 0){/*En este bucle for es el que se encarga de buscar en la libreria el autor que es igual y mostrarlo por ello el showlibrary(Show_Author+i) que mostrara el libro en la cual coincida con la*/
                                          ShowLibrary(Show_Author);
                                   }
                            }
                            Show_Author++;/*Para pasar al siguiente libro porque al pasarlo por referencia pasa el 1° libro*/
                     }
 }

void book_Library(Book * books_add, int add_id, char * add_title, char * add_author, float add_price, int add_gender, int add_capacity_available){/*Con esta funcion haremos que cada uno de los libros que tenemos y los proximos que se agreguase se guarden en la memoria reservada anteriormente, con una direccion de memoria que hace referencia al espacio en el que va a estar dentro de la reserva y los datos que van a ocupar reservadas por el sizeof */
       books_add->ID = add_id;
       strcpy(books_add->title, add_title);
       strcpy(books_add->author, add_author);
       books_add->price = add_price;
       books_add->gender = add_gender;
       books_add->capacity_available = add_capacity_available;
}

Book * add_book_Library(Book * new_books_add){/*Esta funcion es la que vamos a llamar para agregar un libro a nuestra libreria dentro de la memoria reservada por lo que hay que hacer el realloc*/
                     MAX_STOCK = MAX_STOCK + 1;/*Aumentamos aqui la variable global MAX_STOCK para que la reserva de memoria del realloc sea para un libro mas que luego le asignaremos sus valores*/
                     new_books_add = (Book*) realloc(new_books_add, sizeof(Book) * (MAX_STOCK));
                     if (new_books_add == NULL){
                            printf("ERROR FATAL, no hay memoria.\n");
                     return EXIT_SUCCESS;
                     }
                     Book Book_new;/*Al ser Book un struct de varios tipos de datos, que debe tener el nuevo libro y para obtener esa referencia se le da una variable Book_new, que almacenara cada una de ellas y luego referenciaremos para que se guarden los datos*/
                     int valor_de_retorno;
                     printf("Añade los datos del nuevo libro.\n");
                     printf("Id del libro: ");
                     valor_de_retorno = scanf(" %d",&Book_new.ID);
                            if (Book_new.ID >= 0 && Book_new.ID <= 40){
                                   printf("ERROR, ID en uso");
                                   return EXIT_SUCCESS;
                            }else if (valor_de_retorno == 0){
                                   printf("ERROR, escribe un número no letras");
                                   return EXIT_SUCCESS;
                            }
                     printf("Titulo del libro: ");
                     scanf(" %[^\n]",Book_new.title);/*Este scanf del estilo "%[^\n]" permite al scanf guardar lo escrito con los espacios de un titulo o nombre del autor*/
                     /*fgets(Book_new.title, MAX_TITLE, stdin); No he usado el Fgets porque al guardar el valor dado hacia un \n que hacia que se viera mal*/
                     printf("Autor del libro: ");
                     scanf(" %[^\n]",Book_new.author);/*Este scanf del estilo "%[^\n]" permite al scanf guardar lo escrito con los espacios de un titulo o nombre del autor*/
                     /*fgets(Book_new.author, MAX_AUTOR, stdin); No he usado el Fgets porque al guardar el valor dado hacia un \n que hacia que se viera mal*/
                     printf("Precio: ");
                     valor_de_retorno = scanf(" %f",&Book_new.price);
                            if (valor_de_retorno == 0){
                                   printf("ERROR, escribe un número no letras");
                                   return EXIT_SUCCESS;
                            }
                     printf("Genero (0 = Ficcion, 1 = No Ficcion, 2 = Poesia, 3 = Teatro, 4 = Ensayo): ");
                     valor_de_retorno = scanf(" %u",&Book_new.gender);
                            if (valor_de_retorno == 0){
                                   printf("ERROR, escribe un número no letras");
                                   return EXIT_SUCCESS;
                            }
                     printf("Cantidad de existencias: ");
                     valor_de_retorno = scanf(" %d",&Book_new.capacity_available);
                            if (valor_de_retorno == 0){
                                   printf("ERROR, escribe un número no letras");
                                   return EXIT_SUCCESS;
                            }
                     book_Library(&new_books_add[MAX_STOCK -1],Book_new.ID,Book_new.title,Book_new.author,Book_new.price,Book_new.gender,Book_new.capacity_available);
                     return new_books_add;           
}

Book * Show_P6_TOTAL(Book * p6_total){/*Esta funcion esta creada para simplificar el main con una funcion basica que llame a todas las demas*/
       char YesNot;
       for(int i = 0; i < MAX_STOCK; i++){
              ShowLibrary(p6_total+i);/*doy el array a la funcion con cada bucle 0 + i que incrementa durante el bucle, mostrando cada uno de los libros que tenemos*/
       }
       int IDBook;
              printf("¿Quieres buscar un libro? s(Sí) o n(no): ");/*preguntamos si quiere buscar un libro*/
              scanf(" %c",&YesNot);
              if (YesNot == 's'){
                     printf("¿ID del libro a buscar? del (1 al 40): ");/*preguntamos el id del libro*/
                     scanf(" %d",&IDBook);
                     Search_ID(p6_total, IDBook);/*llamamos a la funcion buscar por ID, dandole por referencia la biblioteca completa y el id del libro que queremos buscar en la biblioteca*/
              }
       int num_to_increase;
       int ID_to_increase;
              printf("¿Quieres aumentar el stock de un libro? s(Sí) o n(no): ");
              scanf(" %c",&YesNot);
              if (YesNot == 's'){
                     printf("¿ID del libro que quieres aumentar su cantidad? del (1 al 40): ");//preguntamos el id del libro
                     scanf(" %d",&ID_to_increase);
                     printf("¿Cuanto quieres aumentar la cantidad del libro?: ");
                     scanf(" %d",&num_to_increase);
                            IncreaseCapacity(p6_total,ID_to_increase,num_to_increase);
       }
       int gender;
              printf("¿Quieres buscar un libro por su genero? s(Sí) o n(no): ");/*preguntamos si quiere buscar un libro por su genero*/
              scanf(" %c",&YesNot);/*pongo espacio a las a %c debido a que es una pregunta y al introducir el si o no se necesita el enter que es un \n y hay que eliminarlo*/
              if (YesNot == 's'){
                     printf("Categorias a elegir:\n");
                     printf("\t 1 Ficcion\n");
                     printf("\t 2 No Ficcion\n");
                     printf("\t 3 Poesia\n");
                     printf("\t 4 Teatro\n");
                     printf("\t 5 Ensayo\n");
                     scanf(" %d",&gender);
              Search_Gender(p6_total,gender);/*llamamos a la funcion buscar por genero, dandole por referencia la biblioteca completa y el genero de los libros que hay de ese tipo en la biblioteca*/
              }
       char author[MAX_AUTOR];
       int author_long;
       int string_long;
       printf("¿Quieres buscar un libro por su autor? s(Sí) o n(no): ");
       scanf(" %c",&YesNot);/*pongo espacio a los %c de los scanf para depurar caulquier \n de un enter anteriormente introducido*/
              if (YesNot == 's'){
                     printf("Nombre del autor que quieres buscar sus libros: ");
                     scanf(" "); /*Con este scanf vacio evitamos cualquier \n que se haya guardado mal*/
                     fgets(author, sizeof(author), stdin);/*El fgets copia los escrito por el usuario con los espacios y todo, guardandolo en este caso en author*/
                     Show_author(p6_total, author);/*llamamos a la funcion buscar libros por autor, dandole por referencia la biblioteca completa y el autor de los libros que hay del mismo en la biblioteca*/
              }
       Book * New_Library_Direction;          
       New_Library_Direction = add_book_Library(p6_total);
       return New_Library_Direction;
}