let abecedario=/^[A-Za-z]+$/;

function ventanaEmergente() {
    let palabra = prompt("Introduce una palabra que no exceda la longitud de 10 letras: ");
    if (palabra && palabra.length <= 10 && abecedario.test(palabra)) {
        document.getElementById("resultadoEjercicio1").textContent = "Palabra válida: " + palabra;
    } else {
        document.getElementById("resultadoEjercicio1").textContent = "La palabra "+palabra+" es invalida.";
    }
}



function comprobarDiagonales() {
    const td00 = document.querySelector('[id="00"]').style.backgroundColor;
    const td11 = document.querySelector('[id="11"]').style.backgroundColor;
    const td01 = document.querySelector('[id="01"]').style.backgroundColor;
    const td10 = document.querySelector('[id="10"]').style.backgroundColor;

    const iguales = (td00 && td11 && td00 === td11) || (td01 && td10 && td01 === td10);
    document.getElementById("resultadoEjercicio2").textContent = iguales ? "HAN COINCIDIDO" : "PRUEBA OTRA VEZ";
}


function contarVocales() {
    let palabras = [];
    for (let i = 0; i < 3; i++) {
        palabras.push(prompt(`Introduce la palabra ${i + 1}`));
    }
    const total = { a:0, e:0, i:0, o:0, u:0 };
    let resultado = "";

    palabras.forEach((palabra, index) => {
        let conteo = { a:0, e:0, i:0, o:0, u:0 };
        for (let letra of palabra.toLowerCase()) {
            if (conteo.hasOwnProperty(letra)) {
                conteo[letra]++;
                total[letra]++;
            }
        }
        resultado += `Palabra ${index + 1}: ${JSON.stringify(conteo)}\n`;
    });
    resultado += `\nTotales: ${JSON.stringify(total)}`;
    document.getElementById("resultadoEjercicio3").textContent = resultado;
}


let a = 0, b = 1;
function mostrarFibonacci() {
    let resultado = document.getElementById("resultadoEjercicio4");
    resultado.textContent += a + ", ";
    [a, b] = [b, a + b];
}

function carga(){
// Ejercicio 1
    ventanaEmergente();
    /*let contador=0;
    let palabra = prompt("Introduce una palabra que no exceda la longitud de 10 letras");
    for(let i =0;i<palabra.length;i++){
        if(abecedario.test(palabra[i])&&palabra.length<=10){
            i=palabra.length;
            alert("ERROR, has introducido mal un caracter, deben ser solo letras");
        }
        contador++;
    }
    if(contador==palabra.length) 
        document.getElementById("resultadoEjercicio1").textContent="La palabra es "+palabra+" y es valida";*/
// Ejercicio 2
    let celdas = document.querySelectorAll("#tablaColores td");
    celdas.forEach(td => {
    td.addEventListener("mouseover", function() {
        const color = '#' + Math.floor(Math.random()*16777215).toString(16);
        td.style.backgroundColor = color;
    });
});
comprobarDiagonales();
// Ejercicio 3

// Ejercicio 4
}
window.addEventListener("DOMContentLoaded", carga);
