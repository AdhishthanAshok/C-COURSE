const coding = ["js", "ruby", "java", "python", "cpp"];

// coding.forEach( function (val){
//     console.log(val);
// } )

// coding.forEach((item) => {
//   console.log(item);
// });

// function printMe(item) {
//   console.log("Hello " + item);
// }

// coding.forEach(printMe);

// coding.forEach((item, index, arr) => {
//   console.log("Hello World " + item, index, arr);
// });

const myCoding = [
  {
    languageName: "javascript",
    languageFileName: ".js",
  },
  {
    languageName: "java",
    languageFileName: ".java",
  },
  {
    languageName: "python",
    languageFileName: ".py",
  },
];

// myCoding.forEach((item) => {
//   console.log("Hello Languages " + item.languageName);
//   console.log("Hello Languages " + item.languageFileName);
// });

// const coding = ["js", "ruby", "java", "python", "cpp"]

// const values = coding.forEach( (item) => {
//     //console.log(item);
//     return item
// } )

// console.log(values);

/*        FILTER       */

const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// const myNums = myNums.filter((num) => {
//   return num > 4;
// });

// const myNums = [];

myNums.forEach((num) => {
  if (num >= 9) {
    myNums.push(num);
  }
});

console.log("myNums :  " + myNums);

const books = [
  { title: "Book One", genre: "Fiction", publish: 1981, edition: 2004 },
  { title: "Book Two", genre: "Non-Fiction", publish: 1992, edition: 2008 },
  { title: "Book Three", genre: "History", publish: 1999, edition: 2007 },
  { title: "Book Four", genre: "Non-Fiction", publish: 1989, edition: 2010 },
  { title: "Book Five", genre: "Science", publish: 2009, edition: 2014 },
  { title: "Book Six", genre: "Fiction", publish: 1987, edition: 2010 },
  { title: "Book Seven", genre: "History", publish: 1986, edition: 1996 },
  { title: "Book Eight", genre: "Science", publish: 2011, edition: 2016 },
  { title: "Book Nine", genre: "Non-Fiction", publish: 1981, edition: 1989 },
];

let userBooks = books.filter((bk) => bk.genre === "History");

userBooks = books.filter((bk) => {
  return bk.publish >= 1995 && bk.genre === "History";
});
console.log(userBooks);

/* MAPS  */
const myNumers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// const newNums = myNumers.map( (num) => { return num + 10})

const newNums = myNumers
  .map((num) => num * 10)
  .map((num) => num + 1)
  .filter((num) => num >= 40);

console.log(newNums);
