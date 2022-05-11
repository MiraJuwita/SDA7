// alternative 1

// IsEmpty
// memeriksa list sudah penuh atau belum dengan cara memeriksa nilai tail, jika tail = -1, maka empty kita tidak memriksa head.
Function IsEmptyAlt1( Q : Queue ) ? boolean 
  Kamus 
  Algoritma 
    ? ( Q.head = -1 and Q.tail = -1 )
    
// IsFull
// memerika list sudah penuh dengan mengecek nilai tail, jika tail >= max-1.
Function IsFullAlt1( Q : Queue ) ? boolean 
  Kamus 
  Algoritma 
    ? (Q.head = 0 and Q.tail = NMax-1 )
    
// Add
// penambahan elemen selalu menggerakkan variabel tail dengan cara increment counter tail dahulu.
Procedure EnQueueAlt1( input/output Q:Queue, input X:integer )
{ IS. Queue mungkin kosong atau penuh, dan P berisi data 
  FS. X di-enqueue kedalam Queue dengan Alternative 1, tampilkan penuh apabila queue penuh } 
  Kamus 
  Algoritma 
      if (Q.head = 0 and Q.tail = NMax-1 ) then       // queue penuh 
          output('penuh') 
      else 
          if ( Q.head = -1 and Q.tail = -1 ) then 
              Q.head <- Q.head + 1                     // queue kosong, head bertambah 1 
          {end if} 
          Q.tail <- Q.tail + 1                         // queue kosong dan tidak kosong, tail bertambah 1 
          Q.info [Q.tail] <- X                         // elemen di tambahkan 
      {end if}
      
// Delete 
// menghapus elemen dengan cara menggeser semua elemen list k
Procedure DeQueueAlt1( input/output Q: queue) 
{ IS. Queue mungkin kosong atau penuh 
  FS. Queue di-dequeue dengan Alternative 1 } 
  Kamus 
        i : integer 
  Algoritma 
      if ( Q.head = -1 and Q.tail = -1 ) then       // kondisi kosong 
          output('Stack kosong') 
      else                                          // tidak kosong 
           i <- 0                                   // elemen selanjutnya dimajukan satu langkah kedepan 
           while ( i < Q.Tail ) do 
               Q.info[i] <- Q[i+1] 
               i++ 
           {end while} 
           Q.tail <- Q.tail - 1                      // elemen terhapus
           if ( Q.Tail = -1 ) then 
              Q.Head -1 
           {end if} 
      {end if}
