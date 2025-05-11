let precioRepostaje = 1.26;
let numerosMatricula = "0123456789";
let abecedario = "abcdefghijklmnopqrstuvwxyz";

function comprobacion(matricula) {
    let letras = 0;
    let numeros = 0;

    // Convertimos la matrícula a minúsculas para hacer la comprobación más sencilla
    matricula = matricula.toLowerCase();

    for (let i = 0; i < matricula.length; i++) {
        if (abecedario.includes(matricula[i])) {
            letras++;
        } else if (numerosMatricula.includes(matricula[i])) {
            numeros++;
        } else {
            alert("ERROR, has introducido un digito no permitido");
            return false; // Importante: Salimos de la función si hay un error
        }
    }

    if (letras != 3 || numeros != 4) {
        alert("ERROR, has introducido mas letras o mas numeros de las debidas");
        return false; // Importante: Salimos de la función si hay un error
    } else {
        document.getElementById("matriculaComprobada").textContent = "La matricula " + matricula + " es correcta";
        return true; // Indicamos que la matrícula es correcta
    }
}

function repostaje(litros) {
    let calculo = 0;
    calculo = precioRepostaje * litros;
    document.getElementById("calculoRepostaje").textContent = "El repostaje del coche con " + litros + " litros, cuesta " + calculo.toFixed(2) + " euros"; // toFixed(2) para mostrar 2 decimales
}
function trileros() {
    let botones = document.querySelectorAll("#trilerosContainer button"); // Asumo botones dentro de un contenedor
    let resultado = document.getElementById("resultado");
    let bolaPosicion = Math.floor(Math.random() * 3); // Posición aleatoria (0, 1 o 2)
    let intentos = 3;

    botones.forEach((boton, index) => {
        boton.addEventListener("click", () => {
            if (intentos > 0) {
              intentos--;
                if (index === bolaPosicion) {
                    resultado.textContent = "¡Has ganado! La bola estaba en el botón " + (index + 1) + ".";
                    botones[bolaPosicion].textContent = "O"; // Mostrar la bola
                    botones.forEach(btn => btn.disabled = true); // Deshabilitar todos los botones
                } else {
                    resultado.textContent = "¡Fallaste! Te quedan " + intentos + " intentos.";
                    boton.disabled = true; // Deshabilitar el botón pulsado
                    if (intentos === 0) {
                      resultado.textContent = "¡Has perdido! La bola estaba en el botón " + (bolaPosicion + 1) + ".";
                      botones[bolaPosicion].textContent = "O";
                      botones.forEach(btn => btn.disabled = true);
                    }
                }
            }
        });
    });
}

function carga() {
    // Ejercicio 1
    let matriculaInput = document.getElementById("matricula"); // Asumo que el input tiene el ID "matricula"
    let litrosInput = document.getElementById("litros"); // Asumo que el input tiene el ID "litros"
    let calcularButton = document.getElementById("calcular"); // Asumo que el botón tiene el ID "calcular"
  
    calcularButton.addEventListener("click", function() {
        let matricula = matriculaInput.value;
        let litros = parseFloat(litrosInput.value); // Convertimos a número

        if (comprobacion(matricula) && !isNaN(litros)) { // Verificamos la matrícula y que litros sea un número
            repostaje(litros);
        } else {
            alert("Por favor, introduce una matrícula y litros válidos.");
        }
    });
    trileros();
}

window.addEventListener("DOMContentLoaded", carga);