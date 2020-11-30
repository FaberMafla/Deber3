/*
 * UNIVERSIDAD TECNICA DEL NORTE
 *      FICA-CITEL
 *  SISTEMAS EMBEBIDOS
 * Nombre:Faber Mafla
 *    DEBER #3
 Realizar un programa de juego de preguntas.
 Se debe tener mínimo 8 preguntas que deben observarse en orden aleatorio.
 La forma de visualización es por medio de comunicación serial. 
 Su respuesta solo debe ser "SI" y "NO" ingresadas de la misma forma por comunicación serial.
Al final de mostrar solo 5 de las 8 preguntas. 
Se presentan el puntaje (respuestas acertadas) en un display.
 */
String Pregunta1=" ¿El covid 19 es una enfermedad infecciosa?";
String Pregunta2="¿Los sontomas habituales son hinchazon de manos y pies?";
String Pregunta3="¿Un cuadro grave en la enfermedad presenta dificultad para respirar? ";
String Pregunta4="¿Las personas con afecciones medicas previas tienen mas probabilidad de presentar cuadros mas graves ?";
String Pregunta5="¿La covid 19 se propaga por el aire de manera rapida?";
String Pregunta6="¿Es posible contagiarse de COVID 19 por contacto con una persona que no presente ningun sintoma?";
String Pregunta7="¿Practicar la higiene respiratoria y de las manos no es una medide de bioseguridad?";
String Pregunta8="¿El aislamiento es una medida importante que adoptan las personas con sintomas de COVID 19 para evitar infectar a otras personas?";
String respuesta1="si";
String respuesta2="no";
String respuesta3="si";
String respuesta4="si";
String respuesta5="no";
String respuesta6="si";
String respuesta7="no";
String respuesta8="si";
int cont=0;
int cont2=0;
int aleatorio;

int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;
int g=0;
int h=0;

int bloqueo=0;
String Dato;
int puntaje;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
Serial.begin(9600);
Serial.println("Respuesta alas preguntas con SI o NO");
Serial.println("");
 delay(500);

}

void loop() {
  aleatorio=random(1,9);
 delay(500);
 // LEER RESPUESTA
 if(Serial.available()>0 && cont<6){
  Dato=Serial.readString();
  Serial.println("");
  
  if(aleatorio==1 ){
    if(Dato==respuesta1){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0;
            }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
   if(aleatorio==2 ){
    if(Dato==respuesta2){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0  ;
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
   if(aleatorio==3 ){
    if(Dato==respuesta3){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0;
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
   if(aleatorio==4 ){
    if(Dato==respuesta4){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0;
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
  if(aleatorio==5 ){
    if(Dato==respuesta5){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0  ;
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
    
  }
  if(aleatorio==6 ){
    if(Dato==respuesta6){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0  ;
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
  if(aleatorio==7 ){
    if(Dato==respuesta7){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0  ;
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
  if(aleatorio==8){
    if(Dato==respuesta8){
      puntaje =puntaje+1;
      cont2=cont2+1;
      bloqueo=0 ; 
      }
    else{
      cont2=cont2+1;
      bloqueo=0;
    }
  }
 }
 
 if(cont<5 && bloqueo == 0 ){
if(aleatorio==1 && a==0){
  Serial.println(Pregunta1);
  bloqueo=1;
  cont=cont+1;
  a=1;  
}
if(aleatorio==2 && b==0){
 Serial.println(Pregunta2);
 bloqueo=1;
 cont=cont+1;
 b=1 ;
}
if(aleatorio==3 && c==0){
  Serial.println(Pregunta3);
  bloqueo=1;
  cont=cont+1;
  c=1;
}
if(aleatorio==4 && d==0){
 Serial.println(Pregunta4);
 bloqueo=1;
 cont=cont+1;
  d=1;
}
if(aleatorio==5 && e==0){
 Serial.println(Pregunta5);
 bloqueo=1;
 cont=cont+1;
 e=1 ;
}
if(aleatorio==6 && f==0){
 Serial.println(Pregunta6);
 bloqueo=1;
 cont=cont+1;
 f=1 ;
}
if(aleatorio==7 && g==0){
 Serial.println(Pregunta7);
 bloqueo=1;
 cont=cont+1;
  g=1;
}
if(aleatorio==8 && h==0){
Serial.println(Pregunta8);
bloqueo=1;
cont=cont+1;
 h=1 ;
 }
}
// Fin respuestas
if(cont2==5){
  Serial.println("");
  Serial.print("Su puntaje es:");
  Serial.println(puntaje);
  Serial.print("/5");
  Serial.println("FIN DEL JUEGO");
  ver();
  cont2=0;
  
}
}
// DISPLAY
void ver (){
switch(puntaje){
  
case 0 :
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
break;
case 1 :
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
break;
case 2 :
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
break;
case 3 :
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
break;
case 4 :
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
break;
case 5 :
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
break;

}
}
