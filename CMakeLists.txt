cmake_minimum_required(VERSION 3.29)
project(Sistemas_distribuidos C)

set(CMAKE_C_STANDARD 11)

add_executable(Sistemas_distribuidos
    practica1/cliente.c
    practica1/prueba.c
    practica1/servidor.c
    cliente.c
    clienteTCP.c
    ejemplo_codificar.c
    servidor.c
    servidorTCP.c)
