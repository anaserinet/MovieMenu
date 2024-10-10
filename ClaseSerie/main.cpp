#include "ClasePelis/video.cpp"
#include "ClaseSerie/serie.cpp"
#include <vector>

int main() {
  // vectores para guardar objetos peliculas y series
  std::vector<Video> peliculas; 
  std::vector<VideoSerie> series;

  //vector de nombres para peliculas y series para el display
  std::vector<std::string> nombres_peliculas; 
  std::vector<std::string> nombres_series;

  // Crear objetos video, agrego objetos a vector peliculas y agrego sus nombres a una lista
  peliculas.emplace_back(1289, "Shrek", 180, "Animacion", 0);
  nombres_peliculas.push_back("1. Shrek");

  peliculas.emplace_back(1847, "Pulp Fiction", 154, "Comedia oscura", 4);
  nombres_peliculas.push_back("2. Pulp Fiction");

  peliculas.emplace_back(1456, "Avatar", 162, "Accion", 0);
  nombres_peliculas.push_back("3. Avatar");

  peliculas.emplace_back(1083, "Spider-Man: Across the Spider-Verse", 162,
                         "Animacion", 0);
  nombres_peliculas.push_back("4. Spider-Man: Across the Spider-Verse");

  peliculas.emplace_back(1826, "El Rey Leon", 888, "Animacion", 0);
  nombres_peliculas.push_back("5. El Rey Leon");

  //Crear objetos VideoSerie::Video (int numID_vid - str nombre_vid - float duracionMin_vid - str genero_vid - float promedio_vid - str nombreSerie - int numeroEpisodio - str temporada)
  
  

  
  

  // Inicializar variables que se van a estar reemplazando durante el codigo
  float ultima_calificacion = 0;
  bool desea_calificar = true;
  bool otra_pelicula = true;

  while (otra_pelicula) {
    // Proyectar las opciones de peliculas
    std::cout << "Que pelicula deseas ver? Ingresa el numero de la pelicula: "
              << std::endl;
    for (const auto &name : nombres_peliculas) {
      std::cout << name << std::endl;
    }

    // Guardo la pelicula que quiere ver el usuario en una variable
    int pelicula_que_desea_ver = 0;
    std::cin >> pelicula_que_desea_ver;

    // Trabajar directamente con el objeto en el vector
    peliculas[pelicula_que_desea_ver - 1].mostrarInformacion(0, 0);

    // Llamar metodos
    while (desea_calificar) {
      std::cout << "Cuantas estrellas le das a la pelicula del 1 - 5?"
                << std::endl;
      std::cin >> ultima_calificacion;
      peliculas[pelicula_que_desea_ver - 1].agregarCalificacion(
          ultima_calificacion);
      desea_calificar = peliculas[pelicula_que_desea_ver - 1].desea_calificar();
    }

    float promedio_total =
        peliculas[pelicula_que_desea_ver - 1].promCalificacion();
    peliculas[pelicula_que_desea_ver - 1].mostrarInformacion(
        promedio_total, ultima_calificacion);

    std::cout
        << "Escoge otro video de la lista y compara sus calificaciones con "
        << nombres_peliculas[pelicula_que_desea_ver - 1] << std::endl;
    for (const auto &name : nombres_peliculas) {
      std::cout << name << std::endl;
    }

    // obtener videos para compararlos en la funcion amiga
    int pelicula_compara_num = 0;
    std::cout << "(Ingresa el numero de la pelicula en la lista): "
              << std::endl;
    std::cin >> pelicula_compara_num;

    // comparacion de las 2 peliculas con funciones amigas <,>,==
    if (peliculas[pelicula_que_desea_ver - 1] >
        peliculas[pelicula_compara_num - 1]) {
      std::cout << "La pelicula "
                << nombres_peliculas[pelicula_que_desea_ver - 1]
                << " tiene un mayor promedio de calificacion que la pelicula "
                << nombres_peliculas[pelicula_compara_num - 1] << std::endl;
    }
    if (peliculas[pelicula_que_desea_ver - 1] ==
        peliculas[pelicula_compara_num - 1]) {
      std::cout << "La pelicula "
                << nombres_peliculas[pelicula_que_desea_ver - 1] << " y "
                << nombres_peliculas[pelicula_compara_num - 1]
                << " tienen el mismo promedio " << std::endl;
    }
    if (peliculas[pelicula_que_desea_ver - 1] <
        peliculas[pelicula_compara_num - 1]) {
      std::cout << "La pelicula "
                << nombres_peliculas[pelicula_que_desea_ver - 1]
                << " tiene un menor promedio de calificacion que la pelicula "
                << nombres_peliculas[pelicula_compara_num - 1] << std::endl;
    }
    return 0;
  }
}
