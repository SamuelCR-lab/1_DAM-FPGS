

function ventanaEmergente() {
    let abecedario=/^[A-Za-z]+$/;
    let palabra = prompt("Introduce una palabra que no exceda la longitud de 10 letras: ");
    if (palabra && palabra.length <= 10 && abecedario.test(palabra)) {
        document.getElementById("resultadoEjercicio1").textContent = "La palabra "+palabra+ " es valida.";
    } else {
       alert("ERROR, has introducido mal un caracter, deben ser solo letras.");
       document.getElementById("resultadoEjercicio1").textContent = ":( sigue las instrucciones";
    };
}
//Cree esta funcion random para que devolviera un numero entre todos estos para que sea de forma hexadecimal y no rpg
function random(){
    let numeroRandom=Math.floor(Math.random()*20000000);// le di este numero tan alto porque con numeros mas bajos o solo salian 
    // una gama de colores y poco variados y probando vi que este va bien para que salgan bastantes.
    return numeroRandom;
}


function comprobarDiagonales() {
    //Estas dos casillas son las diagonales en la tabla
    let td00 = document.querySelector('[id="00"]').style.backgroundColor;
    let td11 = document.querySelector('[id="11"]').style.backgroundColor;
    //Estas dos casillas son las diagonales en la tabla
    let td01 = document.querySelector('[id="01"]').style.backgroundColor;
    let td10 = document.querySelector('[id="10"]').style.backgroundColor;
    //Con una variable llamada igual hacemos que con
    if((td00 && td11 && td00 === td11) || (td01 && td10 && td01 === td10)){
        document.getElementById("resultadoEjercicio2").textContent = "HAN COINCIDIDO";
    }else{
        document.getElementById("resultadoEjercicio2").textContent = "PRUEBA OTRA VEZ";
    }
}



function contarVocales() {
    let palabras = [];
    for (let i = 0; i < 3; i++) {
        palabras.push(prompt(`Introduce la palabra ${i + 1}`));//el push despues del array palabra para que salga por pantalla como un alert justo despues de darle a aceptar
    }
    let a =0;
    let e=0;
    let i=0;
    let o=0;
    let u=0;
    let resultado = "";

    palabras.forEach((palabra, contador) => {//recorre todas las palabras del array con el forEach (palabra)
        for (let letra of palabra.toLowerCase()) {//en este bucle que creamos es sencillo y como lo permite java que diciendo que una variable llamada letra almacene 
        //cada uno de las letras que hay dentro de palabra con el . que accede a ella convirtiendola en minuscula. 
            if (letra == 'a') {
                a++;
            }else if (letra == 'e'){
                e++;
            }else if(letra == 'i'){
                i++;
            }else if(letra == 'o'){
                o++;
            }else if (letra == 'u'){
                u++;
            }
        }
        resultado += `\tPalabra ${contador+ 1} (${palabra}): tiene ${"a: "+a+" , e: "+e+" , i: "+i+" , o: "+o+" , u: "+u}\n`;
    });
    resultado += `\tTotales: ${"a: "+a+" , e: "+e+" , i: "+i+" , o: "+o+" , u: "+u}\n`;
    document.getElementById("resultadoEjercicio3").textContent = resultado;
}


function mostrarFibonacci() {
    let resultado = document.getElementById("resultadoEjercicio4");
    let aFibo = 0, bFibo = 1;
    for(let i=0;i<40;i++){
        resultado.textContent += aFibo + ", ";
        aFibo = bFibo;
        bFibo = aFibo+bFibo;
    }
}

function carga(){
// Ejercicio 1
    ventanaEmergente();
// Ejercicio 2
    let celdas = document.querySelectorAll("#tablaColores td");
    celdas.forEach(td => {
        td.addEventListener("mouseover", function() {
            let color = '#' + random().toString(16);//con el .toString(16) convierto el numero que me ha dado el random en un numero que se divida hasta un maximo de 16 
            // que es el mayor en hexadecimal para luego convertirlo en cadena de caracteres sumandoselo al '#'
            td.style.backgroundColor = color;
        }); 
    });
    comprobarDiagonales();
// Ejercicio 3
    let Vocales=document.getElementById("ContarVocales");
    Vocales.addEventListener("click",contarVocales);
// Ejercicio 4
    let fibonacci=document.getElementById("Fibonacci");
    fibonacci.addEventListener("click",mostrarFibonacci);
}
window.addEventListener("DOMContentLoaded", carga);
