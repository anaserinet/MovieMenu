#include "serie.hpp"

//Constructor 
VideoSerie::VideoSerie(int numID_vid, std::string nombre_vid, float duracionMin_vid, std::string genero_vid, float promedio_vid, std::string nombreSerie, int numeroEpisodio, std::string temporada) : Video(numID_vid, nombre_vid, duracionMin_vid, genero_vid, promedio_vid)
{
  nombreSerie_ = nombreSerie;
  numeroEpisodio_ = numeroEpisodio;
  temporada_ = temporada;
}

void VideoSerie::setDatos(std::string nomEp, std::string nomSerie)
{
  nombre_vid_ = nomEp;
  nombreSerie_ = nomSerie;
  std::cout<<"Se asignaron los datos: " << nombre_vid_ << " y " << nombreSerie_ << std::endl;
  
}

