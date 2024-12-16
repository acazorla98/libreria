<tt>
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░  ░░░░░░░░        ░░       ░░░        ░░        ░
▒  ▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒▒  ▒▒▒▒  ▒▒  ▒▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒
▓  ▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓       ▓▓▓      ▓▓▓▓▓▓▓  ▓▓▓▓
█  ███████████  █████  ████  ██  ███████████  ████
█        ██        ██       ███  ███████████  ████
██████████████████████████████████████████████████
 </tt>

En este proyecto (el primero del cursus de 42) se pretende replicar el funcionamiento de varias funciones de las librerias basicas de C, con el objetivo de comprender su funcionamiento.

Además durante el resto del cursus se permitirá el uso de la librería que crees para algunos proyectos, por lo que el trabajo desarrollado en este proyecto es de suma importancia en el futuro.

Ya que estas herramientas son esenciales para realizar esos proyectos futuros, la parte bonus de Libft es practicamente obligatoria, puedes ignorarla ahora, pero tarde o temprano la vas a tener que hacer, por no perder el tiempo tontamente creo que es aconsejable hacerla cuanto antes.


las primeras funciones son replicas de funciones muy basicas:
<tt>
• isalpha \\
• isdigit  |
• isalnum  |-> comprueba si una variable dada cumple los parametros
• isascii  |            *devuelve 1 si correcto
• isprint /
• strlen  -> devuelve su longitud de un hilo
• memset  -> llena un espacio en memoria con un valor dado
• bzero   -> llena un espacio en memoria con caracters nulos
• memcpy  -> copia n caracteres de la fuente en el destino, y devuelve el destino
• memmove -> copia de la fuente a destino
• strlcpy -> copia un hilo incluyendo su NULL a otro hilo
• strlcat -> concatena dos hilos y añade NULL al final
• toupper \\-> convierte caracteres de mayuscula a minuscula y viceversa
• tolower /
• strchr  \\-> busca la primera aparición de un caracter en un hilo dado
• strrchr /
• strncmp -> compara dos hilos
• memchr  -> busca el primer byte c en los primeros count bytes de buf
• memcmp  -> compara el recuento de bytes de buf1 y buf2
• strnstr -> busca la secuencia de carácteres contenida en la subcadena en una cadena de texto
• atoi    -> convierte alpha a integral
• calloc  -> asigna un espacio en memoria inicializada en 0
• strdup  -> duplica un hilo y debuelve un puntero al duplicado
</tt>

funciones adicionales:
<tt>
• substr   -> crea un subhilo
• strjoin  -> crea un hilo a partir de la union de dos
• strtrim  -> elimina los caracteres seleccionados de el principio y final de un hilo
• split    -> separa un hilo en subhilos usando un caracter como delimitador
• itoa     -> convierte integral a alpha
• strmapi  \\-> aplica una funcion dada a todos los caracteres de un hilo
• striteri /
• putchar_fd \\
• putstr_fd   |-> pone el file descriptor elegido lo que sea necesario
• putendl_fd  |
• putnbr_fd  /
</tt>
