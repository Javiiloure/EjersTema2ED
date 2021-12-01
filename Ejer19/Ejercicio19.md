## 19. Bibliotecas. Crea una biblioteca dinámica en Java que proporciona las funciones para sumar, restar, multiplicar y dividir 2 números enteros. Crea un programa que haga uso de ella y comprueba que se ejecuta correctamente.

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ mkdir aritmetica

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ cat > aritmetica/Aritmetica.java

package aritmetica;

public class Aritmetica {

public static int suma (int sumando1, int sumando2) { return (sumando1+sumando2); }

public static int resta (int minuendo, int sustraendo) { return (minuendo-sustraendo); }

public static int multiplicacion (int numero1, int numero2) { return (numero1*numero2); }

public static int division (int dividendo, int divisor) { return (dividendo/divisor); }

}

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ javac aritmetica/Aritmetica.java

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ jar cvf aritmetica.jar aritmetica/*.class manifiesto agregado agregando: aritmetica/Aritmetica.class(entrada = 434) (salida = 265)(desinflado 38%)

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ sudo mv aritmetica.jar /usr/lib/jvm/java-8-openjdk-amd64/jre/lib/ext/aritm.jar

[sudo] contraseña para javiloure:

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ej19$ cat > Main.java import aritmetica.Aritmetica;

public class Main {

private static final int NUM1 = 6; private static final int NUM2 = 3;

public static void main (String[] args) { 
System.out.println ("Dados los números " + NUM1 + " y " + NUM2 ); 
System.out.println ("La suma es " + Aritmetica.suma(NUM1, NUM2) );
System.out.println ("La resta es " + Aritmetica.resta(NUM1, NUM2) );
System.out.println ("La multiplicación es " + Aritmetica.multiplicacion(NUM1, NUM2) ); 
System.out.println ("La división es " + Aritmetica.division(NUM1, NUM2) ); }
}

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ javac Main.java

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ java Main

Dados los números 6 y 3

La suma es 9

La resta es 3

La multiplicación es 18

La división es 2
