const a = document
  .getElementsByClassName("title")
  .getAttribute("class", "test");
console.log(a);

// .innerHTML --> It gives the whole HTML , which is written on IDE


// .innerText --> it shows the text showed on the browser.

// .innerContent -> it Shows all the context , even it is set on "display : none" property
