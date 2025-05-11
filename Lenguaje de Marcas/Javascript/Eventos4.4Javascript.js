let numeroAdivinar=0;
let veces =0;
let matriz=[[0,0,0],[0,0,0],[0,0,0]];
let intentos = 3;
function random(numero){
    return Math.floor(Math.random()*(numero+1));
}
function generarNumeroAdivinar(){
    numeroAdivinar=random(9);
    document.getElementById("numeroAdivinar").textContent=numeroAdivinar;
}
function generarVeces(){
    document.getElementById("veces").textContent=veces;
}
function rellenarMatriz(){
    for(let i=0;i<3;i++){
        for(let j=0;j<3;j++){
            matriz[i][j]=random(9);
            if(matriz[i][j]==numeroAdivinar){
                veces++;
            }
        }
    }
    if(veces==0){
        matriz[0][1]=numeroAdivinar;
        veces=1;
    }
    visualizarMatriz();
}
function visualizarMatriz(){
    for(let i=0;i<3;i++){
        for(let j=0;j<3;j++){
            console.log(matriz[i][j]);
        }
    }
}
function comprobacion(event){
    let i=event.target.value[0];
    let j=event.target.value[1];
    if(intentos == 0){
        document.querySelectorAll(".boton").event.target.disabled=true;
    }else{
        if(matriz[i][j]===numeroAdivinar) {
            document.getElementById(event.target.value).textContent=matriz[i][j];
        }else{
            //alert("El número no se encontraba en esa posición");
            console.log("Valor de la Matriz: "+matriz[i][j]);
            event.target.disabled=true;
        }
            document.getElementById("intentos").textContent = --intentos;
    }
}
function load(){
    rellenarMatriz();
    generarNumeroAdivinar();
    generarVeces();
    let botonesNumeros = document.querySelectorAll(".boton");
    botonesNumeros.forEach(boton=>boton.addEventListener("click",comprobacion));


}




window.addEventListener("DOMContentLoaded",load);