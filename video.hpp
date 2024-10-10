#ifndef VIDEO_HPP
#define VIDEO_HPP
#include <iostream>
#include <string>
#include <list>

class Video
{
public:
    // Constructor
    Video(int numID_vid, std::string nombre_vid, float duracionMin_vid, std::string genero_vid, float promedio_vid);
    // Metodos
    void mostrarInformacion(float promedio, float ultima_calificacion); //imprime en pantalla la informacion del video (ID, nombre, duracion, genero, ultima calificacion, calificacion promedio))
    void agregarCalificacion(float calificacion_vid); //agrega la calificacion que ingrese el usuario sobre una pelicula en el vector de sus calificaciones
    float promCalificacion(); // saca el promedio de una pelicula acorde a todas las calificaciones que ingrese el usuario sobre la misma
    bool desea_calificar(); // metodo para preguntar si el usuario quiere dar otra calificacion 
    void agregar_nombre_pelicula(); //agrega el nombre de la pelicula de cada objeto creado a una lista 

    friend bool operator > (const Video Pelicula1, const Video Pelicula2);
    friend bool operator ==(const Video Pelicula1, const Video Pelicula2);
    friend bool operator<(const Video Pelicula1, const Video Pelicula2);
protected:
    //Inicializar atributos
    int numID_vid_; 
    std::string nombre_vid_;
    float duracionMin_vid_;
    std::string genero_vid_;
    float promedio_vid_;
    std::list<float> calificaciones_; // crea una lista "calificaciones_" para cada objeto
};

#endif 
