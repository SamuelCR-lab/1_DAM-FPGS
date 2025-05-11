function exp1(){
    /*let expReg_fecha=/\b\d{2},\d{2},\d{4}\b/;
    let palabra=document.getElementById("Input").value;
    if(expReg_fecha.test(input)){
        document.getElementById("Comparacion").innerHTML = input+ "es una fecha<br>";
    }else{
        document.getElementById("Comparacion").innerHTML = input+ "no es una fecha<br>";
    }*/
        let expReg_fecha = /\b(0[1-9]|[12][0-9]|3[01]),(0[1-9]|1[0-2]),(19|20)\d{2}\b/;
        let fecha = prompt("Introduce una fecha en formato dd,mm,aaaa:");
    
        if (expReg_fecha.test(fecha)) {
            let partes = fecha.split(",");
            let dia = parseInt(partes[0]);
            let mes = parseInt(partes[1]) - 1; 
            let anio = parseInt(partes[2]);
            let fechaIntroducida = new Date(anio, mes, dia);
            let fechaActual = new Date();

            //La diferencua la devuelve en milisegundos
            let diferencia = fechaActual - fechaIntroducida;

            let dias = Math.floor(diferencia / (1000 * 60 * 60 * 24));
            document.writeln("Han pasado "+dias+" días desde la fecha ingresada.");
        } else {
            document.writeln("Fecha no es válida.");
        }
}
function exp2(){
    let expReg_correo=/\b\w+\@\w+\w{2,3}\b/;
    let correo = prompt("Introduce un correo electrónico:");
    //let partesCorreo=correo.split("@");
    let resultado = correo.match(expReg_correo);
    if (resultado) {
        document.writeln("Correo es válido. El usuario tiene "+resultado[1].length+" letras.");
    } else {
        //let partesCorreo=correo.split("@");
        let error = correo.includes("@") ? "dominio incorrecto" : "usuario incorrecto";
        document.writeln("Correo inválido. Error en el "+error);
    }
}
function exp3(){
    let expReg_telefono = /^(\d{3})-\d{2}-\d{4}-$/;
    let telefono = prompt("Introduce un teléfono de este formato 111-11-1111:");
    let resultado = telefono.match(expReg_telefono);
    if (resultado) {
        let prefijo = resultado[1];
        let origen = prefijo == "91" ? "Madrid" : "Desconocido";
        document.writeln("Teléfono válido. Origen: "+origen);
    } else {
        document.writeln("Teléfono inválido. Tiene "+telefono.length+" caracteres.");
    }
}
function exp4(){
    let texto = prompt("Introduce una oración:");
    let palabra = prompt("Introduce la palabra a contar:");

    //let palabra="hola";
    //let partes=texto.split(palabra);
    //return partes.length(-1);
    //
    let expReg_palabra = new RegExp(`\\b${palabra}\\b`, "gi");
    let coincidencias = texto.match(expReg_palabra);

    let total = coincidencias ? coincidencias.length : 0;
    document.writeln("La palabra "+palabra+" aparece "+total+" veces.");
}
function exp5(){
    let texto = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    let resultado = texto.replace(/ipsum/, "dolor");
    document.writeln(resultado);
}
function exp6(){
    let expReg_contrasena = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d).+$/;
    let contrasena = prompt("Introduce una contraseña:");
    document.writeln(expReg_contrasena.test(contrasena) ? "Contraseña válida" : "Contraseña inválida");
}
function load(){
    exp1();
    exp2();
    exp3();
    exp4();
    exp5();
    exp6();

}
window.addEventListener("DOMContentLoaded", load, false);
