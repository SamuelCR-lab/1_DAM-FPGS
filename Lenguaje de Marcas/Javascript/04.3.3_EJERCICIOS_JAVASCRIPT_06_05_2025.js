//Ejercicio Hundir la Flota
let barcos =[4,3,2,1];
let tableroUsuario;
/*function esBarco2(posicion, posicion2,m){
   if(m[i][j]==m[][])
}*/
function guardarBarco(event){
   let i = event.target.id[1];
   let j = event.target.id[2];
   if (i=event.target.id[0]==='u'){
      tableroUsuario[i][j]="X";
   }
   console.log("la posicion guardada es: "+event.target.id);;
}
function Tableros(){
   return Math.floor(Math.random()*(number+1))
}

function load(){
   let botonTabla = document.querySelectorAll(".boton");
   botonTabla.forEach(i=>i.boton.addEventListener("keydown",guardarBarco))


}




window.addEventListener("DOMContentLoaded", load);