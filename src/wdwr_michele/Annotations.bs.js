// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

function avg(a, b) {
  return (a + b) / 2.0;
}

function payment(principal, apr, $staropt$star, param) {
  var years = $staropt$star !== undefined ? $staropt$star : 30;
  var r = apr / 12.0 / 100.0;
  var n = Caml_int32.imul(years, 12);
  var powerTerm = Math.pow(1.0 + r, n);
  return principal * (r * powerTerm) / (powerTerm - 1.0);
}

function toFixed(prim, prim$1) {
  return prim.toFixed(prim$1);
}

exports.avg = avg;
exports.payment = payment;
exports.toFixed = toFixed;
/* No side effect */
