/**
 * https://reasonml.chat/t/whats-the-difference-between-skinny-arrow-operator-and-triangle-operator/1330
 */

let fn1 = (a, b) => a - b;

let fn2 = 5->fn1(2);
let fn3 = 5 |> fn1(2);

Js.log(fn2);
Js.log(fn3);