program lab02d;

var
    datos : array[1..2000] of integer;
    v, n, i, j, k, suma : integer;
    
begin
    readln(v);
    for i := 1 to v do
    begin
        readln(n);
        for j := 1 to n do
            readln(datos[j]);
            
        suma := 0;
        for k := 1 to n do
            suma := suma + datos[k];
        writeln(suma);
    end;
end.
