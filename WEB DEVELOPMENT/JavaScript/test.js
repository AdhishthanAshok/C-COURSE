console.log("Hello"); // semocolon may or may not be written;
const num = 1445;
let a = "This is a";
var b = "Email"; // Prefer to not to use var , because of issue in block scope  and functional scope   --> still used in old js
c = "Why this is printing"; //  not a good way , but works
let d; //  --> Assign to Undefined
console.table([num, a, b, c, d]); // Prints all in a table format

// EMPTY PARENTHESIS IN BOOLEAN GIVES 0

console.log(2 + 2);
console.log(2 - 2);
console.log(2 * 2);
console.log(2 ** 4);
console.log(2 % 2);
console.log(2 / 2);

let str1 = "hello";
let str2 = " world";

console.log(str1 + str2);

// Complex Situation  --> only good for Question / Answers .. not for practical use.  USE PARENTHESIS

console.log("1" + 2); // 12
console.log("1" + "2"); // 12
console.log(1 + "2"); //12
console.log(1 + "2" + 1); // 121
console.log("1" + "2" + 1); // 121
console.log("1" + 2 + 1); // 121
console.log(1 + 2 + "1"); // 31
//          ^ & ^  will be added

console.log("1" + 2 + "1"); // 121
console.log(1 + "2" + "1"); // 121
console.log(1 + 2 + "1" + 1 + 2 + "2"); // 31122
console.log(1 + 2 + "1" + 1 + 2 + "2"); // 31122
//          ^ & ^  will be added only

console.log(+true); // 1
// console.log(true+);  --> Gives Error

console.log(+""); // 0
// console.log(""+); // --> Gives error

// Comparison operators gives answer in Boolean True or False

console.log(1 < 2); // true
console.log(1 > 2); // false
console.log(1 == 2); // false
console.log(1 === 2); // false
console.log(1 != 2); // true
console.log(1 !== 2); // true

// NOT A GOOD PRACTICE ... ALWAYS COMPARE TWO with same DATA TYPE
console.log("2" > 1); // true
console.log("02" > 1); // true

// The reason of the different outputs is that the equality check operators and comparative operative works differentely
console.log(null > 0); // False      --> Does not convert Null to 0
console.log(null == 0); // False      --> Does not convert Null to 0
console.log(null >= 0); // True      --> comparator operator converts the NULL into 0 and then compare 0 >= 0 ..  that gives true
console.log(undefined > 0); // False      --> Does not convert Null to 0
console.log(undefined == 0); // False      --> Does not convert Null to 0
console.log(undefined < 0); // false     --> comparator operator converts the NULL into 0 and then compare 0 >= 0 ..  that gives true

// === (Tripe Equal checks Data type also Without converting to to same datatype)
console.log("2" === 2); // False   --> because of different data types

// DATA TYPES (TWO TYPES)

// Primitive Data types are of 7 types --> String , Number  , Boolean , null , undefined , Symbol , BingInt
// Referense (Non Primitive Data Types)  --> Array , Objects , Functions

// Javascript is Dynamically Typed Language

// Symbols --> Make the variable Unique even if two have same values
const id = Symbol("123");
const anotherid = Symbol("123");
console.log(id === anotherid); // False

const bigNumber = 1412124134131241251241251241n; // --> Putting n at last in a number will make it a BigInt data type

const heros = ["Shaktiman", "Nagraj", "Goda"];

let myObj = {
  name: "Adi",
  age: 20,
};

const myfunction1 = function () {
  console.log("Hello World");
};

const myfunction2 = function (a, b) {
  console.log("Hello World");
  return a * b;
};

console.log(myfunction1()); // OUTPUT WILL BE : Hello World and Undefined beacause the function does not return ant value so it gives undefined
console.log(myfunction2(5, 4)); // Output will be  : Hello World and 20

// TO Learn about TypeOf in JS refer --> https://www.w3schools.com/js/js_typeof.asp

// Typeof of null --> Object
// Typeof of undefined --> undefined

// ********************************************* //

//  Stack and heap Memory

// Primitive Data Types uses  Stack Memory
// Non Primitive Data Types uses  Heap Memory

let myYoutubename = "Adhishthan Ashok";


