    
    
    function Ejercicio1(){
        alert("Hello World");
    }
    function Ejercicio2(){
        document.writeln("Hello World");
    }
    function Ejercicio3(){
        let a = 3;
        let b = 5; 
        suma = a+b;
        console.log("La suma de 3 + 5 = " + suma);
    }
    function Ejercicio4(){
    let nombre = prompt("Escribe tu nombre Usuario");
    document.writeln("Hola " +nombre);
    }
    function Ejercicio5(){
        let numero1=prompt("Escribe un número");
        let numero2=prompt("Escribe un segundo número");
        let resultado =parseInt(numero1)+parseInt(numero2);
        document.writeln("El resultado es: "+resultado);
    }
    function  Ejercicio6(){
        let numero1=parseInt(prompt("Escribe un número"));
        let numero2=parseInt(prompt("Escribe un segundo número"));
        if(numero1>numero2){
            document.writeln("El número:" +numero1+ "es mayor que" +numero2+ "<br>");
        }else if(numero2>numero1){
            document.writeln("El número:" +numero2+ "es mayor que" +numero1+ "<br>");
            }else{
            document.writeln("Los números:" +numero1+ " " +numero2+ "Son iguales <br>");
            }
    }
    function  Ejercicio7(){
        let numero1=parseInt(prompt("Ej7: Escribe un número"));
        let numero2=parseInt(prompt("Ej7: Escribe un segundo número"));
        let numero3=parseInt(prompt("Ej7: Escribe un tercer número"));
        if(numero1>numero2){
            //QUEDA POR COMPARAR SU NUMERO 1 ES MAYOR QUE 3
            if(numero1>numero3){
                if(numero2>numero3){
                    console.log("El numero mayor es: "+numero1+"");
                }else if(numero2>numero3){
                    //numero2<numero3 y numero2=numero3
                    console.log("El numero mayor es: "+numero1+ "y" +numero2+ " es mayor que" +numero3);
                }else{
                    console.log("El numero mayor es: "+numero1+ "y" +numero2+ " " +numero3+ "son iguales");
                }
            }
        }
        
    }
    //El === es para la comparqacion o comprobacion que hacemos sea igual de tipo de dato si no la comparacion ya es falsa, con el == coge cualquier tipo de dato y lo compara ya sea int float o char 
    function Ejercicio8(){
        let numero1=parseInt(prompt("Ej7: Escribe un número"));
        if(numero1%2==0){
            console.log("Divisible entre 2");
        }else{
            console.log("No es divisible entre 2")
        }
    }
    function Ejercicio9(){
        let frase=prompt("Escribe una frase");
        let contador=0;
        for(let i=0;i<frase.length;i++){
            if(frase[i].toLowerCase()==='a'){
                contador++;
            }
        }
    }
    function Ejercicio9SPLIT(){
        let frase=prompt("Escribe una frase");
        let contador=frase.split(' ').length-1;
        

    }
    function Ejercicio9INCLUDE(){
        let frase=prompt("Escribe una frase");
        let letra='a';
        let contador=0;
        for(let i of frase){
            if(frase.includes(letra)){
                contador++;
            }
        }
    }
    function Ejercicio10(){
        let frase=prompt("Escribe una frase");
        let vocales="aeiouAEIOU";
        let vocalesEncontradas="";
        for (let char of frase){
            if(vocales.includes(char)){
                if(!vocalesEncontradas.includes(char)){
                    vocalesEncontradas +=char;
                }
            }
        }
        document.writeln("Vocales = "+vocalesEncontradas);

    }
    function Ejercicio11(){
        let frase=prompt("Escribe una frase: ");
        let vocales="aeiouAEIOU";
        let vocalesEncontradas="";
        let contador=0;
        for (let char of frase){
            if(vocales.includes(char)){
                if(!vocalesEncontradas.includes(char)){
                    vocalesEncontradas +=char;
                }
                contador++;
            }
        }
        document.writeln("Vocales = "+vocalesEncontradas+ " y contiene " +contador+ " de vocales en total");

    }
    function Ejercicio12(){
        let frase=prompt("Escribe una frase: ");
        let vocales="aeiou";
        let vocalesEncontradas={a:0,e:0,i:0,o:0,u:0};
        for(let char of frase){
            if(vocales.includes(char.toLowerCase())){
                vocalesEncontradas[char.toLocaleLowerCase()]++;
            }
        }

        document.writeln("Vocales "+JSON.stringify(vocalesEncontradas));
    }
    function Ejercicio14(){
        let num=parseInt(prompt("Introduce un número"));
        let divisible = [];
        if(num % 2===0) divisible.push("2");
        if(num % 3===0) divisible.push("3");
        if(num % 5===0) divisible.push("5");
        if(num % 7===0) divisible.push("7");
        if (divisible.length>0){
            document.writeln(divisible.join(", "));
        }else{
            document.writeln("No es divisible");
        }

    }

    //Funcion que llama a todas las funciones y funciona como el 
    function carga(){
        /*Ejercicio1();
        Ejercicio2();
        Ejercicio3();
        Ejercicio4();
        Ejercicio5();
        Ejercicio6();
        Ejercicio7();
        Ejercicio8();
        Ejercicio9();
        Ejercicio9SPLIT();
        Ejercicio9INCLUDE();
        Ejercicio10();
        Ejercicio11();*/
        Ejercicio12();
        Ejercicio14();
    }



    window.addEventListener("DOMContentLoaded",carga);



    
    //Ejercicio 5

    //Ejercicio 6

    //Ejercicio 7
   