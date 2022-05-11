// alternative3

// IsEmpty
// memeriksa list sudah penuh atau belum dengan cara memeriksa nilai tail, 
//jika tail = -1, maka empty kita tidak bisa memerika head
Function IsEmptyAlt3( Q:Queue ) -> boolean
    Kamus
    Alghoritma
        -> ( Q.head = -1 and Q.tail = -1 )
        
// IsFull
// memerika list sudah penuh dengan mengecek nilai tail, 
//jika tail >= max-1 berarti sudah penuh
Function IsFullAlt3( Q:Queue ) -> boolean
  Kamus
  Alghoritma
       -> (Q.head = 0 and Q.Tail = NMax-1) or (Q.head = ( Q.tail + 1))
       
// Add
// penambahan elemen selalu menggerakkan variabel tail 
// dengan cara increment counter tail dahulu.
Procedure EnQueueAlt3(input/output Q:queue, input p : infotype)
{ IS. Queue mungkin kosong atau penuh, dan P berisi data
  FS. P di-enqueue kedalam Queue, dengan Alternative 3}
Kamus
Algoritma
	if (Q.head = 0 and Q.Tail = NMax-1) or (Q.head = ( Q.tail + 1)) then // Queue penuh
		output('Queue penuh') 
	else  if ( Q.head = -1 and Q.Tail = -1 ) then         				 // Queue kosong 
			Q.head <- Q.head + 1
			Q.tail <- Q.tail + 1
			if ( Q.tail = NMax-1 ) then					 // Kondisi khusus, tail sudah di ujung kanan dan tidak penuh 
				Q.tail <- 0
			else		     						 // Kondisi biasa 
				Q.tail <- Q.tail + 1
			{end if}
		Q.info[Q.tail] <- p      						 // data di-tambahkan di posisi tail 
	{end if}      
       
// Delete 
// menghapus elemen dengan cara menggeser semua elemen list ke depan dan 
// mengurangi tail dengan 1 pergeseran dengan looping 
Procedure DeQueueAlt3(input/output Q:queue)
{ IS. Queue mungkin kosong atau penuh
  FS. Queue di-dequeue dengan Alternative 3}
Kamus 
Algoritma
	if ( Q.head = -1 and Q.Tail = -1 ) then              // Queue kosong
		  output('Stack kosong')
	else
      if Q.Tail = Q.Head then     			     // data cuman 1 elemenm berada dimanapun 
          Q.head <- -1
          Q.tail <- -1
      else if ( Q.Head <- nMax-1 and Q.tail <> Q.head ) then // Kondisi khusus, head ada di ujung kanan dan tidak penuh 
               Q.head <- 0 
      else     						     // Kondisi biasa 
          Q.head <- Q.head + 1
      {end if}
	{end if}
       
