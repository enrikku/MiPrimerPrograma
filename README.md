# Mi Primer Programa

Este es el primer programa que escribí en mi vida, en C++ (septiembre de 2020).

Es un pequeño **quiz en la consola** (en catalán) con 10 preguntas sobre mí: mi nombre, mi perro, el color de mis ojos, mi altura, mi asignatura preferida... Cada respuesta correcta suma un punto y cada fallo resta uno. Todo decorado con mucho arte ASCII. Al final te dice si has aprobado o suspendido.

Lo guardo tal cual lo escribí, sin corregir nada, como recuerdo. 🙂

## Cómo compilarlo y ejecutarlo

Necesitas un compilador de C++ (por ejemplo `g++` de [MinGW-w64](https://www.mingw-w64.org/) en Windows, o el de Visual Studio).

```bash
g++ main.cpp -o MiPrimerPrograma
./MiPrimerPrograma
```

En Windows, para que se vean bien los acentos y los caracteres especiales del arte ASCII, ejecuta antes en la consola:

```bash
chcp 65001
```
