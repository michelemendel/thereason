let addCoords = (~x, ~y): float => {
  x +. y;
};
print_endline(string_of_float(addCoords(~x=2.0, ~y=3.0)));