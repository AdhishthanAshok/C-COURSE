import url from "url";

const myURL = new URL("https://www.google.com:3000");
myURL.pathname = "a/b/c";
myURL.search = "?d=e";
myURL.hash = "#fgh";
console.log(myURL);
console.log("Port number is -->", myURL.port);
