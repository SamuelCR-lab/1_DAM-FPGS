function tiempo(){
    
}
function rellenarTabla() {
    const celdas = document.querySelectorAll("tabla");
    celdas.forEach((celda, index) => {
      celda.textContent = index + 1;
    });
  }
function cuentaAtras(){
    let cuenta;
    clearInterval(cuenta);
    let valorTiempo = document.getElementById("tiempo").value;
    let contador = document.getElementById("contador");
    cuenta = setInterval(tiempo,1000);
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
}
window.addEventListener("DOMContentLoaded", load, false);