let myDate = new Date();
console.log(myDate.toString());
console.log(myDate.toDateString());
console.log(myDate.toLocaleString());
console.log(typeof myDate);

let myCreatedDate = new Date(2024, 0, 23); // Months starts from 0 in JS
//                       ( year ,month , Date , Hour , Minutes)
let myCreatedDate2 = new Date(2023, 0, 23, 5, 3); // Months starts from 0 in JS
console.log(myCreatedDate.toDateString());
console.log(myCreatedDate2.toLocaleString());

console.log(
  `Today is date ${myDate.getDate()} of month ${myDate.getMonth()} and day ${myDate.getDay()}`
);

console.log(
  myDate.toLocaleString("default", {
    month: "long",
    weekday: "long",
  })
);

/* ARRAY METHODS  --> Follow this link  */

// https://www.w3schools.com/js/js_array_methods.asp
