# Proyecto C - Conversor de Moneda

## Descripción
Este proyecto es un conversor de moneda desarrollado en C, que permite convertir de Quetzales a Dólares y Euros.

## Prerrequisitos
Para ejecutar este proyecto, asegúrese de tener instalados los siguientes paquetes en su sistema Ubuntu.

### 1. Instalar GIT
Git es necesario para la gestión del código fuente.
```bash
sudo apt update && sudo apt install git -y
```
Verifique la instalación con:
```bash
git --version
```
Ejemplo de salida:
```
git version 2.43.0
```

### 2. Instalar Apache 2
Apache es requerido para servir archivos web si se necesita integración con un frontend.
```bash
sudo apt install apache2 -y
```
Verifique la instalación con:
```bash
apache2 -v
```
Ejemplo de salida:
```
Server version: Apache/2.4.58 (Ubuntu)
Server built:   2024-10-02T12:40:51
```

### 3. Instalar PHP (opcional, si se requiere integración con PHP)
```bash
sudo apt install php -y
```
Verifique la instalación con:
```bash
php -v
```
Ejemplo de salida:
```
PHP 8.3.6 (cli) (built: Dec  2 2024 12:36:18) (NTS)
```

### 4. Instalar Build-Essential
Este paquete proporciona herramientas esenciales para compilar programas en C.
```bash
sudo apt install build-essential -y
```
Verifique la instalación con:
```bash
gcc --version
```
Ejemplo de salida:
```
gcc (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0
```

### 5. Instalar y configurar SSH (opcional, para acceso remoto)
```bash
sudo apt update && sudo apt install openssh-server -y
sudo systemctl start ssh
sudo systemctl enable ssh
sudo systemctl status ssh
```

## Uso
Una vez instalados los prerrequisitos, puede compilar y ejecutar el conversor de moneda con:
```bash
gcc conversor.c -o conversor
./conversor
```

## Contribución
Si desea contribuir a este proyecto, puede clonar el repositorio, realizar cambios y enviar un pull request.
```bash
git clone <URL_DEL_REPOSITORIO>
cd proyectoC
```

## Licencia
Este proyecto está bajo la licencia MIT. Para más detalles, consulte el archivo `LICENSE`.







