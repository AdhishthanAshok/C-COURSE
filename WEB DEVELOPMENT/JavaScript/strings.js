// Bad Practice

const name = "adi";
const repocount = 10;

console.log(name + repocount + " Value");

// Good Practice

// Use Back Ticks --> It consists of String manipulation and contains placeholders

console.log(`Hello my name is ${name} and my repo count is ${repocount}`);

const gameName = new String(`Abcdefg-/World/-Coding`);
console.log(gameName.toUpperCase()); // HELLOOOO
console.log(gameName[5]); // o
console.log(gameName.toUpperCase()[5]); // O
console.log(gameName.charAt(5)); // l
console.log(gameName.indexOf("H")); // l

const newstring = gameName.substring(0, 6); // Will consistes of 6-1 = 5 characters
console.log(newstring);

const newstring1 = gameName.slice(-13, 7); // Can use Negative values in Slice
console.log(newstring1);

const newString2 = "   Adi   ";
console.log(newString2);
console.log(newString2.trim()); // Remove White Spaces from starting (Also use trimStart()) and ending (Also use trimEnd())

const url = "https://Adi.com/adi%20Ashok";
console.log(url);
console.log(url.replace("%20", "-")); // .replace(what to remove , what to replace ) OUTPUT --> adi-Ashok

console.log(url.includes("Adi")); // Tells about having the value in string or not ... return answer in Boolean
console.log(url.includes("AdiAshok"));

// Split(seperator , limit)  --> Separator takes the input on which basis thae string should be converted to Array

console.log(gameName.split("/"));
