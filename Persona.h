//Francisco de Paula Güeto Gallego
//La clase Persona es la superclase de Profesor y Alumno

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;


class Persona{
    private:
        string dni_;
        string nombre_;
        string apellidos_;
        string fechanacimiento_; // dd/mm/aa
        int telefono_;
        string email_;
        string direccion_;

    public:
        //Constructor
        Persona(string dni, string nombre, string apellidos,
        int telefono=0, string direccion="", string email="");

        //Modificadores
        inline void setDNI(string nuevo_dni){dni_ = nuevo_dni;};
        inline void setNombre(string nuevo_nombre){nombre_ = nuevo_nombre;};
        inline void setApellido(string nuevo_apellidos){apellidos_ = nuevo_apellidos;};
        inline void setFechaNacimiento(int nueva_fecha);
        inline void setDireccion(string nueva_direccion){direccion_ = nueva_direccion;};
        inline void setEmail(string nuevo_email){email_ = nuevo_email;};
        inline void setTelefono(int nuevo_telefono){telefono_ = nuevo_telefono;};


        //Observadores
        inline string getDNI(){return dni_;};
        inline string getNombre(){return nombre_;};
        inline string getApellidos(){return apellidos_;};
        string getApellidosyNombre();
        inline string getFechaNacimiento(){return fechanacimiento_;};
        inline string getDireccion(){return direccion_;};
        inline string getEmail(){return email_;};
        inline int getTelefono(){return telefono_;};
};


#endif
