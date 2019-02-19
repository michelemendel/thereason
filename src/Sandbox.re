type pl = {
  name: string,
  age: int,
};

let myObj: pl = {name: "john", age: 7};

[@bs.deriving abstract]
type ob = {
  name: string,
  age: int,
};

let xyz = ob(~name="john", ~age=7);