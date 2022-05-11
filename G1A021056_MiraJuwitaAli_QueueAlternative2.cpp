// alternative2

// IsEmpty
// memeriksa list sudah penuh atau belum dengan cara memeriksa nilai tail, 
//jika tail = -1, maka empty kita tidak bisa memerika head
Function IsEmptyAlt2( Q:Queue ) -> boolean
Kamus 
Alghoritma 
  -> ( Q.head = -1 and Q.tail = -1 )
  
// IsFull
// memerika list sudah penuh dengan mengecek nilai tail, 
//jika tail >= max-1 berarti sudah penuh
Function IsFullAlt2( Q:Queue ) ? boolean 
Kamus 
Algoritma 
    -> ( Q.head = 0 and Q.tail = NMax-1 )
    
// Add
// penambahan elemen selalu menggerakkan variabel tail 
// dengan cara increment counter tail dahulu.
Procedure EnQueueAlt2(input/output Q: Queue, input P : infotype)
{ IS. Queue mungkin kosong atau penuh, dan P berisi data
  FS. P di-enqueue kedalam Queue, dengan Alternative 2 } 
Kamus
	i,j : integer 
Algoritma
	if ( Q.head = 0 and Q.tail = NMax-1 ) then   // Queue Penuh
		output ('Queue Penuh')
	else  if ( Q.head = -1 and Q.Tail = -1 ) then // Queue Kosong 
			Q.head <- Q.head + 1
			Q.tail <- Q.tail + 1
			Q.info[Q.tail] <- P
	else if ( Q.tail = NMax-1 ) then   	      // Kondisi Khusus, jika tail ada di ujung kanan, dan tidak penuh
			i ? Q.head         	      // maka seluruh antrian dimajukan ke posisi paling depan semua
			j ? 0
			while ( i < Q.tail ) do 
					Q.info[j] <- Q.[i] 
					i <- i + 1
					j <- j + 1
			{end while}
			Q.head <- 0          		// maka head menjadi 0 dan tail sama dengan j
			Q.tail <- j
			Q.info[Q.tail] <- P  		// data di enqueue di posisi tail
	else
		Q.tail <- Q.tail + 1      	        // kondisi biasa 
		Q.info[Q.tail] <- P 
	{end if}

// Delete 
// menghapus elemen dengan cara menggeser semua elemen list ke dean dan 
// mengurangi tail dengan 1 pergeseran dengan looping
Procedure DeQueueAlt2(input/output Q : queue)
{ IS. Queue mungkin kosong atau penuh
  FS. Queue di-dequeue , dengan Alternative 2 }
Kamus
Algoritma
	if ( Q.head = -1 and Q.Tail = -1 ) then	//queue kosong
		  output('Stack kosong')	
	else	              			// queue tidak kosong
      p <- Q.info[q.head]			// data yang di head disimpan di p
      if ( Q.head = Q.tail ) then		// jika 1 elemen dan posisi dimanapun dan tidak kosong
        Q.head <- -1				//maka head dan tail pasti jadi -1 semua} Q.tail   -1
      else					// kondisi biasa, headnya nambah 1
        Q.head ++
      {end if}
	{end if}    

