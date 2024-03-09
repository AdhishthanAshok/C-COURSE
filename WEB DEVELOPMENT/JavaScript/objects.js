// const myObj = {
//   name: "adi",
//   age: 19,
//   fullName: "AdiAshok", // Prettier extension remove the key's quotes , real is --> "fullName" : "AdiAshok"
//   location: "Noida",
//   email: "adi@gmail.com",
//   isLoggedin: false,
//   lastLoginDays: ["Monday", "Tuesday"],
// };

// // two methods of calling a object are from . and [ ]   --> [ ] is better from . because it also workds for strings
// console.log(myObj.name);
// console.log(myObj["email"]);
// console.log(myObj["fullName"]);
// console.log(myObj.fullName); // Will not work

// // Symbol declaretion with correct syntax

// const mySym = Symbol("key1");
// const myObj1 = {
//   name: "adi",
//   age: 19,
//   [mySym]: "Key1", // Symbol should be declared with square bracket
//   fullName: "AdiAshok", // Prettier extension remove the key's quotes
//   location: "Noida",
//   email: "adi@gmail.com",
//   isLoggedin: false,
//   lastLoginDays: ["Monday", "Tuesday"],
// };

// console.log(myObj1[mySym]); // Sybmol should be only accessed with square brackets

// // Object Modification :

// myObj1.email = "adiAshok@gmail.com";

// // Object Freeze , meaning, after freeze , object cannot be modified

// // Object.freeze(myObj1);

// console.log(myObj1);

// myObj1.greeting = function () {
//   console.log("Hello My Object");
// };

// // console.log(myObj1.greeting);  // undefined
// // console.log(myObj1.greeting());  // Gives error
// console.log(myObj1.greeting()); // Gives error

// Nested Objects

const nestedObj = {
  name: "Adi",
  registeredName: {
    fullName: {
      firstName: "Adi",
      lastName: "Ashok",
    },
  },
};

// console.log(nestedObj.registeredName?.fullName.lastName);  // '?' --> is used to check if the value is present or not
//                                                                        , mostly used in API calls
console.log(nestedObj.registeredName.fullName.lastName);

const obj = { 1: "a", 2: "b" };
const obj1 = { 3: "a", 4: "b" };

const ob3 = { obj, obj1 }; // not a correct method , same as arrays
console.log(ob3);
//
const obj3 = Object.assign(
  {}, // target
  obj, // source
  obj1 // source
); /* '{}' is used because all the added values are putting in the empty parenthesis Target
otherwise , if we remove the {} , the target will be obj and all the merging will takeplace in obj*/
console.log(obj3);

// BUT The assign method is not good to do, better method is .. Spreading

const object3 = { ...obj, ...obj1 };
console.log(object3);

// How data will come from Database

const users = [
  {
    id: 1,
    email: "Adi@.com",
  },
  {},
  {},
];
console.log(users[1].email);
console.log(Object.keys(nestedObj));
console.log(Object.values(nestedObj));
console.log(Object.entries(nestedObj));

console.log(nestedObj.hasOwnProperty("age")); // Search the entry . if have or not ... return answer in Boolean
 