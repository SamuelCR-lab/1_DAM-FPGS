function exp1(){
//let expReg=/^A/;
let palabra ="hola";
let expReg=/^[A|a]/;
let palabra1 ="arbol";

let expReg1=/o$/;
let palabra2 ="lapicero";
let expReg2=/\bhola\b/;
let frase="Fulanito de tal, hola como estas";
let expReg3=/[A-Za-z]+/;
let expReg4=/[0-9]+/;
let expReg5=/\b[0-9]{2,4}\b/;///\b\d{2}\b/ tambien valdria
let numeros="1234";

if(expReg.test(palabra)){
    document.writeln("<h2>Empieza por A o a "+palabra+"</h2>");
}else{
    document.writeln("<h2>No empieza por A o a "+palabra+"</h2>");
}
if(expReg.test(palabra1)){
    document.writeln("<h2>Empieza por A o a "+palabra1+"</h2>");
}else{
    document.writeln("<h2>No empieza por A o a "+palabr1+"</h2>");
}
if(expReg1.test(palabra2)){
    document.writeln("<h2>Termina por o "+palabra2+"</h2>");
}else{
    document.writeln("<h2>No termina por o "+palabra2+"</h2>");
}
if(expReg2.test(frase)){
    document.writeln("<h2>True --> "+frase+", contiene hola </h2>");
}else{
    document.writeln("<h2>False --> "+frase+" no contiene hola </h2>");
}
if(expReg3.test(frase)){
    document.writeln("<h2>True --> "+frase+" </h2>");
}else{
    document.writeln("<h2>False --> "+frase+" </h2>");
}
if(expReg4.test(numeros)){
    document.writeln("<h2>True --> "+numeros+" </h2>");
}else{
    document.writeln("<h2>False --> "+numeros+" </h2>");
}
if(expReg5.test(numeros)){
    document.writeln("<h2>True --> "+numeros+" </h2>");
}else{
    document.writeln("<h2>False --> "+numeros+" </h2>");
}
}



function load(){
    exp1();

}
window.addEventListener("DOMContentLoaded",load,false);