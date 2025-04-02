function exp1(){
    /*let expReg_fecha=/\b\d{2},\d{2},\d{4}\b/;
    let palabra=document.getElementById("Input").value;
    if(expReg_fecha.test(input)){
        document.getElementById("Comparacion").innerHTML = input+ "es una fecha<br>";
    }else{
        document.getElementById("Comparacion").innerHTML = input+ "no es una fecha<br>";
    }*/
    let expReg_fecha=/\b(0[1-9]|[1|2][\d]|3[0|1]),(0[\d]|1[0-2]),(19|20\d{2})\b/;
    let fecha=prompt("Escribe una fecha");
    if(expReg_fecha.test(fecha)){
        document.writeln("La fecha es correcta: "+fecha);
        let FechaPorPartes=fecha.split(",");
        let day = parseInt(FechaPorPartes[0]);
        let month = parseInt(FechaPorPartes[1]);
        let years = parseInt(FechaPorPartes[2]);
        let fechaIntroducida= new Date(day,month,years);
        
    }else{
        document.writeln("La fecha no es correcta: "+cadena);
    }
    let expReg_correo=/\b\w+\@\w+\w{2,3}\b/;
    let cadena1=prompt("Escribe un correo");
    if(expReg_correo.test(cadena1)){
        document.writeln("El correo es correcto: "+cadena1);
    }else{
        document.writeln("El correo no es correcto: "+cadena1);
    }
}

function load(){
    exp1();

}
window.addEventListener("DOMContentLoaded", load, false);
