program lab02b;

var
    n, cont, n1, n2 : integer;
    
begin
    readln(n);
    cont := 0;
    repeat
        readln(n1);
        readln(n2);
        if n1 > n2 then
            begin writeln(n1); end
        else
            begin
            writeln(n2)
            end;
        cont := cont + 1;
    until n = cont;
end.

