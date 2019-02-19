let a = [1, 2, 3];
let b = [5, 6, 7];
let c = a @ b;

Js.log(c |> Array.of_list);

let a1 = [9, 8, 7, 6];

// let [a, b] =
//   switch (a1) {
//   | [a, b] => [a, b]
//   | [] => [0, 0]
//   | [a, ...tail] => [0, 0]
//   | _ => []
//   };

let xs = Js.Array.joinWith(":", Array.of_list(a1));

Js.log(xs);

let x =
  switch (a1) {
  | [] => "Empty list"
  | [a, ...tail] =>
    "list with the head value "
    ++ string_of_int(a)
    ++ ", and tail of "
    ++ Js.Array.joinWith(":", Array.of_list(tail))
  };

Js.log(x);