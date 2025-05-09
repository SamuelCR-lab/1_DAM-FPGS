let abecedario="abcdefghijklmnopqrstuvwxyz";
let letraAdivinar;
let coordenadaI;
let coordenadaJ;
let matriz=[[0,1],[0,0]];
function codificar(letra){
    let numero=0;
    let esta=false;
    while(!esta){
        if (abecedario[numero]===letra){
            console.log(abecedario[numero]);
            esta=true;
        }else{
            if(numero === abecedario.length){
                numero=-1;
                esta=true;
            }else{
                numero++;
            }
        }
    }
    return numero;
}
function codificar2(event){
    let salida =document.getElementById("cajaTextoCodificado");
    let letra=event.key;
    salida.textContent+=codificar(letra)+"-";
}
function random(numero){
    return Math.floor(Math.random()*(numero+1));
}
function colocarCasillas(event){
    let letra=event.target.value;
    let i=event.target.name[0];
    let j=event.target.name[1];
    if (matriz [i][j]===1){
        document.getElementById(valor)

    }

    console.log(i+","+j+"->"+letra);
    if(i==coordenadaI && j==coordenadaJ && letra==letraAdivinar){
        document.getElementById(event.target.name).textContent=letraAdivinar;
    }else{
        alert("has fallado");
    }
}
function generarDatos(){
    letra=abecedario[random(27)];
    coordenadaI=random(1);
    coordenadaJ=random(1);
}
function principal(){
    let intervalo

    let codigo=document.getElementById("codificacion");
    codigo.addEventListener("keydown",codificar2);
    //ejercicio 2
    generarDatos();
    intervalo=setInterval(generarDatos,2000);
    let letras=document.querySelectorAll(".letra");
    letras.forEach(i=>i.addEventListener("keydown",colocarCasillas)
    );
    
}
window.addEventListener("DOMContentLoaded",principal,false);