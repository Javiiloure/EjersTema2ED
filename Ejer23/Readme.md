javioure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ cat > build.xml

Programa que usa biblioteca aritmetica.
<!-- Creamos directorios para el resultado de la compilación --> 
<target name="init">
  <mkdir dir="${classes.dir}"/>
  <mkdir dir="${jar.dir}"/>
</target>


<!-- Indicamos directorio donde se hallan las clases --> 
<path id="compile.classpath">
    <fileset dir="aritmetica" />
</path>


<!-- Compilamos --> 
<target name="compile" depends="init" >
  <javac srcdir="${src.dir}" destdir="${classes.dir}" includeantruntime="false" debug="true" >
    <classpath refid="compile.classpath"/>
  </javac>
</target>


<!-- Creamos archivo .jar --> 
<target name="jar" depends="compile">
  <jar destfile="${jar.dir}/${ant.project.name}.jar" basedir="${classes.dir}">
    <manifest>
      <attribute name="Main-Class" value="${main-class}"/>
    </manifest>
  </jar>
</target>


<!-- Ejecutamos --> 
<target name="run" depends="jar">
  <java jar="${jar.dir}/${ant.project.name}.jar" fork="true"/>
</target>


<!-- Borramos archivos generados --> 
<target name="clean">
  <delete dir="build" />
</target>


<!-- Mostramos ayuda --> 
<target name="help">      
  <echo level="info">
    Objetivos válidos para ant:

      jar (el objetivo por defecto si no se indica nada)
      compile
      run
      clean
      help
  </echo>
</target>
javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ cat > Main.java

import aritmetica.Aritmetica;

public class Main {

private static final int NUM1 = 5; private static final int NUM2 = 2;

public static void main (String[] args) { System.out.println ("Dados los números " + NUM1 + " y " + NUM2 ); System.out.println ("La suma es " + Aritmetica.suma(NUM1, NUM2) ); System.out.println ("La resta es " + Aritmetica.resta(NUM1, NUM2) ); System.out.println ("La multiplicación es " + Aritmetica.multiplicacion(NUM1, NUM2) ); System.out.println ("La división es " + Aritmetica.division(NUM1, NUM2) ); }

}

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ ant

Buildfile: /home/javiloure/EjersTema2ED/Ejer23/build.xml

init: [mkdir] Created dir: /home/javiloure/EjersTema2ED/Ejer23/build/classes [mkdir] Created dir: /home/javiloure/EjersTema2ED/Ejer23/build/jar

compile: [javac] Compiling 1 source file to /home/javiloure/EjersTema2ED/Ejer23/build/classes

BUILD FAILED /home/aviloure/EjersTema2ED/Ejer23/build.xml:31: /home/javiloure/EjersTema2ED/Ejer23/aritmetica does not exist.

Total time: 1 second

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ Buildfile: /home/jose/Proyectos/DAW1-ED-Bibliotecas/java/build.xml

Buildfile:: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ init:

Orden «init:» no encontrada. Quizá quiso decir:

la orden «init» del paquete deb «systemd-sysv (245.4-4ubuntu3.13)»

Pruebe con: sudo apt install

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ [mkdir] Created dir: /home/jose/Proyectos/DAW1-ED-Bibliotecas/java/build/classes [mkdir]: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ [mkdir] Created dir: /home/jose/Proyectos/DAW1-ED-Bibliotecas/java/build/jar [mkdir]: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ compile:

Orden «compile:» no encontrada. Quizá quiso decir:

la orden «compiler» del paquete deb «eclipse-titan (6.6.1-1)»

Pruebe con: sudo apt install

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ [javac] Compiling 2 source files to /home/jose/Proyectos/DAW1-ED-Bibliotecas/java/build/classes [javac]: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ jar:

Orden «jar:» no encontrada. Quizá quiso decir:

la orden «jar» del paquete deb «openjdk-11-jdk-headless (11.0.11+9-0ubuntu220.04)» la orden «jar» del paquete deb «default-jdk (2:1.11-72)» la orden «jar» del paquete deb «openjdk-16-jdk-headless (16.0.1+9-120.04)» la orden «jar» del paquete deb «openjdk-8-jdk-headless (8u292-b10-0ubuntu120.04)» la orden «jar» del paquete deb «fastjar (2:0.98-6build1)» la orden «jar» del paquete deb «openjdk-13-jdk-headless (13.0.7+5-0ubuntu120.04)» la orden «jar» del paquete deb «openjdk-17-jdk-headless (17+35-1~20.04)»

Pruebe con: sudo apt install

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ [jar] Building jar: /home/jose/Proyectos/DAW1-ED-Bibliotecas/java/build/jar/programa.jar [jar]: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ BUILD SUCCESSFUL

BUILD: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ Total time: 2 seconds Total: orden no encontrada

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ cd ..

javiloure@javiloure-VirtualBox:~/EjersTema2ED$ cd Ejer19

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ ls

aritmetica Main.class Main.java readme.md

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ cp -r aritmetica/ ../Ejer23/

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer19$ cd ..

javiloure@javiloure-VirtualBox:~/EjersTema2ED$ cd Ejer23

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ ls

aritmetica build build.xml Main.java readme.md

javiloure@javiloure-VirtualBox:~/EjersTema2ED/Ejer23$ ant run

Buildfile: /home/javiloure/EjersTema2ED/Ejer23/build.xml

init:

compile: [javac] Compiling 2 source files to /home/javiloure/EjersTema2ED/Ejer23/build/classes

jar: [jar] Building jar: /home/javiloure/EjersTema2ED/Ejer23/build/jar/programa.jar

run: [java] Dados los números 5 y 2 [java] La suma es 7 [java] La resta es 3 [java] La multiplicación es 10 [java] La división es 2.5

BUILD SUCCESSFUL

Total time: 3 seconds
