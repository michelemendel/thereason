/* Re */

/* exec */
print_endline("--- Re.exec");
let res = Js.Re.exec("hello world", [%re "/(o.)/g"]);
Js.log(res);

/* test */
print_endline("--- Re.test");
let res = Js.Re.test("hello world", [%re "/hello/"]);
Js.log(res);

/* String */
print_endline("--- String.match");
let res = Js.String.match([%re "/(.)\1/g"], "hello worrld");
Js.log(res);

print_endline("--- String.search");
let res1 = Js.String.search([%re {|/(.)\1/|}], "hello worrld");
let res2 = Js.String.search([%re "/(.)\1/"], "hello worrld");
Js.log(res1);
Js.log(res2);

/* print_endline("--- String.search");
   let r = Str.regexp({|hello \([A-Za-z]+\)|}) in; */

print_endline("--- String.replace");
let res = Js.String.replace("world", "Joe", "hello world");
Js.log(res);

print_endline("--- String.split");
let res = Js.String.split(" ", "hello world");
Js.log(res);