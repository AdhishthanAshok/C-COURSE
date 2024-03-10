const buttons = document.querySelectorAll(".button");
const heading = document.querySelector("h1");
const heading2 = document.querySelector("h2");
const body = document.querySelector("body");

buttons.forEach(function (button) {
  button.addEventListener("click", function (e) {
    if (e.target.id === "pink") {
      body.style.backgroundColor = e.target.id;
      heading.style.color = "navy";
      heading2.style.color = "navy";
    }
    if (e.target.id === "lightgreen") {
      body.style.backgroundColor = e.target.id;
      heading.style.color = "blue";
      heading2.style.color = "blue";
    }
    if (e.target.id === "lightblue") {
      body.style.backgroundColor = e.target.id;
      heading.style.color = "brown";
      heading2.style.color = "brown";
    }
    if (e.target.id === "navy") {
      body.style.backgroundColor = e.target.id;
      heading.style.color = "green";
      heading2.style.color = "green";
    }
  });
});
