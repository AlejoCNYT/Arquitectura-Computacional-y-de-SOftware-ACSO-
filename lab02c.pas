program lab02c;

var
    datos : array[1..2000] of real;
    v, n, i, j, k : integer;
    min : real;
    
begin
    readln(v);
    for i := 1 to v do
    begin
        readln(n);
        for j := 1 to n do
            readln(datos[j]);
            
        min := datos[1];
        for k := 1 to n do
            if datos[k] < min then
                min := datos[k];
                
        writeln(min);
    end;
end.
