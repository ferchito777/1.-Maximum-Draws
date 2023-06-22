# 1.-Maximum-Draws

DESCRIPCIÓN DEL PROBLEMA Y SOLUCIÓN

Una persona se está preparando para irse y necesita un par de calcetines a juego. Si hay n colores de calcetines en el cajón, ¿cuántos calcetines deben quitarse para estar seguros de tener un par que combine?

Ejemplo n=2

Hay 2 colores de calcetines en el cajón. Si quitan 2 calcetines, es posible que no coincidan. El número mínimo para asegurar el éxito es 3.

Función descriptiva

Complete la función de sorteos máximos en el editor a continuación.

maxDraws tiene el siguiente parámetro:

int n: el número de colores de calcetines
Devoluciones

int: el número mínimo de calcetines a quitar para garantizar un par a juego.
Formato de entrada
La primera línea contiene el número de casos de prueba, t.
Cada una de las siguientes t líneas contiene un número entero n .

Restricciones
1≤t≤1000
0≤n≤10^6

Entrada de muestra

2
1
2
Salida de muestra

2
3
Explicación
Caso 1: Solo hay 1 color de calcetín en el cajón. Cualquier 2 coincidirá.
Caso 2: Hay 2 colores de calcetines en el cajón. Los dos primeros eliminados pueden no coincidir. Se deben quitar al menos 3 calcetines para garantizar el éxito.
