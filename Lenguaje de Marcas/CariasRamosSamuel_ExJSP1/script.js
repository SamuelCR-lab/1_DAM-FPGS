let precioRepostaje=1.26;
let numerosMatricula ="0123456789";
let abecedario = "abcdefghijklmnopqrstuvwxyz";
function comprobacion(matricula){
    let letras=0;
    let numeros=0;
    if(matricula.length != 7){
        alert("ERROR, la matricula no tiene el tamaño correcto");
        return false;
    }
    for(let i =0;i<matricula.length;i++){
        if (abecedario.includes(matricula[i])){
            letras++;
        }else if(numerosMatricula.includes(matricula[i])){
            numeros++;
        }else{
            alert("ERROR, has introducido un digitos no permitidos");
            return false;
        }
    }
    console.log("letras");
    console.log("numeros");
    if(letras != 3 || numeros != 4){
        alert("ERROR, has introducido mas letras o mas numeros de las debidas");
        return false;
    }else{
        document.getElementById("matriculaComprobada").textContent="La matricula "+matricula+" es correcta";
        return true;
    }


}
function random(){
    let numero = Math.floor(Math.random()*3);
    return numero;
}
function repostaje(litro){
    let calculo=0;
    calculo=precioRepostaje*litro;
    console.log(calculo);
    document.getElementById("calculoRepostaje").textContent="El repostaje del coche que tiene "+litro+" de capacidad, su costo es de "+calculo+" euros";
}
function trileros(event){
    let i = event.target.value[random(1)];
    document.getElementById("");
    if(botones [i]===event.value.target){
        document.getElementById("resultado").textContent="Enhorabuena has acertado";
        document.getElementById(event.target.value).textContent=accionamiento;
    }else{
        intentos--;
        document.getElementById("resultado").textContent="Te quedan "+intentos;
        event.target.disabled=true;
    }
}

function carga(){
    //Ejercicio 1
    
    let calculo=document.getElementById("Calcular");
    calculo.addEventListener("click",function(){
        let matricula=document.getElementById("Matricula").value;
        let litro=parseInt(document.getElementById("Litros").value);
        
        if(comprobacion(matricula)&& !isNaN(litro)){
            repostaje(litro);
        }else{
            alert ("ERROR, no se puede realizar el calculo correctamente si no escribes bien la matricula o los litros.")
        }
    });
    //Ejercicio 2


    //Ejercicio 3
    let botones = document.querySelectorAll(".Trileros");
    botones.forEach(boton =>{boton.addEventListener("click",trileros)});
    //Ejercicio 4
    
    

}
window.addEventListener("DOMContentLoaded", carga);
