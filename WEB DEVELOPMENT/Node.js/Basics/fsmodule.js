const fs = require("fs");

fs.readFile(
  "file.txt", //  name of file
  "utf8", // encoding
  (
    err, // return function   , /* err will execute if an error occur otherwise data will run*/
    data // return function
  ) => {
    console.log(err, data);
  }
);
const a = fs.readFileSync("file.txt");
console.log("Finished Reading the file.txt");

console.log("Finished Reading file"); // --> This statement is written before the above .readfile function because node.js works on NON-Blocking I/O method
// ........................................  where the CPU takes time to read the content from the file and in that time it will execture the following statements
fs.writeFile("file1.txt", "This is the data", () => {
  console.log("Written to the file");
});
