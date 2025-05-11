let precioRepostaje=1.26;
let numerosMatricula ="0123456789";
let abecedario = "abcdefghijklmnopqrstuvwxyz";
function comprobacion(matricula){
    let letras=0;
    let numeros=0;
    for(let i =0;i<matricula.length;i++){
        if (matricula[i] === abecedario["26"]){
            letras++;
        }else if(matricula[i]===numerosMatricula["10"]){
            numeros++;
        }else{
            alert("ERROR, has introducido un digitos no permitidos");
        }
    }
    if(letras != 3 || numeros != 4){
        alert("ERROR, has introducido mas letras o mas numeros de las debidas");
    }else{
        document.getElementById("matriculaComprobada").textContent="La matricula "+matricula+" es correcta";
    }
    console.log(matricula);
}
function repostaje(ev){
    let calculo=0;
    calculo=precioRepostaje*litro;
    console.log(calculo);
    document.getElementById("calculoRepostaje").textContent="El repostaje del coche que tiene "+litro+" de capacidad, su costo es de "+calculo;
}


function carga(){
    //Ejercicio 1
    let matricula=document.getElementById(".Matricula");
    let litro=document.getElementById(".litros");
    matricula.addEventListener("keydown",comprobacion);
    litro.addEventListener("keydown",repostaje);
    //Ejercicio 2

    //
}
window.addEventListener("DOMContentLoaded", carga);
