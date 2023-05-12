convertirBinario 0 = [0]
convertirBinario num =	[(mod num 2)] ++ convertirBinario (div num 2)

contarNumMod lista = contarNumMod' lista 0 contarNumMod' lista contador =
if(lista==[])
then mod contador 4
else contarNumMod' (tail lista) (contador + (head lista))


agregarBitAdicionalCuatro lista = agregarBitAdicionalCuatro' lista 0 [] (contarNumMod lista)
agregarBitAdicionalCuatro' lista unos listaAux contador = if(lista==[])
then listaAux ++ (convertirBinario contador)
else agregarBitAdicionalCuatro' (tail lista) (unos+1) (listaAux ++ [(head lista)]) contador
