use std::time::SystemTime;

fn main() {
  
  let mut start;
  let mut fin;

  start = SystemTime::now();

  let mut numbers : [i32; 10] = [5,10,42,73,92813,2198712,9872,982981,21192, 502];
  let size = 10;

  let mut aux : i32;


  for i in 0..size
  {
      for j in 0..size-i-1
      {
          if numbers[j] > numbers[j+1]
          {
              aux = numbers[j];
              numbers[j] = numbers[j+1];
              numbers[j+1] = aux;
          }
      }
  }

  println!("ARREGLO ORDENADO");

  for i in 0..size
  {
      print!("[{}] ", numbers[i]);
  }

  fin = SystemTime::now();
  let difference = fin.duration_since(start);
  println!("\nEl tiempo de ejecución fue de: {:?}", difference);
}