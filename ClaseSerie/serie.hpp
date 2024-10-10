#ifndef SERIE_HPP
#define SERIE_HPP
#include "..//ClasePelis/video.hpp"
#include <iostream>
#include <string>
#include <list>
class VideoSerie: public Video 
{
  //Inicializar atributos
  private:
    std::string nombreSerie_;
    //std:: string nombreEpisodio_;
    int numeroEpisodio_;
    std::string temporada_;

  //Constructor y metodos
  public:
    VideoSerie(int numID_vid, std::string nombre_vid, float duracionMin_vid, std::string genero_vid, float promedio_vid, std::string nombreSerie, int numeroEpisodio, std::string temporada);
    //void mostrarInformacion(float promedio, float ultima_calificacion);

void setDatos(std::string nomEp, std::string nomSerie);

};


#endif 
