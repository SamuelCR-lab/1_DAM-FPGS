function random(number){
    return Math.floor(Math.random()*(number+1))
}
function cambiarFondo(){
    //document.body.style.background="blue";
    document.body.style.background=`rgb(${random(255)},${random(255)},${random(255)})`;
}
function cambiarTexto(){
    document.body.innerHTML="<h1>Hola</h1>";
}
function mostrarDatos(event){
    event.preventDefault();
    let nombre=document.getElementById("nombre").value;
    document.getElementById("resultado").innerHTML=`valor:${nombre}`;
}
function load(){
    let boton=document.querySelector("button");
    let boton2=document.getElementById("boton2");
    let boton3=document.getElementById("boton3")
    let CuadroTexto=document.getElementById("CuadroTexto");
    let zona=document.getElementById("Zona");
    let formulario=document.getElementById("Formulario");

    //Eventos 
    boton.addEventListener("click",cambiarFondo,false);
    boton2.addEventListener("click",cambiarTexto,false);
    boton3.addEventListener("click",(event)=>console.log(event));
    CuadroTexto.addEventListener("keydown",(event)=>(document.getElementById("textoSalida").textContent += `${event.key}`));
    zona.addEventListener("mousemove",(event)=>(document.getElementById("coordenada").textContent=`Coordenadas: X=${event.clientX} y Y=${event.clientY}`));
    formulario.addEventListener("submit",mostrarDatos);
}
/*
* El DOM lo que hace es crear una rama de acciones 
*   let boton para saber que es una variable que va a guardar
*   querySelectorAll hace un array de los queryselector que encontramos 
    Document.body.innerHTML = x, esta funcion lo que hae es que todas las cosas que encontramos en el body del documento nos lo "cargamos"
    entonces hay que utilizar document.getElementById("x").innerHTML="x";
*
*
*
*
*/

window.addEventListener("DOMContentLoaded", load, false);