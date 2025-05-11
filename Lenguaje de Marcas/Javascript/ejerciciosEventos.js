
function rellenarTabla() {
    let celdas = document.querySelectorAll("tabla");
    celdas.forEach((td,i) => {
      td.textContent = i+1;
    });
  }
  function rellenarTabla2(){
    let numero=document.querySelectorAll("td").length;
    for(let i=1;i<=numero;i++){
      document.getElementById(`${i}`).textContent=i;
    }
  }
  function random(number){
    return Math.floor(Math.random()*(number+1));
  }
function cambiarColor(){
  let color = `rgb(${random(255)},${random(255)},${random(255)})`;
  document.getElementById("Caja").style.backgroundColor = color;
}
function cuentaAtras(){
    let cuenta;
    clearInterval(cuenta);
    let valorTiempo = document.getElementById("tiempo").value;
    let contador = document.getElementById("contador");
    cuenta = setInterval(tiempo,1000);
}
function generarPalabra(){
  let palabraElegida;
  let arrpalabras = ["perro", "gato", "coche", "movil", "madrid", "tortuga", "caiman"];
  return palabraElegida = palabras[random(arrpalabras.length)];
}
function palabraRandom(){
  let contador=0;
  
  
  let palabra = event.target.textContent;
  for(let i=0;i<palabraElegida.length;i++){
    if(palabraElegida[i]===letra){
      contador++;
      event.target.disabled=true;
    }
  }
}
function load(){
    //Ejercicio 1
    let botonNumero=document.getElementById("numeroAleatorio");
    botonNumero.addEventListener("click",()=>{
        let numero = Math.floor(Math.random()*100);
        document.getElementById("mostrarNumero").textContent = numero;
    });
    //Ejercicio2
    let botonAtras=document.getElementById("cuentaAtras");
    botonAtras.addEventListener("submit",cuentaAtras);
    //Ejercicio 3
    //document.getElementById("tabla").addEventListener("click")
    //document.getElementById("tabla2").addEventListener
    //Ejercicio 4
    let movimiento = document.getElementById("Caja");
    movimiento.addEventListener("mouseover", cambiarColor);
    //Ejercicio 5
    let letras = document.querySelectorAll("letrasEjec5");
    letras.forEach(boton)
    //Ejercicio de Adivinar
    //let numero = 0
    //ejercicio 5 del examen
    let botonContador = document.getElementById("contador");
    botonContador.addEventListener("click", () => {
        numero++;
        document.getElementById("contador").textContent = numero;
    });
    let botonReiniciar = document.getElementById("reiniciar");
    botonReiniciar.addEventListener("click", () => {
        numero = 0;
        document.getElementById("contador").textContent = numero;
    });
}
window.addEventListener("DOMContentLoaded", load, false);